%{ 
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <string.h>
#include "hashtbl.h"

  extern int yylineno; 
  extern char* yytext;
  extern FILE *yyin;
  extern int yylex();
  extern void yyerror(const char* err);

HASHTBL *hashtbl;
int scope=0;
//int errornum=0;

%}
%define parse.error verbose

%union{
  int intval;
  float floatval;
  char charval;
  char* strval;
}



%token <strval> T_FUNCTION    "function"
%token <strval> T_SUBROUTINE  "subroutine"
%token <strval> T_END         "end"
%token <strval> T_INTEGER     "integer"
%token <strval> T_REAL        "real"
%token <strval> T_LOGICAL     "logicial"
%token <strval> T_CHARACTER   "character"
%token <strval> T_COMPLEX     "complex"
%token <strval> T_RECORD      "record"
%token <strval> T_ENDREC      "endrec"
%token <strval> T_LIST        "list"
%token <strval> T_DATA        "data"
%token <strval> T_CONTINUE    "continue"
%token <strval> T_GOTO        "goto"
%token <strval> T_CALL        "call"
%token <strval> T_READ        "read"
%token <strval> T_WRITE       "write"
%token <strval> T_NEW         "new"
%token <strval> T_LENGTH      "length"
%token <strval> T_IF          "if"
%token <strval> T_THEN        "then"
%token <strval> T_ELSE        "else"
%token <strval> T_ENDIF       "endif"
%token <strval> T_DO          "do"
%token <strval> T_ENDDO       "enddo"
%token <strval> T_STOP        "stop"
%token <strval> T_RETURN      "return"

// ID

%token <strval> T_ID 		  "id"

// CONSTS

%token <intval>     T_ICONST 	 "ICONST"
%token <floatval>   T_RCONST	 "RCONST"
%token <charval>    T_LCONST	 "LCONST"
%token <strval>     T_CCONST	 "CCONST"

// LISTFUNC
   
%token T_LISTFUNC	  "listfunc"
// STRING

%token T_STRING	  "string"

//OPERANTS

%token T_OROP        "||"
%token T_ANDOP       "&&"
%token T_NOTOP       "!="
%token T_RELOP       "== or != or < or > or <= or >="
%token T_ADDOP       "+ or -"
%token T_MULOP       "*"
%token T_DIVOP       "/"
%token T_POWEROP     "**"


//SPEC CHARS

%token T_LPAREN      "("
%token T_RPAREN      ")"
%token T_COMMA       ","
%token T_ASSIGN      "="
%token T_DOT         "."
%token T_COLON       ":"
%token T_LBRACK      "["
%token T_RBRACK      "]"


%token T_EOF         0 "end of file"  


%type <strval> program body declarations type vars undef_variable dim dims fields field vals value_list values value sign constant simple_constant complex_constant statements labeled_statement label statement assignment variable expressions expression listexpression goto_statement labels if_statement subroutine_call io_statement read_list read_item iter_space step write_list write_item compound_statement branch_statement tail loop_statement subprograms subprogram header formal_parameters

//https://www.tutorialspoint.com/fortran/fortran_operators_precedence.htm
//63 shift/reduce stis arithmitikes praksis
%right T_ASSIGN
%left  T_OROP
%left  T_ANDOP
%left  T_RELOP
%left  T_ADDOP
%left  T_MULOP T_DIVOP
%left  T_POWEROP
%left  T_NOTOP

%nonassoc LOWER_THAN_ELSE
%nonassoc T_ELSE



%start program

%%

program:          body T_END subprograms 
                  |body error subprograms {yyerror("expecting END character, found EOF");yyerrok; yyclearin;} 
                  ;
body:             declarations statements;
declarations:     declarations type vars
             | declarations T_RECORD fields T_ENDREC vars
             | declarations T_DATA vals
             | %empty { } ;
type:            T_INTEGER | T_REAL | T_LOGICAL | T_CHARACTER | T_COMPLEX ;
vars:             vars T_COMMA undef_variable
                  | undef_variable ;
undef_variable:   T_LIST undef_variable
                  | T_ID T_LPAREN dims T_RPAREN       {hashtbl_insert(hashtbl, $1, NULL, scope);}
                  | T_ID                              {hashtbl_insert(hashtbl, $1, NULL, scope);};
dims: dims T_COMMA dim
                   | dim ;
dim: T_ID                                             {hashtbl_insert(hashtbl, $1, NULL, scope);};
   | T_ICONST;
fields: fields field
               | field ;
field: type vars
               |  T_RECORD   fields T_ENDREC vars ;
vals: vals T_COMMA T_ID value_list                     {hashtbl_insert(hashtbl, $3, NULL, scope);}
      | T_ID value_list                                {hashtbl_insert(hashtbl, $1, NULL, scope);};
value_list:     T_DIVOP values T_DIVOP ;
values:         values T_COMMA value
                | value ;
value: sign constant
            | T_STRING ;
sign: T_ADDOP | %empty { } ;
constant:       simple_constant
                | complex_constant ;
simple_constant:  T_ICONST | T_RCONST | T_LCONST | T_CCONST ;
complex_constant: T_LPAREN T_RCONST T_COLON sign  T_RCONST T_RPAREN
                  |error    T_RCONST T_COLON sign  T_RCONST T_RPAREN { yyerror("Missing T_LPAREN"); yyerrok; yyclearin;} 
                  |T_LPAREN T_RCONST error sign T_RCONST T_RPAREN    { yyerror("Missing T_COLON"); yyerrok; yyclearin;}
                  |T_LPAREN T_RCONST T_COLON sign  T_RCONST error    { yyerror("Missing T_RPAREN"); yyerrok; yyclearin;} ;

statements: statements labeled_statement
            | labeled_statement ;
labeled_statement: label statement
                   | statement ;
label: T_ICONST ;
statement: simple_statement
            | compound_statement ;
simple_statement: assignment
            | goto_statement
            | if_statement
            | subroutine_call
            | io_statement
            | T_CONTINUE
            | T_RETURN
            | T_STOP ;
assignment: variable T_ASSIGN expression
            | variable error expression {yyerror("Missing = (assign) char"); yyerrok; yyclearin;}
            | variable T_ASSIGN T_STRING 
            | variable error T_STRING {yyerror("Missing =(assign) char"); yyerrok; yyclearin;};
variable: variable T_DOT T_ID  {hashtbl_insert(hashtbl, $3, NULL, scope);}
            | variable T_LPAREN expressions T_RPAREN
            | T_LISTFUNC T_LPAREN expression T_RPAREN
            | T_ID  {hashtbl_insert(hashtbl, $1, NULL, scope);} ;
expressions: expressions T_COMMA expression
            | expression ;
expression: expression T_OROP expression
            | expression T_ANDOP expression
            | expression T_RELOP expression
            | expression T_ADDOP expression
            | expression T_MULOP expression
            | expression T_DIVOP expression
            | expression T_POWEROP expression
            | T_NOTOP expression
            | T_ADDOP expression
            | variable
            | simple_constant
            | T_LENGTH T_LPAREN expression T_RPAREN
            | T_NEW T_LPAREN expression T_RPAREN
            | T_LPAREN expression T_RPAREN
            | T_LPAREN expression T_COLON expression T_RPAREN
            | listexpression ;
listexpression: T_LBRACK expressions T_RBRACK
            | T_LBRACK T_RBRACK ;
goto_statement: T_GOTO label
            | T_GOTO T_ID T_COMMA T_LPAREN labels T_RPAREN  {hashtbl_insert(hashtbl, $2, NULL, scope);} ;
labels: labels T_COMMA label
            | label ;
if_statement: T_IF T_LPAREN expression T_RPAREN label T_COMMA label T_COMMA label
            | T_IF T_LPAREN expression T_RPAREN simple_statement ;
subroutine_call: T_CALL variable ;
io_statement: T_READ read_list 
            | T_WRITE write_list ;
read_list: read_list T_COMMA read_item
            | read_item ;
read_item: variable
            | T_LPAREN read_list T_COMMA T_ID T_ASSIGN iter_space T_RPAREN  {hashtbl_insert(hashtbl, $4, NULL, scope);} ;
iter_space: expression T_COMMA expression step ;
step: T_COMMA expression 
            | %empty { } ;
write_list: write_list T_COMMA write_item
            | write_item ;
write_item: expression
            | T_LPAREN write_list T_COMMA T_ID T_ASSIGN iter_space T_RPAREN  {hashtbl_insert(hashtbl, $4, NULL, scope);}
            | T_STRING;
compound_statement: branch_statement
            | loop_statement ;
branch_statement: T_IF T_LPAREN expression T_RPAREN T_THEN {scope++;}
                  body tail {hashtbl_get(hashtbl, scope);scope--;};
tail:  T_ELSE {scope++;}
        body T_ENDIF {hashtbl_get(hashtbl, scope);scope--;}
        | T_ENDIF ;
loop_statement: T_DO T_ID T_ASSIGN iter_space {hashtbl_insert(hashtbl, $2, NULL, scope);scope++;}
                body T_ENDDO {hashtbl_get(hashtbl, scope);scope--;};
subprograms: subprograms subprogram 
            | %empty { } %prec LOWER_THAN_ELSE;
subprogram: header body T_END ;
header: type T_FUNCTION T_ID T_LPAREN formal_parameters T_RPAREN  {hashtbl_insert(hashtbl, $2, NULL, scope);}
            | T_LIST T_FUNCTION T_ID T_LPAREN formal_parameters T_RPAREN  {hashtbl_insert(hashtbl, $3, NULL, scope);}
            | T_SUBROUTINE T_ID T_LPAREN formal_parameters T_RPAREN  {hashtbl_insert(hashtbl, $2, NULL, scope);}
            | T_SUBROUTINE T_ID  {hashtbl_insert(hashtbl, $2, NULL, scope);};

formal_parameters: type vars T_COMMA formal_parameters
            | type vars ;




%%
int main(int argc, char *argv[]) {
    int token;
    /*ΔΙΑΒΑΣΕ ΑΡΧΕΙΟ*/

    if (!(hashtbl =hashtbl_create(10,NULL))){
      puts("ERROR ,failed to initialize hashtbl");
      exit(EXIT_FAILURE);
    }

  if(argc > 1){
        yyin = fopen(argv[1], "r");
        if(yyin == NULL){
            perror("ERROR OPENING");
            return -1;
        }
    }
    yyparse();
    
    fclose(yyin);
    hashtbl_destroy(hashtbl);
    return 0;
 }

 


