
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "1707005.y"

	#include<stdio.h>
	#include<math.h>
	#include<string.h>
    #include<limits.h>
    #include<float.h>
	void yyerror(const char *);
	extern int yylex();
    extern int yyparse();
    extern FILE *yyin;
	extern FILE *yyout;

    typedef struct {
        char name[100];
        char vas[100];
        int val;
        float vall;

    }store ;
    store symbol_table[200];

	int count,sw,dv,iff;
	store find_value(char **sym);
	int add_value(char **sym);


/* Line 189 of yacc.c  */
#line 100 "1707005.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     INTT = 259,
     FL = 260,
     FLOAT = 261,
     ID = 262,
     STRING = 263,
     STT = 264,
     IF = 265,
     ELIF = 266,
     ELSE = 267,
     FOR = 268,
     DW = 269,
     SW = 270,
     CA = 271,
     WHILE = 272,
     COL = 273,
     INC = 274,
     DEC = 275,
     MIN = 276,
     MAX = 277,
     GCD = 278,
     PFI = 279,
     PRIME = 280,
     DF = 281,
     POW = 282,
     PFF = 283,
     SINE = 284,
     COS = 285,
     TAN = 286,
     LN = 287,
     CMT = 288,
     HEAD = 289,
     DEF = 290,
     ABS = 291,
     FLOOR = 292,
     CEIL = 293,
     RET = 294,
     END = 295,
     PFS = 296,
     PFSN = 297,
     LEN = 298,
     CMP = 299,
     CAT = 300,
     CPY = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 27 "1707005.y"

    struct use
    {
        int ival;
        float fval;
        char *str;
        char *st;
    }variable;



/* Line 214 of yacc.c  */
#line 194 "1707005.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 206 "1707005.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   774

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNRULES -- Number of states.  */
#define YYNSTATES  228

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    59,     2,     2,     2,    60,     2,     2,
      52,    53,    49,    47,    54,    48,     2,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      58,    55,    57,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,    51,     2,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    38,
      41,    43,    50,    54,    56,    59,    60,    65,    69,    74,
      79,    84,    89,    92,    95,    97,    99,   101,   105,   107,
     111,   115,   117,   119,   122,   129,   137,   145,   153,   161,
     165,   171,   173,   179,   185,   189,   200,   207,   209,   213,
     217,   221,   225,   227,   232,   239,   246,   253,   256,   261,
     268,   275,   282,   287,   292,   297,   304,   309,   314,   319,
     324,   328,   332,   336,   340,   344,   347,   350,   352,   354,
     356
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      62,     0,    -1,    -1,    62,    63,    -1,    65,    -1,    76,
      -1,    66,    -1,    69,    -1,    78,    -1,    88,    -1,    81,
      -1,    82,    -1,    85,    -1,    86,    -1,    71,    -1,    73,
      -1,    70,    -1,    77,    -1,    63,    64,    -1,    63,    51,
      -1,    34,    -1,    35,     7,    52,    67,    53,    18,    -1,
      67,    54,    68,    -1,    68,    -1,    72,     7,    -1,    -1,
       7,    52,    75,    53,    -1,     7,    52,    53,    -1,    24,
      52,    88,    53,    -1,    28,    52,    88,    53,    -1,    41,
      52,    88,    53,    -1,    42,    52,    88,    53,    -1,    72,
      73,    -1,    72,    75,    -1,     4,    -1,     5,    -1,     9,
      -1,    73,    54,    74,    -1,    74,    -1,    75,    55,    88,
      -1,    75,    54,     7,    -1,     7,    -1,    33,    -1,    39,
      88,    -1,    10,    52,    87,    53,    56,    64,    -1,    10,
      52,    87,    53,    56,    64,    79,    -1,    10,    52,    87,
      53,    56,    64,    80,    -1,    11,    52,    87,    53,    56,
      64,    79,    -1,    11,    52,    87,    53,    56,    64,    80,
      -1,    12,    56,    64,    -1,    15,    52,    88,    53,    18,
      -1,    83,    -1,    16,    88,    18,    63,    83,    -1,    16,
      88,    18,    63,    84,    -1,    26,    18,    63,    -1,    13,
      52,    88,    54,    88,    54,    88,    53,    56,    64,    -1,
      17,    52,    87,    53,    56,    64,    -1,    89,    -1,    88,
      57,    89,    -1,    88,    58,    89,    -1,    88,    55,    89,
      -1,    88,    59,    89,    -1,    89,    -1,    43,    52,    88,
      53,    -1,    44,    52,    88,    54,    88,    53,    -1,    45,
      52,    88,    54,    88,    53,    -1,    46,    52,    88,    54,
      88,    53,    -1,    88,    59,    -1,    25,    52,    88,    53,
      -1,    21,    52,    88,    54,    88,    53,    -1,    22,    52,
      88,    54,    88,    53,    -1,    23,    52,    88,    54,    88,
      53,    -1,    29,    52,    88,    53,    -1,    30,    52,    88,
      53,    -1,    31,    52,    88,    53,    -1,    27,    52,    88,
      54,    88,    53,    -1,    32,    52,    88,    53,    -1,    36,
      52,    88,    53,    -1,    37,    52,    88,    53,    -1,    38,
      52,    88,    53,    -1,    88,    47,    89,    -1,    88,    48,
      89,    -1,    88,    49,    89,    -1,    88,    50,    89,    -1,
      88,    60,    89,    -1,    88,    19,    -1,    88,    20,    -1,
       3,    -1,     6,    -1,     8,    -1,     7,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    48,    48,    49,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    70,    71,
      75,    79,    92,    93,    97,    98,   102,   103,   107,   110,
     113,   116,   123,   124,   128,   129,   130,   133,   134,   138,
     165,   166,   170,   174,   178,   189,   201,   216,   224,   233,
     240,   247,   257,   265,   275,   281,   289,   297,   298,   299,
     300,   301,   304,   305,   306,   308,   309,   310,   319,   348,
     359,   370,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   406,   407,   408,
     409
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "INTT", "FL", "FLOAT", "ID",
  "STRING", "STT", "IF", "ELIF", "ELSE", "FOR", "DW", "SW", "CA", "WHILE",
  "COL", "INC", "DEC", "MIN", "MAX", "GCD", "PFI", "PRIME", "DF", "POW",
  "PFF", "SINE", "COS", "TAN", "LN", "CMT", "HEAD", "DEF", "ABS", "FLOOR",
  "CEIL", "RET", "END", "PFS", "PFSN", "LEN", "CMP", "CAT", "CPY", "'+'",
  "'-'", "'*'", "'/'", "'}'", "'('", "')'", "','", "'='", "'{'", "'>'",
  "'<'", "'!'", "'%'", "$accept", "program", "statement", "block",
  "header", "function", "params", "declaration_for_function",
  "function_call", "display", "declaration", "type", "assignments",
  "assignment", "var", "comment", "return", "if_else", "elseif", "else",
  "switch_", "case", "cases", "df", "for", "while", "condition", "expr",
  "factor", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,    43,    45,    42,
      47,   125,    40,    41,    44,    61,   123,    62,    60,    33,
      37
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    62,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    64,    64,
      65,    66,    67,    67,    68,    68,    69,    69,    70,    70,
      70,    70,    71,    71,    72,    72,    72,    73,    73,    74,
      75,    75,    76,    77,    78,    78,    78,    79,    79,    80,
      81,    82,    83,    83,    84,    85,    86,    87,    87,    87,
      87,    87,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    89,    89,    89,
      89
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     6,     3,     1,     2,     0,     4,     3,     4,     4,
       4,     4,     2,     2,     1,     1,     1,     3,     1,     3,
       3,     1,     1,     2,     6,     7,     7,     7,     7,     3,
       5,     1,     5,     5,     3,    10,     6,     1,     3,     3,
       3,     3,     1,     4,     6,     6,     6,     2,     4,     6,
       6,     6,     4,     4,     4,     6,     4,     4,     4,     4,
       3,     3,     3,     3,     3,     2,     2,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    87,    34,    35,    88,    90,    89,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       4,     6,     7,    16,    14,     0,    15,    38,     0,     5,
      17,     8,    10,    11,    51,    12,    13,     9,    62,     0,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    43,     0,     0,     0,     0,     0,     0,    41,    32,
      33,     0,     0,     0,    85,    86,     0,     0,     0,     0,
      67,     0,    27,     0,     0,     0,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,    40,    39,    80,    81,    82,    83,    84,
      26,     0,     0,     0,     0,    67,     0,     0,     0,     0,
       0,     0,     0,    28,    68,     0,    29,    72,    73,    74,
      76,     0,    23,     0,    77,    78,    79,    30,    31,    63,
       0,     0,     0,     0,    60,    58,    59,    61,     0,    50,
       0,    52,    53,     0,     0,     0,     0,     0,     0,    25,
      24,     0,     0,     0,     0,    44,     0,     0,    56,    69,
      70,    71,    75,    21,    22,    64,    65,    66,    19,    18,
       0,     0,    45,    46,     0,    54,     0,     0,     0,     0,
      49,     0,     0,    55,     0,     0,    47,    48
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   194,   195,    40,    41,   161,   162,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,   212,   213,
      52,    53,    54,   182,    55,    56,   104,    57,    58
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -115
static const yytype_int16 yypact[] =
{
    -115,   232,  -115,  -115,  -115,  -115,  -115,   -32,  -115,  -115,
     -37,   -31,   -20,    75,   -19,   -18,   -17,   -16,   -15,   -14,
      -8,    -6,    12,    16,    24,    25,  -115,  -115,    32,    27,
      33,    39,    75,    40,    41,    42,    43,    47,    51,  -115,
    -115,  -115,  -115,  -115,  -115,    77,    -4,  -115,   -30,  -115,
    -115,  -115,  -115,  -115,  -115,  -115,  -115,   714,  -115,    -2,
      75,    75,    75,  -115,    96,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    56,    75,    75,
      75,   714,    75,    75,    75,    75,    75,    75,  -115,    -4,
     -30,    77,   103,    75,  -115,  -115,     4,     4,     4,     4,
    -115,     4,  -115,   -27,    64,   115,    69,   304,   312,   276,
      70,   319,   327,   363,   371,   379,   386,   422,   430,   438,
     446,   454,     9,   489,   497,   505,   513,   521,   556,   563,
     571,   579,  -115,  -115,   714,  -115,  -115,  -115,  -115,  -115,
    -115,    71,     4,     4,     4,     4,    75,   107,   -10,    73,
      75,    75,    75,  -115,  -115,    75,  -115,  -115,  -115,  -115,
    -115,   -25,  -115,   119,  -115,  -115,  -115,  -115,  -115,  -115,
      75,    75,    75,   276,  -115,  -115,  -115,  -115,   615,  -115,
     112,  -115,  -115,   276,   623,   631,   639,   647,   114,     9,
    -115,   682,   690,   698,   183,    19,    75,   276,  -115,  -115,
    -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,
      84,    85,  -115,  -115,   706,  -115,    75,   276,    91,    87,
    -115,   276,    92,  -115,   276,    19,  -115,  -115
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -115,  -115,     0,   -93,  -115,  -115,  -115,   -40,  -115,  -115,
    -115,  -114,   105,    60,   -42,  -115,  -115,  -115,   -73,   -71,
    -115,  -115,    13,  -115,  -115,  -115,   -63,   -13,   -56
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -58
static const yytype_int16 yytable[] =
{
      64,    39,   110,    90,   106,    88,    13,     3,   163,   106,
       6,    63,     8,     4,     5,    60,   180,   103,     9,    81,
      59,    61,   -41,   -41,    92,    93,   140,    92,   188,   189,
     210,   211,    62,    65,    66,    67,    68,    69,    70,    77,
     135,   136,   137,   138,    71,   139,    72,   105,   107,   108,
      91,   102,   105,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,    73,   123,   124,   125,    74,   126,
     127,   128,   129,   130,   131,   163,    75,    76,     3,    78,
     134,     6,    63,     8,    88,    79,   174,   175,   176,   177,
     198,    80,    82,    83,    84,    85,    15,    16,    17,    86,
      19,   209,    20,    87,    22,    23,    24,    25,   122,   148,
     133,    29,    30,    31,   109,    94,    95,   141,    35,    36,
      37,    38,   -57,   149,   220,   179,   190,   173,   223,   183,
     197,   225,   203,   178,    94,    95,   216,   184,   185,   186,
     222,   217,   187,    96,    97,    98,    99,   221,   224,   204,
      89,   132,   226,   219,   227,   100,   101,   191,   192,   193,
     106,   181,    96,    97,    98,    99,     0,     0,     0,     0,
     142,     0,   143,   144,   145,   101,     0,     0,     0,     0,
       0,     0,     0,   214,     0,     0,     3,     4,     5,     6,
       7,     8,     9,    10,     0,     0,    11,   215,    12,    13,
      14,     0,     0,   105,    15,    16,    17,    18,    19,     0,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,     0,    33,    34,    35,    36,    37,    38,
       0,     0,     2,     0,   208,     3,     4,     5,     6,     7,
       8,     9,    10,     0,     0,    11,     0,    12,    13,    14,
       0,     0,     0,    15,    16,    17,    18,    19,     0,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,     0,    33,    34,    35,    36,    37,    38,     3,
       4,     5,     6,     7,     8,     9,    10,     0,     0,    11,
       0,    12,    13,    14,     0,     0,     0,    15,    16,    17,
      18,    19,     0,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,     0,    33,    34,    35,
      36,    37,    38,    94,    95,     0,     0,     0,     0,     0,
       0,    94,    95,     0,     0,     0,     0,     0,    94,    95,
       0,     0,     0,     0,     0,     0,    94,    95,     0,     0,
       0,    96,    97,    98,    99,     0,     0,     0,   146,    96,
      97,    98,    99,   100,   101,   147,    96,    97,    98,    99,
       0,   100,   101,   150,    96,    97,    98,    99,   100,   101,
       0,   151,    94,    95,     0,     0,   100,   101,     0,     0,
      94,    95,     0,     0,     0,     0,     0,     0,    94,    95,
       0,     0,     0,     0,     0,    94,    95,     0,     0,     0,
      96,    97,    98,    99,     0,     0,     0,   152,    96,    97,
      98,    99,   100,   101,   153,     0,    96,    97,    98,    99,
     100,   101,   154,    96,    97,    98,    99,     0,   100,   101,
     155,    94,    95,     0,     0,   100,   101,     0,     0,    94,
      95,     0,     0,     0,     0,     0,     0,    94,    95,     0,
       0,     0,     0,     0,     0,    94,    95,     0,     0,    96,
      97,    98,    99,    94,    95,   156,     0,    96,    97,    98,
      99,   100,   101,   157,     0,    96,    97,    98,    99,   100,
     101,   158,     0,    96,    97,    98,    99,   100,   101,   159,
       0,    96,    97,    98,    99,   100,   101,   160,    94,    95,
       0,     0,     0,   100,   101,     0,    94,    95,     0,     0,
       0,     0,     0,     0,    94,    95,     0,     0,     0,     0,
       0,     0,    94,    95,     0,     0,    96,    97,    98,    99,
      94,    95,   164,     0,    96,    97,    98,    99,   100,   101,
     165,     0,    96,    97,    98,    99,   100,   101,   166,     0,
      96,    97,    98,    99,   100,   101,   167,     0,    96,    97,
      98,    99,   100,   101,   168,    94,    95,     0,     0,     0,
     100,   101,    94,    95,     0,     0,     0,     0,     0,     0,
      94,    95,     0,     0,     0,     0,     0,     0,    94,    95,
       0,     0,     0,    96,    97,    98,    99,     0,     0,   169,
      96,    97,    98,    99,     0,   100,   101,   170,    96,    97,
      98,    99,   100,   101,     0,   171,    96,    97,    98,    99,
     100,   101,     0,   172,    94,    95,     0,     0,   100,   101,
       0,     0,    94,    95,     0,     0,     0,     0,     0,     0,
      94,    95,     0,     0,     0,     0,     0,     0,    94,    95,
       0,     0,    96,    97,    98,    99,    94,    95,     0,   196,
      96,    97,    98,    99,   100,   101,   199,     0,    96,    97,
      98,    99,   100,   101,   200,     0,    96,    97,    98,    99,
     100,   101,   201,     0,    96,    97,    98,    99,   100,   101,
     202,    94,    95,     0,     0,     0,   100,   101,     0,    94,
      95,     0,     0,     0,     0,     0,     0,    94,    95,     0,
       0,     0,     0,     0,     0,    94,    95,     0,     0,    96,
      97,    98,    99,    94,    95,   205,     0,    96,    97,    98,
      99,   100,   101,   206,     0,    96,    97,    98,    99,   100,
     101,   207,     0,    96,    97,    98,    99,   100,   101,   218,
       0,    96,    97,    98,    99,   100,   101,     0,     0,     0,
       0,     0,     0,   100,   101
};

static const yytype_int16 yycheck[] =
{
      13,     1,    65,    45,    60,     7,    16,     3,   122,    65,
       6,     7,     8,     4,     5,    52,    26,    59,     9,    32,
      52,    52,    54,    55,    54,    55,    53,    54,    53,    54,
      11,    12,    52,    52,    52,    52,    52,    52,    52,     7,
      96,    97,    98,    99,    52,   101,    52,    60,    61,    62,
      54,    53,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    52,    78,    79,    80,    52,    82,
      83,    84,    85,    86,    87,   189,    52,    52,     3,    52,
      93,     6,     7,     8,     7,    52,   142,   143,   144,   145,
     183,    52,    52,    52,    52,    52,    21,    22,    23,    52,
      25,   194,    27,    52,    29,    30,    31,    32,    52,   109,
       7,    36,    37,    38,    18,    19,    20,    53,    43,    44,
      45,    46,    53,    53,   217,    18,     7,    56,   221,    56,
      18,   224,    18,   146,    19,    20,    52,   150,   151,   152,
      53,    56,   155,    47,    48,    49,    50,    56,    56,   189,
      45,    91,   225,   216,   225,    59,    60,   170,   171,   172,
     216,   148,    47,    48,    49,    50,    -1,    -1,    -1,    -1,
      55,    -1,    57,    58,    59,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    13,   197,    15,    16,
      17,    -1,    -1,   216,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    41,    42,    43,    44,    45,    46,
      -1,    -1,     0,    -1,    51,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    13,    -1,    15,    16,    17,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    41,    42,    43,    44,    45,    46,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    13,
      -1,    15,    16,    17,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      44,    45,    46,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    -1,    -1,
      -1,    47,    48,    49,    50,    -1,    -1,    -1,    54,    47,
      48,    49,    50,    59,    60,    53,    47,    48,    49,    50,
      -1,    59,    60,    54,    47,    48,    49,    50,    59,    60,
      -1,    54,    19,    20,    -1,    -1,    59,    60,    -1,    -1,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      -1,    -1,    -1,    -1,    -1,    19,    20,    -1,    -1,    -1,
      47,    48,    49,    50,    -1,    -1,    -1,    54,    47,    48,
      49,    50,    59,    60,    53,    -1,    47,    48,    49,    50,
      59,    60,    53,    47,    48,    49,    50,    -1,    59,    60,
      54,    19,    20,    -1,    -1,    59,    60,    -1,    -1,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    20,    -1,    -1,    47,
      48,    49,    50,    19,    20,    53,    -1,    47,    48,    49,
      50,    59,    60,    53,    -1,    47,    48,    49,    50,    59,
      60,    53,    -1,    47,    48,    49,    50,    59,    60,    53,
      -1,    47,    48,    49,    50,    59,    60,    53,    19,    20,
      -1,    -1,    -1,    59,    60,    -1,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    20,    -1,    -1,    47,    48,    49,    50,
      19,    20,    53,    -1,    47,    48,    49,    50,    59,    60,
      53,    -1,    47,    48,    49,    50,    59,    60,    53,    -1,
      47,    48,    49,    50,    59,    60,    53,    -1,    47,    48,
      49,    50,    59,    60,    53,    19,    20,    -1,    -1,    -1,
      59,    60,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      -1,    -1,    -1,    47,    48,    49,    50,    -1,    -1,    53,
      47,    48,    49,    50,    -1,    59,    60,    54,    47,    48,
      49,    50,    59,    60,    -1,    54,    47,    48,    49,    50,
      59,    60,    -1,    54,    19,    20,    -1,    -1,    59,    60,
      -1,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      -1,    -1,    47,    48,    49,    50,    19,    20,    -1,    54,
      47,    48,    49,    50,    59,    60,    53,    -1,    47,    48,
      49,    50,    59,    60,    53,    -1,    47,    48,    49,    50,
      59,    60,    53,    -1,    47,    48,    49,    50,    59,    60,
      53,    19,    20,    -1,    -1,    -1,    59,    60,    -1,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    20,    -1,    -1,    47,
      48,    49,    50,    19,    20,    53,    -1,    47,    48,    49,
      50,    59,    60,    53,    -1,    47,    48,    49,    50,    59,
      60,    53,    -1,    47,    48,    49,    50,    59,    60,    53,
      -1,    47,    48,    49,    50,    59,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    62,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    13,    15,    16,    17,    21,    22,    23,    24,    25,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    41,    42,    43,    44,    45,    46,    63,
      65,    66,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    81,    82,    83,    85,    86,    88,    89,    52,
      52,    52,    52,     7,    88,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,     7,    52,    52,
      52,    88,    52,    52,    52,    52,    52,    52,     7,    73,
      75,    54,    54,    55,    19,    20,    47,    48,    49,    50,
      59,    60,    53,    75,    87,    88,    89,    88,    88,    18,
      87,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    52,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    74,     7,    88,    89,    89,    89,    89,    89,
      53,    53,    55,    57,    58,    59,    54,    53,    63,    53,
      54,    54,    54,    53,    53,    54,    53,    53,    53,    53,
      53,    67,    68,    72,    53,    53,    53,    53,    53,    53,
      54,    54,    54,    56,    89,    89,    89,    89,    88,    18,
      26,    83,    84,    56,    88,    88,    88,    88,    53,    54,
       7,    88,    88,    88,    63,    64,    54,    18,    64,    53,
      53,    53,    53,    18,    68,    53,    53,    53,    51,    64,
      11,    12,    79,    80,    88,    63,    52,    56,    53,    87,
      64,    56,    53,    64,    56,    64,    79,    80
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
        case 19:

/* Line 1455 of yacc.c  */
#line 71 "1707005.y"
    {(yyval.variable).ival=(yyvsp[(1) - (2)].variable).ival;;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 75 "1707005.y"
    {printf("Header Detected.\n");;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 79 "1707005.y"
    {
                    if((yyvsp[(2) - (6)].variable).str[0]=='m' && (yyvsp[(2) - (6)].variable).str[1]=='a' && (yyvsp[(2) - (6)].variable).str[2]=='i' &&(yyvsp[(2) - (6)].variable).str[3]=='n')
                    {
                        printf("Main function starts here.\n");
                    }
                    else
                    {
                        printf("User defined function.\n");
                    }
    ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 98 "1707005.y"
    {printf("function has no paramters\n");;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 107 "1707005.y"
    {
        printf("%d\n",(yyvsp[(3) - (4)].variable).ival);
    ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 110 "1707005.y"
    {
        printf("%f\n",(yyvsp[(3) - (4)].variable).fval);
    ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 113 "1707005.y"
    {
        printf("%s ",(yyvsp[(3) - (4)].variable).st);
    ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 116 "1707005.y"
    {
        printf("%s\n",(yyvsp[(3) - (4)].variable).st);
    ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 138 "1707005.y"
    {
                    if((yyvsp[(3) - (3)].variable).ival==INT_MIN && (yyvsp[(3) - (3)].variable).fval==FLT_MIN && symbol_table[(yyvsp[(1) - (3)].variable).ival].val==INT_MAX && symbol_table[(yyvsp[(1) - (3)].variable).ival].vall==FLT_MAX)
                    {
                        strcpy(symbol_table[(yyvsp[(1) - (3)].variable).ival].vas,(yyvsp[(3) - (3)].variable).st);
                    }
                    else if((yyvsp[(3) - (3)].variable).ival==INT_MIN && (yyvsp[(3) - (3)].variable).fval!=FLT_MIN && symbol_table[(yyvsp[(1) - (3)].variable).ival].val==INT_MAX && symbol_table[(yyvsp[(1) - (3)].variable).ival].vas[0]=='\0')
                    {
                        symbol_table[(yyvsp[(1) - (3)].variable).ival].vall=(yyvsp[(3) - (3)].variable).fval;
                    }
                    else if((yyvsp[(3) - (3)].variable).ival!=INT_MIN && (yyvsp[(3) - (3)].variable).fval==FLT_MIN && symbol_table[(yyvsp[(1) - (3)].variable).ival].vall==FLT_MAX && symbol_table[(yyvsp[(1) - (3)].variable).ival].vas[0]=='\0')
                    {
                        symbol_table[(yyvsp[(1) - (3)].variable).ival].val=(yyvsp[(3) - (3)].variable).ival;
                    }
                    else
                    {
                        printf("Variable Type error.\n");
                    }
                    /*for(int i=0;i<count;i++)
                    {
                        printf("lala %s %d %f %s\n",symbol_table[i].vas,symbol_table[i].val,symbol_table[i].vall,symbol_table[i].name);
                    }*/
                    

    ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 166 "1707005.y"
    {(yyval.variable).ival = add_value(&(yyvsp[(1) - (1)].variable).str);;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 170 "1707005.y"
    {printf("This is a comment.\n");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 174 "1707005.y"
    {printf("Return statement found.\n\n");;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 178 "1707005.y"
    {
                                if((yyvsp[(3) - (6)].variable).ival)
                                {
                                    iff=1;
                                    printf("If statement will be executed.\n");
                                }
                                if(iff!=1)
                                {
                                    printf("Else statement will be executed.\n");
                                }
    ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 189 "1707005.y"
    {
                                if((yyvsp[(3) - (7)].variable).ival)
                                {
                                    iff=1;
                                    printf("If statement will be executed.\n");
                                }
                                if(iff!=1)
                                {
                                    printf("Else statement will be executed.\n");
                                }

    ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 201 "1707005.y"
    {
                                if((yyvsp[(3) - (7)].variable).ival)
                                {  
                                    iff=1;
                                    printf("If statement will be executed.\n");
                            
                                }
                                if(iff!=1)
                                {
                                    printf("Else statement will be executed.\n");
                                }
    ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 216 "1707005.y"
    {
                                if((yyvsp[(3) - (7)].variable).ival)
                                {
                                     iff=1;
                                     printf("Else if statement will be executed.\n");
                                }
                        
    ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 224 "1707005.y"
    {
                                if((yyvsp[(3) - (7)].variable).ival)
                                {
                                     iff=1;
                                     printf("The last else if statement will be executed.\n");
                                }
    ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 234 "1707005.y"
    {
                        ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 240 "1707005.y"
    {
        sw = (yyvsp[(3) - (5)].variable).ival;
        printf("This is a switch statement.\n");
    ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 248 "1707005.y"
    {
        if(sw!=INT_MIN)
        {
            printf("%d\n",dv);
        }
    ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 257 "1707005.y"
    {
        if(sw==(yyvsp[(2) - (5)].variable).ival)
        {
            printf("%d\n",(yyvsp[(2) - (5)].variable).ival);
            sw = INT_MIN;
        }

    ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 265 "1707005.y"
    {
        
        if(sw==(yyvsp[(2) - (5)].variable).ival)
        {
            printf("%d\n",(yyvsp[(2) - (5)].variable).ival);
            sw = INT_MIN;
        }
    ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 275 "1707005.y"
    {
       dv = (yyvsp[(3) - (3)].variable).ival;
    ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 281 "1707005.y"
    {
                    for(int i=(yyvsp[(3) - (10)].variable).ival;i<(yyvsp[(5) - (10)].variable).ival;i=i+(yyvsp[(7) - (10)].variable).ival)
                    {
                        printf("This is a for loop.\n");
                    }
    ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 289 "1707005.y"
    {
        if((yyvsp[(3) - (6)].variable).ival)
        {
            printf("This is a while loop\n");
        }
    ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 297 "1707005.y"
    {(yyval.variable).ival=(yyvsp[(1) - (1)].variable).ival;(yyval.variable).fval=(yyvsp[(1) - (1)].variable).fval;;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 298 "1707005.y"
    {if((yyvsp[(1) - (3)].variable).ival==INT_MIN){(yyval.variable).ival = (yyvsp[(1) - (3)].variable).fval > (yyvsp[(3) - (3)].variable).fval;}else{(yyval.variable).ival = (yyvsp[(1) - (3)].variable).fval > (yyvsp[(3) - (3)].variable).fval;};}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 299 "1707005.y"
    {if((yyvsp[(1) - (3)].variable).ival==INT_MIN){(yyval.variable).ival = (yyvsp[(1) - (3)].variable).fval > (yyvsp[(3) - (3)].variable).fval;}else{(yyval.variable).ival = (yyvsp[(1) - (3)].variable).fval > (yyvsp[(3) - (3)].variable).fval;};}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 300 "1707005.y"
    {if((yyvsp[(1) - (3)].variable).ival==INT_MIN){(yyval.variable).ival = (yyvsp[(1) - (3)].variable).fval > (yyvsp[(3) - (3)].variable).fval;}else{(yyval.variable).ival = (yyvsp[(1) - (3)].variable).fval > (yyvsp[(3) - (3)].variable).fval;};}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 301 "1707005.y"
    {if((yyvsp[(1) - (3)].variable).ival==INT_MIN){(yyval.variable).ival = (yyvsp[(1) - (3)].variable).fval > (yyvsp[(3) - (3)].variable).fval;}else{(yyval.variable).ival = (yyvsp[(1) - (3)].variable).fval > (yyvsp[(3) - (3)].variable).fval;};}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 304 "1707005.y"
    {(yyval.variable).ival=(yyvsp[(1) - (1)].variable).ival;(yyval.variable).fval=(yyvsp[(1) - (1)].variable).fval;if((yyvsp[(1) - (1)].variable).st!=NULL){strcpy((yyval.variable).st,(yyvsp[(1) - (1)].variable).st);};}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 305 "1707005.y"
    {int a=strlen((yyvsp[(3) - (4)].variable).st);printf("Lenght of string: %d\n",a);;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 306 "1707005.y"
    {store n = find_value(&(yyvsp[(3) - (6)].variable).str),m=find_value(&(yyvsp[(5) - (6)].variable).str);int a = strcmp(n.vas,m.vas); 
                            a=0?printf("Strings match.\n"):printf("Strings do not match\n");;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 308 "1707005.y"
    {int i = add_value(&(yyvsp[(3) - (6)].variable).str),j = add_value(&(yyvsp[(5) - (6)].variable).str);strcat(symbol_table[i].vas,symbol_table[j].vas);;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 309 "1707005.y"
    {int i = add_value(&(yyvsp[(3) - (6)].variable).str),j = add_value(&(yyvsp[(5) - (6)].variable).str);strcpy(symbol_table[i].vas,symbol_table[j].vas);;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 310 "1707005.y"
    {
        long long int n = (long long int)(yyvsp[(1) - (2)].variable).ival;
        long long int answer=1;
        for(long long int i=2;i<=n;i++)
        {
            answer*=i;
        }
        printf("%lld\n",answer);
    ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 319 "1707005.y"
    {
        int check(int n)
        {
            if(n==1)
            {
                return 0;
            }
            if(n==2)
            {
                return 1;
            }
            if(n%2==0)
            {
                return 0;
            }
            int m = sqrt(n);
            for(int i=3;i<=m+2;i+=2)
            {
                if(n%i==0)
                {
                    return 0;
                }
            }
            return 1;
        }
        int n=(yyvsp[(3) - (4)].variable).ival;
        (yyval.variable).ival = check(n);
        (yyval.variable).ival==0?printf("Not prime.\n"):printf("Prime.\n")
    ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 348 "1707005.y"
    {
        if((yyvsp[(3) - (6)].variable).ival>(yyvsp[(5) - (6)].variable).ival)
        {
            (yyval.variable).ival = (yyvsp[(5) - (6)].variable).ival;
        }
        else
        {
            (yyval.variable).ival = (yyvsp[(3) - (6)].variable).ival;
        }
        printf("%d\n",(yyval.variable).ival);
    ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 359 "1707005.y"
    {
        if((yyvsp[(3) - (6)].variable).ival>(yyvsp[(5) - (6)].variable).ival)
        {
            (yyval.variable).ival = (yyvsp[(3) - (6)].variable).ival;
        }
        else
        {
            (yyval.variable).ival = (yyvsp[(5) - (6)].variable).ival;
        }
        printf("%d\n",(yyval.variable).ival);
    ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 370 "1707005.y"
    {
       int c;
       int a = (yyvsp[(3) - (6)].variable).ival;
       int b = (yyvsp[(5) - (6)].variable).ival;
       if(a>b)
       {
           int temp = a;
           a=b;
           b=a;
       }
       while(a!=0)
       {
           int temp = b%a;
           b=a;
           a=temp;
       }
       (yyval.variable).ival = b;
       printf("%d\n",(yyval.variable).ival);
    ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 389 "1707005.y"
    {double x = (double)(yyvsp[(3) - (4)].variable).fval,ans = sin((x*3.1416)/180.0);printf("%f\n",(yyval.variable).fval=(float)ans);;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 390 "1707005.y"
    {double x = (double)(yyvsp[(3) - (4)].variable).fval,ans = cos((x*3.1416)/180.0); printf("%f\n",(yyval.variable).fval=(float)ans); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 391 "1707005.y"
    {double x = (double)(yyvsp[(3) - (4)].variable).fval,ans = tan((x*3.1416)/180.0); printf("%f\n",(yyval.variable).fval=(float)ans); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 392 "1707005.y"
    {double x = (double)(yyvsp[(3) - (6)].variable).fval,y = (double)(yyvsp[(5) - (6)].variable).fval;printf("%f\n",(yyval.variable).fval=(float)pow(x,y));;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 393 "1707005.y"
    {float x = (yyvsp[(3) - (4)].variable).fval,ans = log(x);printf("%f\n",(yyval.variable).fval=ans);;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 394 "1707005.y"
    {(yyval.variable).ival=abs((yyvsp[(3) - (4)].variable).ival);printf("%d\n",(yyval.variable).ival);;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 395 "1707005.y"
    {(yyval.variable).ival=(int)(yyvsp[(3) - (4)].variable).fval;printf("%d\n",(yyval.variable).ival);;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 396 "1707005.y"
    {(yyval.variable).ival=(int)(yyvsp[(3) - (4)].variable).fval+1;printf("%d\n",(yyval.variable).ival);;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 397 "1707005.y"
    {if((yyvsp[(1) - (3)].variable).fval!=FLT_MIN){(yyval.variable).fval=(yyvsp[(1) - (3)].variable).fval+(yyvsp[(3) - (3)].variable).fval;}else{(yyval.variable).ival=(yyvsp[(1) - (3)].variable).ival+(yyvsp[(3) - (3)].variable).ival;};}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 398 "1707005.y"
    {if((yyvsp[(1) - (3)].variable).fval!=FLT_MIN){(yyval.variable).fval=(yyvsp[(1) - (3)].variable).fval-(yyvsp[(3) - (3)].variable).fval;}else{(yyval.variable).ival=(yyvsp[(1) - (3)].variable).ival-(yyvsp[(3) - (3)].variable).ival;};}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 399 "1707005.y"
    {if((yyvsp[(1) - (3)].variable).fval!=FLT_MIN){(yyval.variable).fval=(yyvsp[(1) - (3)].variable).fval*(yyvsp[(3) - (3)].variable).fval;}else{(yyval.variable).ival=(yyvsp[(1) - (3)].variable).ival*(yyvsp[(3) - (3)].variable).ival;};}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 400 "1707005.y"
    {if((yyvsp[(1) - (3)].variable).fval!=FLT_MIN){(yyval.variable).fval=(yyvsp[(1) - (3)].variable).fval/(yyvsp[(3) - (3)].variable).fval;}else{(yyval.variable).ival=(yyvsp[(1) - (3)].variable).ival/(yyvsp[(3) - (3)].variable).ival;};}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 401 "1707005.y"
    {(yyval.variable).ival = (yyvsp[(1) - (3)].variable).ival % (yyvsp[(3) - (3)].variable).ival;;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 402 "1707005.y"
    {(yyval.variable).ival = (yyvsp[(1) - (2)].variable).ival + 1; int i = add_value(&(yyvsp[(1) - (2)].variable).str);symbol_table[i].val++;;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 403 "1707005.y"
    {(yyval.variable).ival = (yyvsp[(1) - (2)].variable).ival - 1; int i = add_value(&(yyvsp[(1) - (2)].variable).str);symbol_table[i].val--;;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 406 "1707005.y"
    {(yyval.variable).ival=(yyvsp[(1) - (1)].variable).ival; (yyval.variable).fval=FLT_MIN;(yyval.variable).st=NULL;;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 407 "1707005.y"
    {(yyval.variable).fval = (yyvsp[(1) - (1)].variable).fval; (yyval.variable).ival=INT_MIN;(yyval.variable).st=NULL;;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 408 "1707005.y"
    {(yyval.variable).ival=INT_MIN;(yyval.variable).fval=FLT_MIN;strcpy((yyval.variable).st,(yyvsp[(1) - (1)].variable).st);;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 409 "1707005.y"
    {store pp = find_value(&(yyvsp[(1) - (1)].variable).str);if(pp.val==INT_MAX && pp.vall==FLT_MAX){(yyval.variable).ival=INT_MIN;(yyval.variable).fval=FLT_MIN;strcpy((yyval.variable).st,pp.vas);}
    else if(pp.val==INT_MAX && pp.vall!=FLT_MAX){(yyval.variable).fval=pp.vall;(yyval.variable).ival=INT_MIN;}
                                       else{(yyval.variable).ival=pp.val;(yyval.variable).fval=FLT_MIN;};}
    break;



/* Line 1455 of yacc.c  */
#line 2309 "1707005.tab.c"
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
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1675 of yacc.c  */
#line 413 "1707005.y"


int add_value(char **sym)
{
    char a[100];
    int l=strlen(*sym);
    strcpy(a,*sym);
    int i=0;
    //printf("%s ro\n",a);
    while((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z') || (a[i]>='0' && a[i]<='9'))
    {
        if(a[i]=='\0')
        {
            break;
        }
        i++;
    }
    a[i]='\0';
    for(int i=0;i<count;i++)
	{
		if(!strcmp(a,symbol_table[i].name))
		{
            return i;
		}
	}
    strcpy(symbol_table[count].name,a);
    symbol_table[count].val = INT_MAX;
    symbol_table[count].vall = FLT_MAX;
    count++;
    //printf("%d",count);
    return count-1;
}

store find_value(char **sym)
{
    char a[100];
    int l=strlen(*sym);
    strcpy(a,*sym);
    int i=0;
    //printf("%s ro\n",a);
    while((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z') || (a[i]>='0' && a[i]<='9'))
    {
        if(a[i]=='\0')
        {
            break;
        }
        i++;
    }
    a[i]='\0';
	int p = 0;
	for(int i=0;i<count;i++)
	{
		if(!strcmp(a,symbol_table[i].name))
		{
            return symbol_table[i];
		}
	}
    store n;
    printf("Variable not declared\n");
	return n;
}

void yyerror(const char *s)
{
	fprintf(stderr, "error: %s\n",s);
}

int main()
{
	yyin = fopen("input.c","r");

    yyparse();

    return 0;
}
