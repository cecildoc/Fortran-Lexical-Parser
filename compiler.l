%{
 #include <stdio.h>
 #include <stdlib.h> 
 #include <unistd.h>
 #include <math.h>
 #include <string.h>  
 #include "bisonfinal.tab.h"
 #define FLEX_DEBUG 0
 char string_buf[256];

 int errornum = 0;

 void token_print(int token_id);
 int HexToInt(char *str);
 int BinToInt(char *str);
 float BinToFloat(char* str);
 float HexToFloat(char* str);
 void yyerror(const char* err);
 void cconstprt(char* str);
%}

%option noyywrap
%option case-insensitive
%option yylineno

%x SUBSTRING
%x SINGLE_LINE_COMMENT

/* Κανονες με ισοδυναμιες */

LETTER_LOWER [a-z]
LETTER_UPPER [A-Z]
ALFANUM_LOWER [0-9a-z]
ALFANUM_UPPER [0-9A-Z]
DEC_0   [0-9]
DEC_1   [1-9]
HEX_0   [0-9A-Fa-f]
HEX_1   [1-9A-Fa-f]
BIN     [01]
EXP     [E][+-]?[0-9]+

DEC_RCONST_EXP ((0|{DEC_1}{DEC_0}*)?[.]?(0*{DEC_1}+{DEC_0}*|0)([E][+-]?[0-9]+))
DEC_RCONST     (0|{DEC_1}{DEC_0}*)?[.](0*[1-9]+[0-9]*|0)
HEX_RCONST     (0H({HEX_0}+)?\.(0*{HEX_1}+{HEX_0}*|0)*)
BIN_RCONST     (0B[1]([01]*)?\.(0*1+[01]*|0)*)

RCONST         ({DEC_RCONST_EXP}|{DEC_RCONST}|{HEX_RCONST}|{BIN_RCONST})

%%

"FUNCTION"           {token_print(T_FUNCTION); return T_FUNCTION;}
"SUBROUTINE"         {token_print(T_SUBROUTINE); return T_SUBROUTINE;}
"END"                {token_print(T_END); return T_END;};
"INTEGER"            {token_print(T_INTEGER); return T_INTEGER;}
"REAL"               {token_print(T_REAL); return T_REAL;}
"LOGICAL"            {token_print(T_LOGICAL); return T_LOGICAL;}
"CHARACTER"          {token_print(T_CHARACTER); return T_CHARACTER;}
"COMPLEX"            {token_print(T_COMPLEX); return T_COMPLEX;}
"RECORD"             {token_print(T_RECORD); return T_RECORD;}
"ENDREC"             {token_print(T_ENDREC); return T_ENDREC;}
"LIST"               {token_print(T_LIST); return T_LIST;}
"DATA"               {token_print(T_DATA); return T_DATA;}
"CONTINUE"           {token_print(T_CONTINUE); return T_CONTINUE;}
"GOTO"               {token_print(T_GOTO); return T_GOTO;}
"CALL"               {token_print(T_CALL); return T_CALL;}
"READ"               {token_print(T_READ); return T_READ;}
"WRITE"              {token_print(T_WRITE); return T_WRITE;}
"NEW"                {token_print(T_NEW); return T_NEW;}
"LENGTH"             {token_print(T_LENGTH); return T_LENGTH;}
"IF"                 {token_print(T_IF); return T_IF;}
"THEN"               {token_print(T_THEN); return T_THEN;}
"ELSE"               {token_print(T_ELSE); return T_ELSE;}
"ENDIF"              {token_print(T_ENDIF); return T_ENDIF;}
"DO"                 {token_print(T_DO); return T_DO;}
"ENDDO"              {token_print(T_ENDDO); return T_ENDDO;}
"STOP"               {token_print(T_STOP); return T_STOP;}
"RETURN"             {token_print(T_RETURN); return T_RETURN;}



C(AD*|D+)R {token_print(T_LISTFUNC); yylval.strval = strdup(yytext); return T_LISTFUNC;}


([_]{LETTER_LOWER}([_]?[a-z0-9])*[_])|({LETTER_LOWER}{ALFANUM_LOWER}*) {token_print(T_ID); yylval.strval = strdup(yytext); return T_ID;}


{HEX_RCONST}  {token_print(T_RCONST); yylval.floatval = HexToFloat(yytext);  return T_RCONST;}

{BIN_RCONST}  {token_print(T_RCONST); yylval.floatval = BinToFloat(yytext);  return T_RCONST;}

{DEC_RCONST_EXP} {token_print(T_RCONST); yylval.floatval = atof(yytext);  return T_RCONST;}

{DEC_RCONST} {token_print(T_RCONST); yylval.floatval = atof(yytext);  return T_RCONST;}




0B[1]{BIN}* {token_print(T_ICONST); yylval.intval = BinToInt(yytext);  return T_ICONST;}

0H{HEX_1}{HEX_0}* {token_print(T_ICONST); yylval.intval = HexToInt(yytext);  return T_ICONST;}

{DEC_1}{DEC_0}*|0 {token_print(T_ICONST); yylval.intval = atoi(yytext);  return T_ICONST;}





\.(TRUE)\.|\.(FALSE)\. {token_print(T_LCONST); return T_LCONST;}

'([ -~]|\\[nftrbv])' {token_print(T_CCONST); /*yylval.strval = cconstprt(yytext);*/ return T_CCONST;}



 



\"                       { strcpy(string_buf, ""); BEGIN(SUBSTRING); }
<SUBSTRING>\"            { BEGIN(INITIAL); yylval.strval = strdup(string_buf); return T_STRING;}
<SUBSTRING>(\\\n|\\\r\n) { }
<SUBSTRING>(\n|\r\n)     { yyerror("New line found without \\");}
<SUBSTRING>(\\.|[^"\\])  {
                         if(strlen(yytext) == 2){
                            if(strcmp(yytext, "\\n") == 0){
                                strcat(string_buf, "\n");
                            } else if (strcmp(yytext, "\\t") == 0){
                                strcat(string_buf, "\t");
                            }else if (strcmp(yytext, "\\r") == 0){
                                strcat(string_buf, "\r");
                            }else if (strcmp(yytext, "\\f") == 0){
                                strcat(string_buf, "\f");
                            }else if (strcmp(yytext, "\\b") == 0){
                                strcat(string_buf, "\b");
                            }else if (strcmp(yytext, "\\v") == 0){
                                strcat(string_buf, "\v");
                            }else{
                                strcat(string_buf, &yytext[1]);
                            }
                        }else {
                                strcat(string_buf, yytext);
                           }
                    }                           
<SUBSTRING><<EOF>>       { yyerror("End of string without closing\n");}
<SUBSTRING>.             { yyerror("Unknown character.\n");}





"$"                      { BEGIN(SINGLE_LINE_COMMENT);  } 
<SINGLE_LINE_COMMENT>.         { }
<SINGLE_LINE_COMMENT>(\n|\r\n) { BEGIN(INITIAL);} 


".OR."          {token_print(T_OROP); return T_OROP;}
".and."         {token_print(T_ANDOP); return T_ANDOP;}
".not."         {token_print(T_NOTOP); return T_NOTOP;}
".GT."|".GE."|".LT."|".LE."|".EQ."|".NE."  {token_print(T_RELOP); return T_RELOP;}
"+"|"-"         {token_print(T_ADDOP); return T_ADDOP;}
"*"             {token_print(T_MULOP); return T_MULOP;}
"/"             {token_print(T_DIVOP); return T_DIVOP;}
"**"            {token_print(T_POWEROP); return T_POWEROP;}


"("    {token_print(T_LPAREN); return T_LPAREN;}
")"    {token_print(T_RPAREN); return T_RPAREN;}
","    {token_print(T_COMMA); return T_COMMA;}
"="    {token_print(T_ASSIGN); return T_ASSIGN;}
"."    {token_print(T_DOT); return T_DOT;}
":"    {token_print(T_COLON); return T_COLON;}
"["    {token_print(T_LBRACK); return T_LBRACK;}
"]"    {token_print(T_RBRACK); return T_RBRACK;}








[ \t]  {   } //Ignore white space 
[\n]   {   } //ignore new lines
\r\n   {   } //ignore new lines windows
 







<<EOF>>    {token_print(T_EOF); return T_EOF;}
.          {yyerror("Unrecognised character!");}






%%


void token_print(int token_id){

    if(FLEX_DEBUG == 0) return;

    if(token_id == T_ICONST){
        int number;
        if(strncmp(yytext, "0B", 2) == 0) number = BinToInt(yytext);
        else if(strncmp(yytext, "0H", 2) == 0)number = HexToInt(yytext);
        else number = atoi(yytext);
        printf("NUMBER FOUND: %d (%s) | TOKEN NUMBER: %d | LINE: %d\n", number, yytext, token_id, yylineno);

    }else if(token_id == T_RCONST){
        float number;
        if(strncmp(yytext, "0B", 2) == 0) number = BinToFloat(yytext);
        else if(strncmp(yytext, "0H", 2) == 0) number = HexToFloat(yytext);
        else number = atof(yytext);
        printf("FLOAT FOUND: %lf (%s) | TOKEN NUMBER: %d | LINE: %d\n", number, yytext, token_id, yylineno);
    }else{
        printf("[LINE %d] TOKEN %s (%d)\n" , yylineno, yytext, token_id);
        }
}

void yyerror(const char* err){
    errornum++;
    printf("[ERROR IN LINE %d] %s %s\n" , yylineno, err, yytext);


    if(errornum <= 0) return;
    if(errornum == 5){
        printf("MAXIMUM ERRORS REACHED\n");
        exit(EXIT_FAILURE);
    }

    yyless(1);
 }


int HexToInt(char *str){
    return (int) strtoll(&str[2], NULL, 16);
}


int BinToInt(char *str){
    return (int) strtoll(&str[2], NULL, 2);
}

float BinToFloat(char* str){
    float number = 0.0;
    int i,length_real;
    char *character;
    character = strchr(str,'.');
    length_real = strlen(character)-1;
    number = (int)strtol(&str[2],&character,2);
    for(i=1;i<length_real;i++){
        number += (character[i] - '0') * (1/pow(2,i));
    }
    return number;
}

float HexToFloat(char*str){
    float number = 0.0;
    int i,length_real;
    char *character;
    character = strchr(str,'.');
    length_real = strlen(character)-1;
    number = (int)strtol(&str[2],&character,16);
    for(i=1;i<=length_real;i++){
        if(character[i] <= '9')
            number += (character[i] - '0') * (1/pow(16,i));
        else
            number += (character[i] + 10 - 'A') * (1/pow(16,i));
    }
    return number;
}


void cconstprt(char* str){

    if(strlen(yytext) == 2){
        if(strcmp(yytext, "\\n") == 0){
            strcat(string_buf, "\n");
        } else if (strcmp(yytext, "\\t") == 0){
            strcat(string_buf, "\t");
        }else if (strcmp(yytext, "\\r") == 0){
            strcat(string_buf, "\r");
        }else if (strcmp(yytext, "\\f") == 0){
            strcat(string_buf, "\f");
        }else if (strcmp(yytext, "\\b") == 0){
            strcat(string_buf, "\b");
        }else if (strcmp(yytext, "\\v") == 0){
            strcat(string_buf, "\v");
        }else{
            strcat(string_buf, &yytext[1]);
                            }
    }else {
        strcat(string_buf, yytext);
    }

}