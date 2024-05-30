/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "bisonfinal.y"
 
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


#line 91 "bisonfinal.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "bisonfinal.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_FUNCTION = 3,                 /* "function"  */
  YYSYMBOL_T_SUBROUTINE = 4,               /* "subroutine"  */
  YYSYMBOL_T_END = 5,                      /* "end"  */
  YYSYMBOL_T_INTEGER = 6,                  /* "integer"  */
  YYSYMBOL_T_REAL = 7,                     /* "real"  */
  YYSYMBOL_T_LOGICAL = 8,                  /* "logicial"  */
  YYSYMBOL_T_CHARACTER = 9,                /* "character"  */
  YYSYMBOL_T_COMPLEX = 10,                 /* "complex"  */
  YYSYMBOL_T_RECORD = 11,                  /* "record"  */
  YYSYMBOL_T_ENDREC = 12,                  /* "endrec"  */
  YYSYMBOL_T_LIST = 13,                    /* "list"  */
  YYSYMBOL_T_DATA = 14,                    /* "data"  */
  YYSYMBOL_T_CONTINUE = 15,                /* "continue"  */
  YYSYMBOL_T_GOTO = 16,                    /* "goto"  */
  YYSYMBOL_T_CALL = 17,                    /* "call"  */
  YYSYMBOL_T_READ = 18,                    /* "read"  */
  YYSYMBOL_T_WRITE = 19,                   /* "write"  */
  YYSYMBOL_T_NEW = 20,                     /* "new"  */
  YYSYMBOL_T_LENGTH = 21,                  /* "length"  */
  YYSYMBOL_T_IF = 22,                      /* "if"  */
  YYSYMBOL_T_THEN = 23,                    /* "then"  */
  YYSYMBOL_T_ELSE = 24,                    /* "else"  */
  YYSYMBOL_T_ENDIF = 25,                   /* "endif"  */
  YYSYMBOL_T_DO = 26,                      /* "do"  */
  YYSYMBOL_T_ENDDO = 27,                   /* "enddo"  */
  YYSYMBOL_T_STOP = 28,                    /* "stop"  */
  YYSYMBOL_T_RETURN = 29,                  /* "return"  */
  YYSYMBOL_T_ID = 30,                      /* "id"  */
  YYSYMBOL_T_ICONST = 31,                  /* "ICONST"  */
  YYSYMBOL_T_RCONST = 32,                  /* "RCONST"  */
  YYSYMBOL_T_LCONST = 33,                  /* "LCONST"  */
  YYSYMBOL_T_CCONST = 34,                  /* "CCONST"  */
  YYSYMBOL_T_LISTFUNC = 35,                /* "listfunc"  */
  YYSYMBOL_T_STRING = 36,                  /* "string"  */
  YYSYMBOL_T_OROP = 37,                    /* "||"  */
  YYSYMBOL_T_ANDOP = 38,                   /* "&&"  */
  YYSYMBOL_T_NOTOP = 39,                   /* "!="  */
  YYSYMBOL_T_RELOP = 40,                   /* "== or != or < or > or <= or >="  */
  YYSYMBOL_T_ADDOP = 41,                   /* "+ or -"  */
  YYSYMBOL_T_MULOP = 42,                   /* "*"  */
  YYSYMBOL_T_DIVOP = 43,                   /* "/"  */
  YYSYMBOL_T_POWEROP = 44,                 /* "**"  */
  YYSYMBOL_T_LPAREN = 45,                  /* "("  */
  YYSYMBOL_T_RPAREN = 46,                  /* ")"  */
  YYSYMBOL_T_COMMA = 47,                   /* ","  */
  YYSYMBOL_T_ASSIGN = 48,                  /* "="  */
  YYSYMBOL_T_DOT = 49,                     /* "."  */
  YYSYMBOL_T_COLON = 50,                   /* ":"  */
  YYSYMBOL_T_LBRACK = 51,                  /* "["  */
  YYSYMBOL_T_RBRACK = 52,                  /* "]"  */
  YYSYMBOL_LOWER_THAN_ELSE = 53,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_program = 55,                   /* program  */
  YYSYMBOL_body = 56,                      /* body  */
  YYSYMBOL_declarations = 57,              /* declarations  */
  YYSYMBOL_type = 58,                      /* type  */
  YYSYMBOL_vars = 59,                      /* vars  */
  YYSYMBOL_undef_variable = 60,            /* undef_variable  */
  YYSYMBOL_dims = 61,                      /* dims  */
  YYSYMBOL_dim = 62,                       /* dim  */
  YYSYMBOL_fields = 63,                    /* fields  */
  YYSYMBOL_field = 64,                     /* field  */
  YYSYMBOL_vals = 65,                      /* vals  */
  YYSYMBOL_value_list = 66,                /* value_list  */
  YYSYMBOL_values = 67,                    /* values  */
  YYSYMBOL_value = 68,                     /* value  */
  YYSYMBOL_sign = 69,                      /* sign  */
  YYSYMBOL_constant = 70,                  /* constant  */
  YYSYMBOL_simple_constant = 71,           /* simple_constant  */
  YYSYMBOL_complex_constant = 72,          /* complex_constant  */
  YYSYMBOL_statements = 73,                /* statements  */
  YYSYMBOL_labeled_statement = 74,         /* labeled_statement  */
  YYSYMBOL_label = 75,                     /* label  */
  YYSYMBOL_statement = 76,                 /* statement  */
  YYSYMBOL_simple_statement = 77,          /* simple_statement  */
  YYSYMBOL_assignment = 78,                /* assignment  */
  YYSYMBOL_variable = 79,                  /* variable  */
  YYSYMBOL_expressions = 80,               /* expressions  */
  YYSYMBOL_expression = 81,                /* expression  */
  YYSYMBOL_listexpression = 82,            /* listexpression  */
  YYSYMBOL_goto_statement = 83,            /* goto_statement  */
  YYSYMBOL_labels = 84,                    /* labels  */
  YYSYMBOL_if_statement = 85,              /* if_statement  */
  YYSYMBOL_subroutine_call = 86,           /* subroutine_call  */
  YYSYMBOL_io_statement = 87,              /* io_statement  */
  YYSYMBOL_read_list = 88,                 /* read_list  */
  YYSYMBOL_read_item = 89,                 /* read_item  */
  YYSYMBOL_iter_space = 90,                /* iter_space  */
  YYSYMBOL_step = 91,                      /* step  */
  YYSYMBOL_write_list = 92,                /* write_list  */
  YYSYMBOL_write_item = 93,                /* write_item  */
  YYSYMBOL_compound_statement = 94,        /* compound_statement  */
  YYSYMBOL_branch_statement = 95,          /* branch_statement  */
  YYSYMBOL_96_1 = 96,                      /* $@1  */
  YYSYMBOL_tail = 97,                      /* tail  */
  YYSYMBOL_98_2 = 98,                      /* $@2  */
  YYSYMBOL_loop_statement = 99,            /* loop_statement  */
  YYSYMBOL_100_3 = 100,                    /* $@3  */
  YYSYMBOL_subprograms = 101,              /* subprograms  */
  YYSYMBOL_subprogram = 102,               /* subprogram  */
  YYSYMBOL_header = 103,                   /* header  */
  YYSYMBOL_formal_parameters = 104         /* formal_parameters  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   497

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  127
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  261

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   308


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   126,   126,   127,   129,   130,   131,   132,   133,   134,
     134,   134,   134,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   155,   156,   157,   158,   158,
     158,   158,   159,   160,   161,   162,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   230,   232,   232,   234,   235,   235,   237,
     238,   239,   240,   241,   242,   243,   245,   246
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "\"function\"",
  "\"subroutine\"", "\"end\"", "\"integer\"", "\"real\"", "\"logicial\"",
  "\"character\"", "\"complex\"", "\"record\"", "\"endrec\"", "\"list\"",
  "\"data\"", "\"continue\"", "\"goto\"", "\"call\"", "\"read\"",
  "\"write\"", "\"new\"", "\"length\"", "\"if\"", "\"then\"", "\"else\"",
  "\"endif\"", "\"do\"", "\"enddo\"", "\"stop\"", "\"return\"", "\"id\"",
  "\"ICONST\"", "\"RCONST\"", "\"LCONST\"", "\"CCONST\"", "\"listfunc\"",
  "\"string\"", "\"||\"", "\"&&\"", "\"!=\"",
  "\"== or != or < or > or <= or >=\"", "\"+ or -\"", "\"*\"", "\"/\"",
  "\"**\"", "\"(\"", "\")\"", "\",\"", "\"=\"", "\".\"", "\":\"", "\"[\"",
  "\"]\"", "LOWER_THAN_ELSE", "$accept", "program", "body", "declarations",
  "type", "vars", "undef_variable", "dims", "dim", "fields", "field",
  "vals", "value_list", "values", "value", "sign", "constant",
  "simple_constant", "complex_constant", "statements", "labeled_statement",
  "label", "statement", "simple_statement", "assignment", "variable",
  "expressions", "expression", "listexpression", "goto_statement",
  "labels", "if_statement", "subroutine_call", "io_statement", "read_list",
  "read_item", "iter_space", "step", "write_list", "write_item",
  "compound_statement", "branch_statement", "$@1", "tail", "$@2",
  "loop_statement", "$@3", "subprograms", "subprogram", "header",
  "formal_parameters", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-194)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -194,    22,    42,   284,  -194,  -194,  -194,  -194,  -194,  -194,
    -194,  -194,   486,    32,  -194,    14,    40,    -7,   103,    26,
      71,  -194,  -194,  -194,  -194,    80,     7,   305,  -194,   347,
    -194,  -194,  -194,    28,  -194,  -194,  -194,  -194,  -194,  -194,
    -194,   471,   471,   486,     7,   171,  -194,    74,    85,    93,
    -194,    54,    -7,    54,    96,  -194,   108,   112,  -194,  -194,
    -194,  -194,  -194,   238,   238,   103,    75,  -194,    54,   201,
    -194,   111,  -194,   238,   115,   238,     7,   123,   113,  -194,
    -194,  -194,   155,   238,   178,   139,   141,   169,   170,  -194,
    -194,   479,   113,     7,  -194,    57,  -194,   144,   147,   146,
      -7,   238,   238,   238,  -194,   -11,   184,   148,  -194,    66,
     201,   238,   238,   238,   238,   238,   238,   238,   103,   380,
     238,   390,  -194,    29,     7,  -194,   201,    83,  -194,   201,
    -194,   159,   175,   177,   210,     7,   113,  -194,  -194,    72,
    -194,    47,    74,   185,    16,  -194,   400,   410,   184,  -194,
     238,   216,   238,  -194,   222,   244,    41,   -11,   174,   174,
    -194,  -194,   326,   364,  -194,  -194,  -194,  -194,   105,  -194,
    -194,  -194,   385,   187,   208,  -194,   113,  -194,    57,   188,
     224,  -194,  -194,  -194,  -194,  -194,   109,   206,  -194,  -194,
     420,   226,   201,   230,  -194,   229,  -194,   238,  -194,  -194,
      29,     7,   232,   385,   385,  -194,   231,     6,  -194,   185,
     238,  -194,   238,   238,  -194,   185,   372,   253,  -194,   235,
    -194,   250,   251,   263,   263,   263,  -194,   259,   261,   430,
      97,   262,   238,  -194,  -194,    81,  -194,  -194,   276,   279,
     285,  -194,  -194,   368,  -194,  -194,  -194,   185,   201,  -194,
     270,   272,    11,  -194,  -194,  -194,  -194,  -194,  -194,   300,
    -194
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       8,     0,     0,     0,     1,   120,   120,     9,    10,    11,
      12,    13,     0,     0,    58,     0,     0,     0,     0,     0,
       0,    60,    59,    68,    50,     0,     0,     4,    47,     0,
      49,    51,    53,     0,    54,    55,    56,    57,    52,   110,
     111,     3,     2,     0,     0,     0,    24,     0,     7,     0,
      89,    95,     0,   100,    96,    99,     0,     0,    38,    39,
      40,    41,   109,     0,     0,     0,     0,    81,    80,   107,
      86,    97,   106,     0,     0,     0,     0,    18,     5,    15,
      46,    48,     0,     0,     0,     0,     0,     0,     0,   119,
       8,     0,    25,     0,    23,    35,    28,     0,     0,     0,
       0,     0,     0,     0,    78,    79,   107,     0,    88,     0,
      70,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,     0,     0,    64,    62,     0,    63,    61,
      65,   125,     0,     0,     0,     0,     6,    33,    34,     0,
      31,     0,     0,     0,     0,    98,     0,     0,     0,    84,
       0,     0,     0,    87,    71,    72,    73,    74,    75,    76,
      77,   105,     0,     0,   117,    67,    21,    22,     0,    20,
      14,    66,     0,     0,     0,   121,    26,    29,    35,     0,
       0,    32,    36,    37,    27,    92,     0,    68,    83,    82,
       0,    68,    69,     0,   112,     0,    94,     0,     8,    17,
       0,     0,     0,     0,     0,    30,     0,     0,    90,     0,
       0,    85,     0,     0,     8,     0,   104,     0,    19,   127,
     124,     0,     0,    35,    35,    35,    91,     0,     0,     0,
       0,     0,     0,   102,   118,     0,   123,   122,     0,     0,
       0,   101,   108,     0,   114,   116,   113,     0,   103,   126,
       0,     0,     0,     8,    93,    43,    44,    45,    42,     0,
     115
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -194,  -194,   -86,  -194,    -2,   -35,   -74,  -194,   126,   286,
     -39,  -194,   186,  -194,   152,   -78,  -194,   191,  -194,  -194,
     310,   -12,   309,  -157,  -194,    -3,   256,   -48,  -194,  -194,
    -194,  -194,  -194,  -194,   294,   -70,  -191,  -194,   282,  -110,
    -194,  -194,  -194,  -194,  -194,  -194,  -194,   344,  -194,  -194,
    -193
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     3,    44,    78,    79,   168,   169,    45,
      46,    48,    96,   139,   140,   141,   181,    67,   183,    27,
      28,    29,    30,    31,    32,    68,   109,    69,    70,    34,
     186,    35,    36,    37,    54,    55,   164,   233,    71,    72,
      38,    39,   214,   246,   253,    40,   198,    41,    89,    90,
     202
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,    26,   122,    50,   134,   196,    94,   224,   161,    92,
     221,   222,   257,    51,    53,   104,   105,   106,   110,   227,
      76,   228,     4,    23,    33,   119,    33,   121,    25,    82,
     145,   115,   116,   117,   126,   110,   129,    77,    52,    88,
      88,   161,   249,     5,    49,    24,   187,     6,   179,    53,
     170,    25,    94,   146,   147,   148,   225,   258,   136,   166,
     167,    52,    47,   154,   155,   156,   157,   158,   159,   160,
      23,    73,   163,    83,   145,    25,    84,    85,    58,    59,
      60,    61,   114,   115,   116,   117,   196,     7,     8,     9,
      10,    11,   180,   137,    76,    56,    57,    53,   138,    83,
     176,    74,   190,    85,   192,    23,    58,    59,    60,    61,
      25,    77,   217,   152,    63,   177,    64,    95,   153,   178,
     103,   244,   245,    56,    57,    75,    66,   108,   230,   171,
     152,   185,    97,    23,    58,    59,    60,    61,    25,    62,
      98,    53,    63,   100,    64,   238,   239,   240,    65,   216,
     195,   199,   200,   101,    66,   208,   209,   102,   118,    33,
     124,   170,   163,   120,   163,   229,   219,   259,   123,   130,
     201,   131,   132,   133,   142,    56,    57,     7,     8,     9,
      10,    11,    43,    93,   248,    23,    58,    59,    60,    61,
      25,   125,   143,   144,    63,   151,    64,   226,    56,    57,
     103,   201,   201,   231,   172,   173,    66,   174,    23,    58,
      59,    60,    61,    25,   128,   175,    24,    63,   117,    64,
     206,   111,   112,   103,   113,   114,   115,   116,   117,    66,
     149,   195,   203,   201,   150,   254,    56,    57,   111,   112,
      33,   113,   114,   115,   116,   117,   191,    58,    59,    60,
      61,    25,    62,   204,   210,    63,   207,    64,    56,    57,
     112,    65,   113,   114,   115,   116,   117,    66,    23,    58,
      59,    60,    61,    25,   212,   213,   215,    63,   220,    64,
     234,   223,   235,   103,   113,   114,   115,   116,   117,    66,
       7,     8,     9,    10,    11,    12,   236,   237,    13,    14,
      15,    16,    17,    18,   138,   241,    19,   242,   250,   247,
      20,   251,    21,    22,    23,    24,   255,   252,   256,    25,
      14,    15,    16,    17,    18,   260,   218,    19,   184,    91,
     205,    20,   182,    21,    22,    23,    24,    80,    81,   127,
      25,    14,    15,    16,    17,    18,    99,   107,   193,   194,
      42,     0,     0,     0,    21,    22,    23,    24,     0,     0,
       0,    25,    14,    15,    16,    17,    18,     0,     0,    19,
       0,     0,     0,    20,     0,    21,    22,    23,     0,     0,
       0,     0,    25,    14,    15,    16,    17,    18,     0,     0,
     193,     7,     8,     9,    10,    11,    21,    22,    23,    24,
       0,   111,   112,    25,   113,   114,   115,   116,   117,   111,
     112,   197,   113,   114,   115,   116,   117,   111,   112,   232,
     113,   114,   115,   116,   117,     0,   162,   111,   112,     0,
     113,   114,   115,   116,   117,     0,   165,   111,   112,     0,
     113,   114,   115,   116,   117,     0,   188,   111,   112,     0,
     113,   114,   115,   116,   117,     0,   189,   111,   112,     0,
     113,   114,   115,   116,   117,     0,   211,   111,   112,     0,
     113,   114,   115,   116,   117,    86,   243,     7,     8,     9,
      10,    11,     0,     0,    87,     7,     8,     9,    10,    11,
      43,   135,     7,     8,     9,    10,    11,    43
};

static const yytype_int16 yycheck[] =
{
       3,     3,    76,    15,    90,   162,    45,     1,   118,    44,
     203,   204,     1,    16,    17,    63,    64,    65,    66,   210,
      13,   212,     0,    30,    27,    73,    29,    75,    35,     1,
     100,    42,    43,    44,    82,    83,    84,    30,    45,    41,
      42,   151,   235,     1,    30,    31,    30,     5,     1,    52,
     124,    35,    91,   101,   102,   103,    50,    46,    93,    30,
      31,    45,    30,   111,   112,   113,   114,   115,   116,   117,
      30,    45,   120,    45,   144,    35,    48,    49,    31,    32,
      33,    34,    41,    42,    43,    44,   243,     6,     7,     8,
       9,    10,    45,    36,    13,    20,    21,   100,    41,    45,
     135,    30,   150,    49,   152,    30,    31,    32,    33,    34,
      35,    30,   198,    47,    39,    43,    41,    43,    52,    47,
      45,    24,    25,    20,    21,    45,    51,    52,   214,    46,
      47,   143,    47,    30,    31,    32,    33,    34,    35,    36,
      47,   144,    39,    47,    41,   223,   224,   225,    45,   197,
     162,    46,    47,    45,    51,    46,    47,    45,    47,   162,
      47,   235,   210,    48,   212,   213,   201,   253,    45,    30,
     172,    30,     3,     3,    30,    20,    21,     6,     7,     8,
       9,    10,    11,    12,   232,    30,    31,    32,    33,    34,
      35,    36,    45,    47,    39,    47,    41,   209,    20,    21,
      45,   203,   204,   215,    45,    30,    51,    30,    30,    31,
      32,    33,    34,    35,    36,     5,    31,    39,    44,    41,
      32,    37,    38,    45,    40,    41,    42,    43,    44,    51,
      46,   243,    45,   235,    50,   247,    20,    21,    37,    38,
     243,    40,    41,    42,    43,    44,    30,    31,    32,    33,
      34,    35,    36,    45,    48,    39,    32,    41,    20,    21,
      38,    45,    40,    41,    42,    43,    44,    51,    30,    31,
      32,    33,    34,    35,    48,    45,    47,    39,    46,    41,
      27,    50,    47,    45,    40,    41,    42,    43,    44,    51,
       6,     7,     8,     9,    10,    11,    46,    46,    14,    15,
      16,    17,    18,    19,    41,    46,    22,    46,    32,    47,
      26,    32,    28,    29,    30,    31,    46,    32,    46,    35,
      15,    16,    17,    18,    19,    25,   200,    22,   142,    43,
     178,    26,   141,    28,    29,    30,    31,    27,    29,    83,
      35,    15,    16,    17,    18,    19,    52,    65,    22,    23,
       6,    -1,    -1,    -1,    28,    29,    30,    31,    -1,    -1,
      -1,    35,    15,    16,    17,    18,    19,    -1,    -1,    22,
      -1,    -1,    -1,    26,    -1,    28,    29,    30,    -1,    -1,
      -1,    -1,    35,    15,    16,    17,    18,    19,    -1,    -1,
      22,     6,     7,     8,     9,    10,    28,    29,    30,    31,
      -1,    37,    38,    35,    40,    41,    42,    43,    44,    37,
      38,    47,    40,    41,    42,    43,    44,    37,    38,    47,
      40,    41,    42,    43,    44,    -1,    46,    37,    38,    -1,
      40,    41,    42,    43,    44,    -1,    46,    37,    38,    -1,
      40,    41,    42,    43,    44,    -1,    46,    37,    38,    -1,
      40,    41,    42,    43,    44,    -1,    46,    37,    38,    -1,
      40,    41,    42,    43,    44,    -1,    46,    37,    38,    -1,
      40,    41,    42,    43,    44,     4,    46,     6,     7,     8,
       9,    10,    -1,    -1,    13,     6,     7,     8,     9,    10,
      11,    12,     6,     7,     8,     9,    10,    11
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    55,    56,    57,     0,     1,     5,     6,     7,     8,
       9,    10,    11,    14,    15,    16,    17,    18,    19,    22,
      26,    28,    29,    30,    31,    35,    58,    73,    74,    75,
      76,    77,    78,    79,    83,    85,    86,    87,    94,    95,
      99,   101,   101,    11,    58,    63,    64,    30,    65,    30,
      75,    79,    45,    79,    88,    89,    20,    21,    31,    32,
      33,    34,    36,    39,    41,    45,    51,    71,    79,    81,
      82,    92,    93,    45,    30,    45,    13,    30,    59,    60,
      74,    76,     1,    45,    48,    49,     4,    13,    58,   102,
     103,    63,    59,    12,    64,    43,    66,    47,    47,    88,
      47,    45,    45,    45,    81,    81,    81,    92,    52,    80,
      81,    37,    38,    40,    41,    42,    43,    44,    47,    81,
      48,    81,    60,    45,    47,    36,    81,    80,    36,    81,
      30,    30,     3,     3,    56,    12,    59,    36,    41,    67,
      68,    69,    30,    45,    47,    89,    81,    81,    81,    46,
      50,    47,    47,    52,    81,    81,    81,    81,    81,    81,
      81,    93,    46,    81,    90,    46,    30,    31,    61,    62,
      60,    46,    45,    30,    30,     5,    59,    43,    47,     1,
      45,    70,    71,    72,    66,    75,    84,    30,    46,    46,
      81,    30,    81,    22,    23,    75,    77,    47,   100,    46,
      47,    58,   104,    45,    45,    68,    32,    32,    46,    47,
      48,    46,    48,    45,    96,    47,    81,    56,    62,    59,
      46,   104,   104,    50,     1,    50,    75,    90,    90,    81,
      56,    75,    47,    91,    27,    47,    46,    46,    69,    69,
      69,    46,    46,    46,    24,    25,    97,    47,    81,   104,
      32,    32,    32,    98,    75,    46,    46,     1,    46,    56,
      25
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    55,    56,    57,    57,    57,    57,    58,
      58,    58,    58,    58,    59,    59,    60,    60,    60,    61,
      61,    62,    62,    63,    63,    64,    64,    65,    65,    66,
      67,    67,    68,    68,    69,    69,    70,    70,    71,    71,
      71,    71,    72,    72,    72,    72,    73,    73,    74,    74,
      75,    76,    76,    77,    77,    77,    77,    77,    77,    77,
      77,    78,    78,    78,    78,    79,    79,    79,    79,    80,
      80,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    82,    82,    83,
      83,    84,    84,    85,    85,    86,    87,    87,    88,    88,
      89,    89,    90,    91,    91,    92,    92,    93,    93,    93,
      94,    94,    96,    95,    98,    97,    97,   100,    99,   101,
     101,   102,   103,   103,   103,   103,   104,   104
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     2,     3,     5,     3,     0,     1,
       1,     1,     1,     1,     3,     1,     2,     4,     1,     3,
       1,     1,     1,     2,     1,     2,     4,     4,     2,     3,
       3,     1,     2,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     6,     6,     6,     6,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     4,     4,     1,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       1,     1,     4,     4,     3,     5,     1,     3,     2,     2,
       6,     3,     1,     9,     5,     2,     2,     2,     3,     1,
       1,     7,     4,     2,     0,     3,     1,     1,     7,     1,
       1,     1,     0,     8,     0,     4,     1,     0,     7,     2,
       0,     3,     6,     6,     5,     2,     4,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= T_EOF)
    {
      yychar = T_EOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3: /* program: body error subprograms  */
#line 127 "bisonfinal.y"
                                          {yyerror("expecting END character, found EOF");yyerrok; yyclearin;}
#line 1684 "bisonfinal.tab.c"
    break;

  case 8: /* declarations: %empty  */
#line 133 "bisonfinal.y"
                      { }
#line 1690 "bisonfinal.tab.c"
    break;

  case 17: /* undef_variable: "id" "(" dims ")"  */
#line 138 "bisonfinal.y"
                                                      {hashtbl_insert(hashtbl, (yyvsp[-3].strval), NULL, scope);}
#line 1696 "bisonfinal.tab.c"
    break;

  case 18: /* undef_variable: "id"  */
#line 139 "bisonfinal.y"
                                                      {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope);}
#line 1702 "bisonfinal.tab.c"
    break;

  case 21: /* dim: "id"  */
#line 142 "bisonfinal.y"
                                                      {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope);}
#line 1708 "bisonfinal.tab.c"
    break;

  case 27: /* vals: vals "," "id" value_list  */
#line 148 "bisonfinal.y"
                                                       {hashtbl_insert(hashtbl, (yyvsp[-1].strval), NULL, scope);}
#line 1714 "bisonfinal.tab.c"
    break;

  case 28: /* vals: "id" value_list  */
#line 149 "bisonfinal.y"
                                                       {hashtbl_insert(hashtbl, (yyvsp[-1].strval), NULL, scope);}
#line 1720 "bisonfinal.tab.c"
    break;

  case 35: /* sign: %empty  */
#line 155 "bisonfinal.y"
                       { }
#line 1726 "bisonfinal.tab.c"
    break;

  case 43: /* complex_constant: error "RCONST" ":" sign "RCONST" ")"  */
#line 160 "bisonfinal.y"
                                                                     { yyerror("Missing T_LPAREN"); yyerrok; yyclearin;}
#line 1732 "bisonfinal.tab.c"
    break;

  case 44: /* complex_constant: "(" "RCONST" error sign "RCONST" ")"  */
#line 161 "bisonfinal.y"
                                                                     { yyerror("Missing T_COLON"); yyerrok; yyclearin;}
#line 1738 "bisonfinal.tab.c"
    break;

  case 45: /* complex_constant: "(" "RCONST" ":" sign "RCONST" error  */
#line 162 "bisonfinal.y"
                                                                     { yyerror("Missing T_RPAREN"); yyerrok; yyclearin;}
#line 1744 "bisonfinal.tab.c"
    break;

  case 62: /* assignment: variable error expression  */
#line 180 "bisonfinal.y"
                                        {yyerror("Missing = (assign) char"); yyerrok; yyclearin;}
#line 1750 "bisonfinal.tab.c"
    break;

  case 64: /* assignment: variable error "string"  */
#line 182 "bisonfinal.y"
                                      {yyerror("Missing =(assign) char"); yyerrok; yyclearin;}
#line 1756 "bisonfinal.tab.c"
    break;

  case 65: /* variable: variable "." "id"  */
#line 183 "bisonfinal.y"
                               {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope);}
#line 1762 "bisonfinal.tab.c"
    break;

  case 68: /* variable: "id"  */
#line 186 "bisonfinal.y"
                    {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope);}
#line 1768 "bisonfinal.tab.c"
    break;

  case 90: /* goto_statement: "goto" "id" "," "(" labels ")"  */
#line 208 "bisonfinal.y"
                                                            {hashtbl_insert(hashtbl, (yyvsp[-4].strval), NULL, scope);}
#line 1774 "bisonfinal.tab.c"
    break;

  case 101: /* read_item: "(" read_list "," "id" "=" iter_space ")"  */
#line 219 "bisonfinal.y"
                                                                            {hashtbl_insert(hashtbl, (yyvsp[-3].strval), NULL, scope);}
#line 1780 "bisonfinal.tab.c"
    break;

  case 104: /* step: %empty  */
#line 222 "bisonfinal.y"
                     { }
#line 1786 "bisonfinal.tab.c"
    break;

  case 108: /* write_item: "(" write_list "," "id" "=" iter_space ")"  */
#line 226 "bisonfinal.y"
                                                                             {hashtbl_insert(hashtbl, (yyvsp[-3].strval), NULL, scope);}
#line 1792 "bisonfinal.tab.c"
    break;

  case 112: /* $@1: %empty  */
#line 230 "bisonfinal.y"
                                                           {scope++;}
#line 1798 "bisonfinal.tab.c"
    break;

  case 113: /* branch_statement: "if" "(" expression ")" "then" $@1 body tail  */
#line 231 "bisonfinal.y"
                            {hashtbl_get(hashtbl, scope);scope--;}
#line 1804 "bisonfinal.tab.c"
    break;

  case 114: /* $@2: %empty  */
#line 232 "bisonfinal.y"
              {scope++;}
#line 1810 "bisonfinal.tab.c"
    break;

  case 115: /* tail: "else" $@2 body "endif"  */
#line 233 "bisonfinal.y"
                     {hashtbl_get(hashtbl, scope);scope--;}
#line 1816 "bisonfinal.tab.c"
    break;

  case 117: /* $@3: %empty  */
#line 235 "bisonfinal.y"
                                              {hashtbl_insert(hashtbl, (yyvsp[-2].strval), NULL, scope);scope++;}
#line 1822 "bisonfinal.tab.c"
    break;

  case 118: /* loop_statement: "do" "id" "=" iter_space $@3 body "enddo"  */
#line 236 "bisonfinal.y"
                             {hashtbl_get(hashtbl, scope);scope--;}
#line 1828 "bisonfinal.tab.c"
    break;

  case 120: /* subprograms: %empty  */
#line 238 "bisonfinal.y"
                     { }
#line 1834 "bisonfinal.tab.c"
    break;

  case 122: /* header: type "function" "id" "(" formal_parameters ")"  */
#line 240 "bisonfinal.y"
                                                                  {hashtbl_insert(hashtbl, (yyvsp[-4].strval), NULL, scope);}
#line 1840 "bisonfinal.tab.c"
    break;

  case 123: /* header: "list" "function" "id" "(" formal_parameters ")"  */
#line 241 "bisonfinal.y"
                                                                          {hashtbl_insert(hashtbl, (yyvsp[-3].strval), NULL, scope);}
#line 1846 "bisonfinal.tab.c"
    break;

  case 124: /* header: "subroutine" "id" "(" formal_parameters ")"  */
#line 242 "bisonfinal.y"
                                                                     {hashtbl_insert(hashtbl, (yyvsp[-3].strval), NULL, scope);}
#line 1852 "bisonfinal.tab.c"
    break;

  case 125: /* header: "subroutine" "id"  */
#line 243 "bisonfinal.y"
                                 {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope);}
#line 1858 "bisonfinal.tab.c"
    break;


#line 1862 "bisonfinal.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= T_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == T_EOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 251 "bisonfinal.y"

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

 


