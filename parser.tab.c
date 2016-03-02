/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     ELSE = 259,
     FOR = 260,
     WHILE = 261,
     LPAREN = 262,
     RPAREN = 263,
     LBRACE = 264,
     RBRACE = 265,
     INT = 266,
     CHAR = 267,
     STRING = 268,
     BOOL = 269,
     ADD = 270,
     BOOLCONST = 271,
     INTCONST = 272,
     STRINGCONST = 273,
     CHARCONST = 274,
     SUB = 275,
     MULT = 276,
     DIV = 277,
     MOD = 278,
     LESSTHAN = 279,
     GREATERTHAN = 280,
     LEQ = 281,
     GEQ = 282,
     EQUALS = 283,
     NOTEQUALS = 284,
     EQUAL = 285,
     SEMICOLON = 286,
     COMMA = 287,
     RETURN = 288,
     PRINTF = 289,
     VOID = 290,
     ID = 291,
     NEWLINE = 292,
     NOELSE = 293
   };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define FOR 260
#define WHILE 261
#define LPAREN 262
#define RPAREN 263
#define LBRACE 264
#define RBRACE 265
#define INT 266
#define CHAR 267
#define STRING 268
#define BOOL 269
#define ADD 270
#define BOOLCONST 271
#define INTCONST 272
#define STRINGCONST 273
#define CHARCONST 274
#define SUB 275
#define MULT 276
#define DIV 277
#define MOD 278
#define LESSTHAN 279
#define GREATERTHAN 280
#define LEQ 281
#define GEQ 282
#define EQUALS 283
#define NOTEQUALS 284
#define EQUAL 285
#define SEMICOLON 286
#define COMMA 287
#define RETURN 288
#define PRINTF 289
#define VOID 290
#define ID 291
#define NEWLINE 292
#define NOELSE 293




/* Copy the first part of user declarations.  */
#line 1 "parser.y"


#include <stdio.h>
#include <stdlib.h>
int yylex();
extern FILE *yyin;
void yyerror(const char *s);



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 192 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   547

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNRULES -- Number of states.  */
#define YYNSTATES  160

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    17,    20,
      22,    24,    26,    28,    35,    42,    44,    45,    47,    51,
      56,    60,    64,    67,    70,    72,    75,    77,    79,    81,
      84,    86,    88,    90,    92,    94,   102,   108,   114,   122,
     131,   140,   150,   158,   166,   173,   182,   185,   189,   197,
     203,   209,   213,   215,   219,   221,   223,   225,   229,   233,
     237,   241,   245,   249,   252,   256,   260,   264,   268,   272,
     276,   281,   283,   285,   286,   288,   292,   294,   296,   298
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      40,     0,    -1,    41,    -1,    41,    42,    -1,    42,    -1,
      43,    -1,    46,    -1,    44,    31,    -1,    45,    61,    -1,
      11,    -1,    14,    -1,    13,    -1,    12,    -1,    45,    61,
       7,    47,     8,    49,    -1,    35,    61,     7,    47,     8,
      49,    -1,    48,    -1,    -1,    44,    -1,    48,    32,    44,
      -1,     9,    50,    51,    10,    -1,     9,    51,    10,    -1,
       9,    50,    10,    -1,     9,    10,    -1,    50,    43,    -1,
      43,    -1,    51,    52,    -1,    52,    -1,    57,    -1,    31,
      -1,    59,    31,    -1,    53,    -1,    54,    -1,    55,    -1,
      56,    -1,    49,    -1,     3,     7,    59,     8,    52,     4,
      52,    -1,     3,     7,    59,     8,    52,    -1,     6,     7,
      59,     8,    52,    -1,     5,     7,    31,    59,    31,     8,
      52,    -1,     5,     7,    59,    31,    59,    31,     8,    52,
      -1,     5,     7,    31,    59,    31,    59,     8,    52,    -1,
       5,     7,    59,    31,    59,    31,    59,     8,    52,    -1,
       5,     7,    59,    31,    31,     8,    52,    -1,     5,     7,
      31,    31,    59,     8,    52,    -1,     5,     7,    31,    31,
       8,    52,    -1,     5,     7,    59,    31,    31,    59,     8,
      52,    -1,    33,    31,    -1,    33,    59,    31,    -1,    34,
       7,    18,    32,    58,     8,    31,    -1,    34,     7,    64,
       8,    31,    -1,    34,     7,    36,     8,    31,    -1,    58,
      32,    59,    -1,    59,    -1,    61,    30,    59,    -1,    64,
      -1,    61,    -1,    60,    -1,     7,    59,     8,    -1,    59,
      15,    59,    -1,    59,    20,    59,    -1,    59,    21,    59,
      -1,    59,    22,    59,    -1,    59,    23,    59,    -1,    20,
      59,    -1,    59,    24,    59,    -1,    59,    26,    59,    -1,
      59,    25,    59,    -1,    59,    27,    59,    -1,    59,    28,
      59,    -1,    59,    29,    59,    -1,    61,     7,    62,     8,
      -1,    36,    -1,    63,    -1,    -1,    59,    -1,    63,    32,
      59,    -1,    18,    -1,    17,    -1,    16,    -1,    19,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    56,    56,    59,    60,    64,    65,    69,    72,    76,
      77,    78,    79,    83,    84,    88,    89,    93,    94,    99,
     100,   101,   102,   107,   108,   112,   113,   117,   118,   119,
     120,   121,   122,   123,   124,   128,   129,   134,   138,   139,
     140,   141,   142,   143,   144,   145,   150,   151,   156,   157,
     158,   165,   166,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     193,   197,   201,   202,   206,   207,   211,   212,   213,   214
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "FOR", "WHILE", "LPAREN",
  "RPAREN", "LBRACE", "RBRACE", "INT", "CHAR", "STRING", "BOOL", "ADD",
  "BOOLCONST", "INTCONST", "STRINGCONST", "CHARCONST", "SUB", "MULT",
  "DIV", "MOD", "LESSTHAN", "GREATERTHAN", "LEQ", "GEQ", "EQUALS",
  "NOTEQUALS", "EQUAL", "SEMICOLON", "COMMA", "RETURN", "PRINTF", "VOID",
  "ID", "NEWLINE", "NOELSE", "$accept", "Program", "Declare", "Decl",
  "VariableDecl", "Variable", "Type", "FunctionDecl", "OptionalFormals",
  "Formals", "StmtBlock", "VarDeclPrime", "StmtList", "Stmt", "IfStmt",
  "WhileStmt", "ForStmt", "ReturnStmt", "PrintStmt", "ExprList", "Expr",
  "Call", "Identifier", "OptionalExprList", "Actuals", "Constant", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    39,    40,    41,    41,    42,    42,    43,    44,    45,
      45,    45,    45,    46,    46,    47,    47,    48,    48,    49,
      49,    49,    49,    50,    50,    51,    51,    52,    52,    52,
      52,    52,    52,    52,    52,    53,    53,    54,    55,    55,
      55,    55,    55,    55,    55,    55,    56,    56,    57,    57,
      57,    58,    58,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      60,    61,    62,    62,    63,    63,    64,    64,    64,    64
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     6,     6,     1,     0,     1,     3,     4,
       3,     3,     2,     2,     1,     2,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     7,     5,     5,     7,     8,
       8,     9,     7,     7,     6,     8,     2,     3,     7,     5,
       5,     3,     1,     3,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     2,     3,     3,     3,     3,     3,     3,
       4,     1,     1,     0,     1,     3,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     9,    12,    11,    10,     0,     0,     2,     4,     5,
       0,     0,     6,    71,     0,     1,     3,     7,     8,    16,
      16,    17,     0,     0,    15,     0,     8,     0,     0,     0,
       0,    14,    18,    13,     0,     0,     0,     0,    22,    78,
      77,    76,    79,     0,    28,     0,     0,    24,    34,     0,
       0,    26,    30,    31,    32,    33,    27,     0,    56,    55,
      54,     0,     0,     0,     0,    63,    46,     0,     0,    21,
      23,     0,    20,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    73,     0,     0,     0,
       0,     0,    57,    47,    76,     0,     0,    19,    58,    59,
      60,    61,    62,    64,    66,    65,    67,    68,    69,    74,
       0,    72,    53,     0,     0,     0,     0,     0,     0,     0,
       0,    70,     0,    36,     0,     0,     0,     0,     0,    37,
       0,    52,    50,    49,    75,     0,    44,     0,     0,     0,
       0,     0,     0,     0,     0,    35,    43,    38,     0,    42,
       0,     0,     0,    48,    51,    40,    45,    39,     0,    41
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    10,    22,    12,    23,    24,
      48,    49,    50,    51,    52,    53,    54,    55,    56,   130,
      57,    58,    59,   110,   111,    60
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -51
static const yytype_int16 yypact[] =
{
      98,   -51,   -51,   -51,   -51,   -17,    23,    98,   -51,   -51,
      -7,   -17,   -51,   -51,    26,   -51,   -51,   -51,    36,   140,
     140,   -51,   -17,    22,    18,    52,   -51,    53,   140,    53,
      -2,   -51,   -51,   -51,    54,    65,    68,   289,   -51,   -51,
     -51,   -51,   -51,   289,   -51,    63,    70,   -51,   -51,    35,
     155,   -51,   -51,   -51,   -51,   -51,   -51,   443,   -51,     6,
     -51,   289,   215,   289,   295,   115,   -51,   458,    40,   -51,
     -51,   187,   -51,   -51,   289,   289,   289,   289,   289,   289,
     289,   289,   289,   289,   289,   -51,   289,   289,   318,   236,
     473,   340,   -51,   -51,    57,    83,    84,   -51,   115,   115,
     115,   115,   115,   -51,   -51,   -51,   -51,   -51,   -51,   518,
      85,    64,   -51,   208,   130,   488,   242,   208,   289,    66,
      74,   -51,   289,   -51,   208,   362,   162,   263,   503,   -51,
      -6,   518,   -51,   -51,   518,   208,   -51,   208,   208,   384,
     208,   406,   268,    75,   289,   -51,   -51,   -51,   208,   -51,
     208,   208,   428,   -51,   518,   -51,   -51,   -51,   208,   -51
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -51,   -51,   -51,    88,   -24,    45,    20,   -51,    87,   -51,
       8,   -51,    77,   -50,   -51,   -51,   -51,   -51,   -51,   -51,
      41,   -51,    17,   -51,   -51,    46
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      73,    34,   143,    35,    36,    37,    47,    30,    38,     1,
       2,     3,     4,    86,    39,    40,    41,    42,    43,    13,
      11,    73,    14,    15,    17,    70,   144,    11,    18,    44,
      27,    45,    46,    19,    13,    31,    87,    33,    34,    26,
      35,    36,    37,    20,    30,    69,     1,     2,     3,     4,
      28,    39,    40,    41,    42,    43,    39,    40,    94,    42,
      29,    61,    30,   123,    21,    21,    44,   129,    45,    46,
      37,    13,    62,    32,   136,    63,    95,    68,    64,    39,
      40,    41,    42,    43,    65,   145,    67,   146,   147,   118,
     149,   119,   120,   121,    66,    16,   122,   132,   155,    13,
     156,   157,    88,    90,    91,   133,   153,    25,   159,     1,
       2,     3,     4,     0,    96,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    71,   109,   112,     0,
     115,     0,     0,     5,     0,     0,     0,    37,   124,    79,
      80,    81,    82,    83,    84,     0,    39,    40,    41,    42,
      43,     1,     2,     3,     4,   125,     0,   128,    34,   131,
      35,    36,    37,   134,    30,    72,    13,   139,   141,    37,
     138,    39,    40,    41,    42,    43,     0,     0,    39,    40,
      41,    42,    43,   152,     0,   154,    44,     0,    45,    46,
      34,    13,    35,    36,    37,     0,    30,    97,    13,     0,
       0,     0,     0,    39,    40,    41,    42,    43,     0,     0,
       0,    34,     0,    35,    36,    37,     0,    30,    44,     0,
      45,    46,    37,    13,    39,    40,    41,    42,    43,     0,
       0,    39,    40,    41,    42,    43,     0,     0,     0,    44,
       0,    45,    46,    37,    13,     0,    89,     0,     0,    37,
       0,    13,    39,    40,    41,    42,    43,     0,    39,    40,
      41,    42,    43,     0,     0,     0,     0,   114,     0,     0,
      37,   140,    13,   127,     0,    37,   151,     0,    13,    39,
      40,    41,    42,    43,    39,    40,    41,    42,    43,     0,
       0,     0,     0,     0,     0,     0,    37,     0,     0,    13,
       0,     0,     0,    92,    13,    39,    40,    41,    42,    43,
      74,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    13,   113,     0,     0,     0,
       0,     0,     0,    74,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,   117,     0,
       0,     0,     0,     0,     0,    74,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
     137,     0,     0,     0,     0,     0,     0,    74,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,   148,     0,     0,     0,     0,     0,     0,    74,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,   150,     0,     0,     0,     0,     0,
       0,    74,     0,     0,     0,     0,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,   158,     0,     0,     0,
       0,     0,     0,    74,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    74,     0,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    74,    85,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    74,    93,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    74,   116,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    74,   126,
       0,     0,     0,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    74,   142,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84
};

static const yytype_int16 yycheck[] =
{
      50,     3,     8,     5,     6,     7,    30,     9,    10,    11,
      12,    13,    14,     7,    16,    17,    18,    19,    20,    36,
       0,    71,     5,     0,    31,    49,    32,     7,    11,    31,
       8,    33,    34,     7,    36,    27,    30,    29,     3,    22,
       5,     6,     7,     7,     9,    10,    11,    12,    13,    14,
      32,    16,    17,    18,    19,    20,    16,    17,    18,    19,
       8,     7,     9,   113,    19,    20,    31,   117,    33,    34,
       7,    36,     7,    28,   124,     7,    36,     7,    37,    16,
      17,    18,    19,    20,    43,   135,    45,   137,   138,    32,
     140,     8,     8,     8,    31,     7,    32,    31,   148,    36,
     150,   151,    61,    62,    63,    31,    31,    20,   158,    11,
      12,    13,    14,    -1,    68,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    49,    86,    87,    -1,
      89,    -1,    -1,    35,    -1,    -1,    -1,     7,     8,    24,
      25,    26,    27,    28,    29,    -1,    16,    17,    18,    19,
      20,    11,    12,    13,    14,   114,    -1,   116,     3,   118,
       5,     6,     7,   122,     9,    10,    36,   126,   127,     7,
       8,    16,    17,    18,    19,    20,    -1,    -1,    16,    17,
      18,    19,    20,   142,    -1,   144,    31,    -1,    33,    34,
       3,    36,     5,     6,     7,    -1,     9,    10,    36,    -1,
      -1,    -1,    -1,    16,    17,    18,    19,    20,    -1,    -1,
      -1,     3,    -1,     5,     6,     7,    -1,     9,    31,    -1,
      33,    34,     7,    36,    16,    17,    18,    19,    20,    -1,
      -1,    16,    17,    18,    19,    20,    -1,    -1,    -1,    31,
      -1,    33,    34,     7,    36,    -1,    31,    -1,    -1,     7,
      -1,    36,    16,    17,    18,    19,    20,    -1,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    31,    -1,    -1,
       7,     8,    36,    31,    -1,     7,     8,    -1,    36,    16,
      17,    18,    19,    20,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    36,
      -1,    -1,    -1,     8,    36,    16,    17,    18,    19,    20,
      15,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    36,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    15,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    15,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    15,    31,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    15,    31,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    15,    31,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    15,    31,
      -1,    -1,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    15,    31,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    12,    13,    14,    35,    40,    41,    42,    43,
      44,    45,    46,    36,    61,     0,    42,    31,    61,     7,
       7,    44,    45,    47,    48,    47,    61,     8,    32,     8,
       9,    49,    44,    49,     3,     5,     6,     7,    10,    16,
      17,    18,    19,    20,    31,    33,    34,    43,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    59,    60,    61,
      64,     7,     7,     7,    59,    59,    31,    59,     7,    10,
      43,    51,    10,    52,    15,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    31,     7,    30,    59,    31,
      59,    59,     8,    31,    18,    36,    64,    10,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      62,    63,    59,     8,    31,    59,    31,     8,    32,     8,
       8,     8,    32,    52,     8,    59,    31,    31,    59,    52,
      58,    59,    31,    31,    59,     4,    52,     8,     8,    59,
       8,    59,    31,     8,    32,    52,    52,    52,     8,    52,
       8,     8,    59,    31,    59,    52,    52,    52,     8,    52
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 56 "parser.y"
    { printf(" reduce[1]"); ;}
    break;

  case 3:
#line 59 "parser.y"
    { printf(" reduce[2]"); ;}
    break;

  case 4:
#line 60 "parser.y"
    { printf(" reduce[3]"); ;}
    break;

  case 5:
#line 64 "parser.y"
    { printf(" reduce[4]"); ;}
    break;

  case 6:
#line 65 "parser.y"
    { printf(" reduce[5]"); ;}
    break;

  case 7:
#line 69 "parser.y"
    { printf(" reduce[6]"); ;}
    break;

  case 8:
#line 72 "parser.y"
    { printf(" reduce[7]"); ;}
    break;

  case 9:
#line 76 "parser.y"
    { printf(" reduce[8]"); ;}
    break;

  case 10:
#line 77 "parser.y"
    { printf(" reduce[9]"); ;}
    break;

  case 11:
#line 78 "parser.y"
    { printf(" reduce[10]"); ;}
    break;

  case 12:
#line 79 "parser.y"
    { printf(" reduce[11]"); ;}
    break;

  case 13:
#line 83 "parser.y"
    { printf(" reduce[12]"); ;}
    break;

  case 14:
#line 84 "parser.y"
    { printf(" reduce[13]"); ;}
    break;

  case 15:
#line 88 "parser.y"
    { printf(" reduce[14]"); ;}
    break;

  case 16:
#line 89 "parser.y"
    { printf(" reduce[15]"); ;}
    break;

  case 17:
#line 93 "parser.y"
    { printf(" reduce[16]"); ;}
    break;

  case 18:
#line 94 "parser.y"
    { printf(" reduce[17]"); ;}
    break;

  case 19:
#line 99 "parser.y"
    { printf(" reduce[18]"); ;}
    break;

  case 20:
#line 100 "parser.y"
    { printf(" reduce[19]"); ;}
    break;

  case 21:
#line 101 "parser.y"
    { printf(" reduce[20]"); ;}
    break;

  case 22:
#line 102 "parser.y"
    { printf(" reduce[21]"); ;}
    break;

  case 23:
#line 107 "parser.y"
    { printf(" reduce[22]"); ;}
    break;

  case 24:
#line 108 "parser.y"
    { printf(" reduce[23]"); ;}
    break;

  case 25:
#line 112 "parser.y"
    { printf(" reduce[24]"); ;}
    break;

  case 26:
#line 113 "parser.y"
    { printf(" reduce[25]"); ;}
    break;

  case 27:
#line 117 "parser.y"
    { printf(" reduce[26]"); ;}
    break;

  case 28:
#line 118 "parser.y"
    { printf(" reduce[27]"); ;}
    break;

  case 29:
#line 119 "parser.y"
    { printf(" reduce[28]"); ;}
    break;

  case 30:
#line 120 "parser.y"
    { printf(" reduce[29]"); ;}
    break;

  case 31:
#line 121 "parser.y"
    { printf(" reduce[30]"); ;}
    break;

  case 32:
#line 122 "parser.y"
    { printf(" reduce[31]"); ;}
    break;

  case 33:
#line 123 "parser.y"
    { printf(" reduce[32]"); ;}
    break;

  case 34:
#line 124 "parser.y"
    { printf(" reduce[33]"); ;}
    break;

  case 35:
#line 128 "parser.y"
    { printf(" reduce[34]"); ;}
    break;

  case 36:
#line 129 "parser.y"
    { printf(" reduce[35]"); ;}
    break;

  case 37:
#line 134 "parser.y"
    { printf(" reduce[36]"); ;}
    break;

  case 38:
#line 138 "parser.y"
    { printf(" reduce[37]"); ;}
    break;

  case 39:
#line 139 "parser.y"
    { printf(" reduce[38]"); ;}
    break;

  case 40:
#line 140 "parser.y"
    { printf(" reduce[39]"); ;}
    break;

  case 41:
#line 141 "parser.y"
    { printf(" reduce[40]"); ;}
    break;

  case 42:
#line 142 "parser.y"
    { printf(" reduce[41]"); ;}
    break;

  case 43:
#line 143 "parser.y"
    { printf(" reduce[42]"); ;}
    break;

  case 44:
#line 144 "parser.y"
    { printf(" reduce[43]"); ;}
    break;

  case 45:
#line 145 "parser.y"
    { printf(" reduce[44]"); ;}
    break;

  case 46:
#line 150 "parser.y"
    { printf(" reduce[45]"); ;}
    break;

  case 47:
#line 151 "parser.y"
    { printf(" reduce[46]"); ;}
    break;

  case 48:
#line 156 "parser.y"
    { printf(" reduce[47]"); ;}
    break;

  case 49:
#line 157 "parser.y"
    { printf(" reduce[48]"); ;}
    break;

  case 50:
#line 158 "parser.y"
    { printf(" reduce[49]"); ;}
    break;

  case 51:
#line 165 "parser.y"
    { printf(" reduce[50]"); ;}
    break;

  case 52:
#line 166 "parser.y"
    { printf(" reduce[51]"); ;}
    break;

  case 53:
#line 172 "parser.y"
    { printf(" reduce[52]"); ;}
    break;

  case 54:
#line 173 "parser.y"
    { printf(" reduce[53]"); ;}
    break;

  case 55:
#line 174 "parser.y"
    { printf(" reduce[54]"); ;}
    break;

  case 56:
#line 175 "parser.y"
    { printf(" reduce[55]"); ;}
    break;

  case 57:
#line 176 "parser.y"
    { printf(" reduce[56] "); ;}
    break;

  case 58:
#line 177 "parser.y"
    { printf(" reduce[57]"); ;}
    break;

  case 59:
#line 178 "parser.y"
    { printf(" reduce[58]"); ;}
    break;

  case 60:
#line 179 "parser.y"
    { printf(" reduce[59]"); ;}
    break;

  case 61:
#line 180 "parser.y"
    { printf(" reduce[60]"); ;}
    break;

  case 62:
#line 181 "parser.y"
    { printf(" reduce[61]"); ;}
    break;

  case 63:
#line 182 "parser.y"
    { printf(" reduce[62]"); ;}
    break;

  case 64:
#line 183 "parser.y"
    { printf(" reduce[63]"); ;}
    break;

  case 65:
#line 184 "parser.y"
    { printf(" reduce[64]"); ;}
    break;

  case 66:
#line 185 "parser.y"
    { printf(" reduce[65]"); ;}
    break;

  case 67:
#line 186 "parser.y"
    { printf(" reduce[66]"); ;}
    break;

  case 68:
#line 187 "parser.y"
    { printf(" reduce[67]"); ;}
    break;

  case 69:
#line 188 "parser.y"
    { printf(" reduce[68]"); ;}
    break;

  case 70:
#line 193 "parser.y"
    { printf(" reduce[69]"); ;}
    break;

  case 71:
#line 197 "parser.y"
    { printf(" reduce[70]"); ;}
    break;

  case 72:
#line 201 "parser.y"
    { printf(" reduce[71]"); ;}
    break;

  case 73:
#line 202 "parser.y"
    { printf(" reduce[72]"); ;}
    break;

  case 74:
#line 206 "parser.y"
    { printf(" reduce[73]"); ;}
    break;

  case 75:
#line 207 "parser.y"
    { printf(" reduce[74]"); ;}
    break;

  case 76:
#line 211 "parser.y"
    { printf(" reduce[75]"); ;}
    break;

  case 77:
#line 212 "parser.y"
    { printf(" reduce[76]"); ;}
    break;

  case 78:
#line 213 "parser.y"
    { printf(" reduce[77]"); ;}
    break;

  case 79:
#line 214 "parser.y"
    { printf(" reduce[78]"); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 1990 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 217 "parser.y"


int main(int argc, char *argv[])
{

  //opens file using command line args
  yyin = fopen(argv[1], "r");
	//only one file at a time...
  
  if (yyparse() == 0) {
		printf("\n[accept]\n\n\n");
    printf("success!\n");
	}
}

void yyerror(char const *s)
{
	printf(" \n[reject]\n\n\n");
  printf("failure :(\n");
}

