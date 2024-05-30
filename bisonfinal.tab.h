/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_BISONFINAL_TAB_H_INCLUDED
# define YY_YY_BISONFINAL_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    T_EOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_FUNCTION = 258,              /* "function"  */
    T_SUBROUTINE = 259,            /* "subroutine"  */
    T_END = 260,                   /* "end"  */
    T_INTEGER = 261,               /* "integer"  */
    T_REAL = 262,                  /* "real"  */
    T_LOGICAL = 263,               /* "logicial"  */
    T_CHARACTER = 264,             /* "character"  */
    T_COMPLEX = 265,               /* "complex"  */
    T_RECORD = 266,                /* "record"  */
    T_ENDREC = 267,                /* "endrec"  */
    T_LIST = 268,                  /* "list"  */
    T_DATA = 269,                  /* "data"  */
    T_CONTINUE = 270,              /* "continue"  */
    T_GOTO = 271,                  /* "goto"  */
    T_CALL = 272,                  /* "call"  */
    T_READ = 273,                  /* "read"  */
    T_WRITE = 274,                 /* "write"  */
    T_NEW = 275,                   /* "new"  */
    T_LENGTH = 276,                /* "length"  */
    T_IF = 277,                    /* "if"  */
    T_THEN = 278,                  /* "then"  */
    T_ELSE = 279,                  /* "else"  */
    T_ENDIF = 280,                 /* "endif"  */
    T_DO = 281,                    /* "do"  */
    T_ENDDO = 282,                 /* "enddo"  */
    T_STOP = 283,                  /* "stop"  */
    T_RETURN = 284,                /* "return"  */
    T_ID = 285,                    /* "id"  */
    T_ICONST = 286,                /* "ICONST"  */
    T_RCONST = 287,                /* "RCONST"  */
    T_LCONST = 288,                /* "LCONST"  */
    T_CCONST = 289,                /* "CCONST"  */
    T_LISTFUNC = 290,              /* "listfunc"  */
    T_STRING = 291,                /* "string"  */
    T_OROP = 292,                  /* "||"  */
    T_ANDOP = 293,                 /* "&&"  */
    T_NOTOP = 294,                 /* "!="  */
    T_RELOP = 295,                 /* "== or != or < or > or <= or >="  */
    T_ADDOP = 296,                 /* "+ or -"  */
    T_MULOP = 297,                 /* "*"  */
    T_DIVOP = 298,                 /* "/"  */
    T_POWEROP = 299,               /* "**"  */
    T_LPAREN = 300,                /* "("  */
    T_RPAREN = 301,                /* ")"  */
    T_COMMA = 302,                 /* ","  */
    T_ASSIGN = 303,                /* "="  */
    T_DOT = 304,                   /* "."  */
    T_COLON = 305,                 /* ":"  */
    T_LBRACK = 306,                /* "["  */
    T_RBRACK = 307,                /* "]"  */
    LOWER_THAN_ELSE = 308          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "bisonfinal.y"

  int intval;
  float floatval;
  char charval;
  char* strval;

#line 124 "bisonfinal.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_BISONFINAL_TAB_H_INCLUDED  */
