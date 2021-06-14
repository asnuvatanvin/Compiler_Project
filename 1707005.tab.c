
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

    typedef struct{
        char array_name[100];
        int arr[1000];
        int limit;
    }listt;
    listt list[50];

	int count,sw,dv,iff,array_counter;
	store find_value(char **sym);
	int add_value(char **sym);
    int find_array_value(char **sym,int j);
    int add_array_value(char **sym,int j);


/* Line 189 of yacc.c  */
#line 109 "1707005.tab.c"

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
     VOID = 265,
     AN = 266,
     IF = 267,
     ELIF = 268,
     ELSE = 269,
     FOR = 270,
     SW = 271,
     CA = 272,
     WHILE = 273,
     COL = 274,
     INC = 275,
     DEC = 276,
     MIN = 277,
     MAX = 278,
     GCD = 279,
     PFI = 280,
     DO = 281,
     PRIME = 282,
     DF = 283,
     POW = 284,
     PFF = 285,
     PFA = 286,
     SINE = 287,
     COS = 288,
     TAN = 289,
     LN = 290,
     CMT = 291,
     HEAD = 292,
     ABS = 293,
     FLOOR = 294,
     CEIL = 295,
     RET = 296,
     PFS = 297,
     PFSN = 298,
     LEN = 299,
     CMP = 300,
     CAT = 301,
     CPY = 302,
     END = 303,
     INPI = 304,
     INPF = 305
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 36 "1707005.y"

    struct use
    {
        int ival;
        float fval;
        char *str;
        char *st;
    }variable;



/* Line 214 of yacc.c  */
#line 207 "1707005.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 219 "1707005.tab.c"

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
#define YYLAST   932

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNRULES -- Number of states.  */
#define YYNSTATES  307

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    66,     2,     2,     2,    64,     2,     2,
      56,    57,    53,    51,    58,    52,     2,    54,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      60,    59,    61,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    62,     2,    63,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    65,     2,    55,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    67,    68
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    48,    51,    53,    60,    64,    66,
      69,    70,    75,    79,    85,    91,    96,   101,   106,   115,
     117,   123,   131,   139,   151,   163,   175,   187,   199,   202,
     205,   208,   210,   212,   214,   216,   220,   222,   226,   230,
     234,   236,   238,   241,   248,   256,   264,   272,   280,   284,
     290,   292,   298,   304,   308,   319,   326,   334,   336,   340,
     344,   348,   352,   356,   360,   362,   367,   374,   381,   388,
     391,   396,   403,   410,   417,   422,   427,   432,   439,   444,
     449,   454,   459,   463,   467,   471,   475,   479,   482,   485,
     487,   489,   491
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      70,     0,    -1,    -1,    70,    71,    -1,    73,    -1,    88,
      -1,    74,    -1,    77,    -1,    90,    -1,   101,    -1,    93,
      -1,    94,    -1,    97,    -1,    98,    -1,    99,    -1,    83,
      -1,    85,    -1,    80,    -1,    81,    -1,    82,    -1,    78,
      -1,    79,    -1,    89,    -1,    71,    72,    -1,    71,    55,
      -1,    37,    -1,    84,     7,    56,    75,    57,    19,    -1,
      75,    58,    76,    -1,    76,    -1,    84,     7,    -1,    -1,
       7,    56,    87,    57,    -1,     7,    56,    57,    -1,    87,
      59,    49,    56,    57,    -1,    87,    59,    50,    56,    57,
      -1,    25,    56,   101,    57,    -1,    30,    56,   101,    57,
      -1,    42,    56,   101,    57,    -1,    31,    56,    60,    11,
      58,     3,    61,    57,    -1,    48,    -1,     4,    11,    62,
       3,    63,    -1,    60,    11,    58,     3,    61,    59,   101,
      -1,    60,    11,    58,     3,    61,    59,    82,    -1,    60,
      11,    58,     3,    61,    51,    60,    11,    58,     3,    61,
      -1,    60,    11,    58,     3,    61,    52,    60,    11,    58,
       3,    61,    -1,    60,    11,    58,     3,    61,    53,    60,
      11,    58,     3,    61,    -1,    60,    11,    58,     3,    61,
      54,    60,    11,    58,     3,    61,    -1,    60,    11,    58,
       3,    61,    64,    60,    11,    58,     3,    61,    -1,    84,
      85,    -1,    84,    87,    -1,    84,    78,    -1,     4,    -1,
       5,    -1,     9,    -1,    10,    -1,    85,    58,    86,    -1,
      86,    -1,    87,    59,   101,    -1,    87,    59,    82,    -1,
      87,    58,     7,    -1,     7,    -1,    36,    -1,    41,   101,
      -1,    12,    56,   100,    57,    65,    72,    -1,    12,    56,
     100,    57,    65,    72,    91,    -1,    12,    56,   100,    57,
      65,    72,    92,    -1,    13,    56,   100,    57,    65,    72,
      91,    -1,    13,    56,   100,    57,    65,    72,    92,    -1,
      14,    65,    72,    -1,    16,    56,   101,    57,    19,    -1,
      95,    -1,    17,   101,    19,    71,    95,    -1,    17,   101,
      19,    71,    96,    -1,    28,    19,    71,    -1,    15,    56,
     101,    58,   101,    58,   101,    57,    65,    72,    -1,    18,
      56,   100,    57,    65,    72,    -1,    26,    65,    72,    18,
      56,   100,    57,    -1,   102,    -1,   101,    61,   102,    -1,
     101,    60,   102,    -1,   101,    59,   102,    -1,   101,    66,
     102,    -1,   101,    67,   102,    -1,   101,    68,   102,    -1,
     102,    -1,    44,    56,   101,    57,    -1,    45,    56,   101,
      58,   101,    57,    -1,    46,    56,   101,    58,   101,    57,
      -1,    47,    56,   101,    58,   101,    57,    -1,   101,    66,
      -1,    27,    56,   101,    57,    -1,    22,    56,   101,    58,
     101,    57,    -1,    23,    56,   101,    58,   101,    57,    -1,
      24,    56,   101,    58,   101,    57,    -1,    32,    56,   101,
      57,    -1,    33,    56,   101,    57,    -1,    34,    56,   101,
      57,    -1,    29,    56,   101,    58,   101,    57,    -1,    35,
      56,   101,    57,    -1,    38,    56,   101,    57,    -1,    39,
      56,   101,    57,    -1,    40,    56,   101,    57,    -1,   101,
      51,   102,    -1,   101,    52,   102,    -1,   101,    53,   102,
      -1,   101,    54,   102,    -1,   101,    64,   102,    -1,   101,
      20,    -1,   101,    21,    -1,     3,    -1,     6,    -1,     8,
      -1,     7,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    57,    57,    58,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    84,    85,    89,    93,   106,   107,   111,
     112,   116,   117,   121,   126,   133,   136,   139,   142,   143,
     146,   168,   169,   173,   174,   175,   176,   177,   180,   181,
     182,   186,   187,   188,   189,   192,   193,   197,   221,   225,
     226,   230,   234,   238,   249,   261,   276,   284,   293,   300,
     307,   317,   325,   335,   341,   349,   357,   363,   364,   365,
     366,   367,   368,   369,   372,   373,   374,   376,   377,   378,
     387,   416,   427,   438,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   474,
     475,   476,   477
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "INTT", "FL", "FLOAT", "ID",
  "STRING", "STT", "VOID", "AN", "IF", "ELIF", "ELSE", "FOR", "SW", "CA",
  "WHILE", "COL", "INC", "DEC", "MIN", "MAX", "GCD", "PFI", "DO", "PRIME",
  "DF", "POW", "PFF", "PFA", "SINE", "COS", "TAN", "LN", "CMT", "HEAD",
  "ABS", "FLOOR", "CEIL", "RET", "PFS", "PFSN", "LEN", "CMP", "CAT", "CPY",
  "END", "INPI", "INPF", "'+'", "'-'", "'*'", "'/'", "'}'", "'('", "')'",
  "','", "'='", "'<'", "'>'", "'['", "']'", "'%'", "'{'", "'!'", "\">=\"",
  "\"<=\"", "$accept", "program", "statement", "block", "header",
  "function", "params", "declaration_for_function", "function_call",
  "input", "display", "array", "array_assignment", "array_operations",
  "declaration", "type", "assignments", "assignment", "var", "comment",
  "return", "if_else", "elseif", "else", "switch_", "case", "cases", "df",
  "for", "while", "do_while", "condition", "expr", "factor", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,    43,    45,    42,    47,   125,    40,    41,    44,    61,
      60,    62,    91,    93,    37,   123,    33,   306,   307
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    72,    72,    73,    74,    75,    75,    76,
      76,    77,    77,    78,    78,    79,    79,    79,    79,    79,
      80,    81,    81,    82,    82,    82,    82,    82,    83,    83,
      83,    84,    84,    84,    84,    85,    85,    86,    86,    87,
      87,    88,    89,    90,    90,    90,    91,    91,    92,    93,
      94,    95,    95,    96,    97,    98,    99,   100,   100,   100,
     100,   100,   100,   100,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   102,
     102,   102,   102
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     6,     3,     1,     2,
       0,     4,     3,     5,     5,     4,     4,     4,     8,     1,
       5,     7,     7,    11,    11,    11,    11,    11,     2,     2,
       2,     1,     1,     1,     1,     3,     1,     3,     3,     3,
       1,     1,     2,     6,     7,     7,     7,     7,     3,     5,
       1,     5,     5,     3,    10,     6,     7,     1,     3,     3,
       3,     3,     3,     3,     1,     4,     6,     6,     6,     2,
       4,     6,     6,     6,     4,     4,     4,     6,     4,     4,
       4,     4,     3,     3,     3,     3,     3,     2,     2,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,   109,    51,    52,   110,   112,   111,    53,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    61,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,     0,     3,     4,     6,     7,    20,    21,    17,    18,
      19,    15,     0,    16,    56,     0,     5,    22,     8,    10,
      11,    70,    12,    13,    14,     9,    84,     0,     0,     0,
       0,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,     0,     0,     0,     0,     0,     0,    60,    50,
      48,    49,     0,     0,     0,   107,   108,     0,     0,     0,
       0,     0,    89,     0,    60,    32,     0,     0,     0,    84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,    55,     0,
      59,     0,     0,     0,    58,    57,   102,   103,   104,   105,
     106,     0,    31,     0,     0,     0,     0,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    35,    24,    23,
       0,    90,     0,    36,     0,    94,    95,    96,    98,    99,
     100,   101,    37,    85,     0,     0,     0,     0,    51,     0,
      28,     0,     0,     0,     0,     0,    40,     0,    80,    79,
      78,    81,    82,    83,     0,    69,     0,    71,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    29,    33,    34,     0,    63,     0,     0,    75,
      91,    92,    93,     0,    97,     0,    86,    87,    88,     0,
       0,     0,     0,     0,     0,    26,    27,     0,     0,     0,
      64,    65,     0,    73,    76,     0,     0,     0,     0,     0,
      42,    41,     0,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,    68,     0,     0,     0,     0,     0,
       0,     0,    74,     0,     0,     0,     0,     0,     0,    43,
      44,    45,    46,    47,     0,    66,    67
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   128,   129,    43,    44,   199,   200,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,   260,   261,    59,    60,    61,   218,    62,    63,
      64,   117,    65,    66
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -144
static const yytype_int16 yypact[] =
{
    -144,   240,  -144,  -144,    -4,  -144,  -144,   -10,  -144,  -144,
    -144,   -42,   -39,   -26,   885,   -24,   -20,    -9,    -2,    21,
      22,    30,    35,    39,    40,    48,    49,    50,    55,  -144,
    -144,    56,    58,    60,   885,    61,    67,    71,    72,    73,
    -144,   123,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,   130,    83,  -144,    -8,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,   830,  -144,    80,    12,   885,
     885,   885,  -144,   119,   885,   885,   885,   885,   885,   344,
     885,   885,   885,    84,   885,   885,   885,   885,   885,   885,
     885,   830,   885,   885,   885,   885,   885,    85,    89,  -144,
      83,    -8,   140,   141,    86,  -144,  -144,    32,    32,    32,
      32,    32,  -144,   147,  -144,  -144,   -36,    92,   146,    95,
     166,   387,   344,    97,   406,   422,   441,   457,   286,   137,
     476,   483,   499,   148,   518,   534,   553,   569,   588,   604,
     623,   639,   658,   665,   674,   693,   161,    24,  -144,    -6,
    -144,   109,   113,   163,  -144,   830,  -144,  -144,  -144,  -144,
    -144,   112,  -144,   114,    32,    32,    32,    32,    32,    32,
     885,   158,   -12,   124,   885,   885,   885,  -144,  -144,  -144,
     122,  -144,   885,  -144,   126,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,   885,   885,   885,   129,  -144,     1,
    -144,   184,   390,   135,   136,   138,  -144,   344,  -144,  -144,
    -144,  -144,  -144,  -144,   713,  -144,   175,  -144,  -144,   344,
     721,   729,   748,   885,   768,   192,   776,   795,   803,   -41,
     182,    24,  -144,  -144,  -144,   200,    70,   885,   344,  -144,
    -144,  -144,  -144,   154,  -144,   143,  -144,  -144,  -144,   155,
     156,   162,   165,   390,   167,  -144,  -144,   160,   170,   164,
    -144,  -144,   823,  -144,  -144,   171,   220,   222,   223,   224,
    -144,   830,   225,   -27,   885,   344,   172,  -144,   183,   193,
     195,   196,   201,   185,  -144,   344,   258,   265,   280,   294,
     296,   241,  -144,   244,   246,   253,   268,   274,   344,  -144,
    -144,  -144,  -144,  -144,    70,  -144,  -144
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,     0,  -122,  -144,  -144,  -144,   105,  -144,   285,
    -144,  -144,  -144,   -95,  -144,  -143,   287,   236,   -37,  -144,
    -144,  -144,    36,    38,  -144,  -144,   173,  -144,  -144,  -144,
    -144,   -72,   -14,   -66
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -78
static const yytype_int16 yytable[] =
{
      73,    42,   123,   119,   201,    14,   179,    67,   119,   154,
     249,   250,   251,   252,    69,   101,   216,    70,   253,   114,
      91,   162,   103,   254,   249,   250,   251,   252,   198,     5,
      71,   116,    74,     9,    10,     3,    75,   254,     6,    72,
       8,   156,   157,   158,   159,   160,    68,    76,   -60,   -60,
     103,   104,   103,   202,    77,   118,   120,   121,   230,   231,
     118,   124,   125,   126,   127,   149,   130,   131,   132,   115,
     134,   135,   136,   137,   138,   139,   140,    78,   141,   142,
     143,   144,   145,   258,   259,   236,    80,    79,   201,     3,
     155,    81,     6,    72,     8,    82,    83,   239,   208,   209,
     210,   211,   212,   213,    84,    85,    86,   154,    16,    17,
      18,    87,    88,    21,    89,    22,    90,    92,    25,    26,
      27,    28,   172,    93,    31,    32,    33,    94,    95,    96,
      36,    37,    38,    39,    97,   151,   152,    98,   122,   105,
     106,   102,   113,   146,   133,   147,   153,   114,   150,   163,
     161,   243,   -77,   284,   173,   180,   214,   119,   270,   184,
     220,   221,   222,   292,   197,   203,   105,   106,   224,   204,
     107,   108,   109,   110,   205,   206,   304,   215,   223,   207,
     226,   227,   228,   111,   225,   112,   105,   106,   155,   219,
     229,   232,   233,   234,   238,   245,   235,   107,   108,   109,
     110,   255,   283,   257,   265,   164,   165,   166,   119,   118,
     111,   264,   167,   168,   169,   266,   267,   107,   108,   109,
     110,   273,   268,   262,   170,   269,   274,   272,   277,   275,
     111,   278,   112,   279,   280,   281,   282,   285,   263,   271,
       2,   286,   291,     3,     4,     5,     6,     7,     8,     9,
      10,   287,    11,   288,   289,    12,    13,    14,    15,   290,
     118,   293,    16,    17,    18,    19,    20,    21,   294,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,   295,    36,    37,    38,    39,    40,     3,
       4,     5,     6,     7,     8,     9,    10,   296,    11,   297,
      41,    12,    13,    14,    15,   299,   298,   300,    16,    17,
      18,    19,    20,    21,   301,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,   302,
      36,    37,    38,    39,    40,   303,   256,    99,   148,   100,
     305,   178,   306,     0,     0,   217,    41,     3,     4,     5,
       6,     7,     8,     9,    10,     0,    11,     0,     0,    12,
      13,    14,    15,     0,     0,     0,    16,    17,    18,    19,
      20,    21,     0,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,     0,    36,    37,
      38,    39,    40,     3,     0,     0,     6,    72,     8,     0,
       0,     0,     0,     0,    41,     0,     0,   105,   106,     0,
       0,     0,    16,    17,    18,     0,     0,    21,     0,    22,
       0,     0,    25,    26,    27,    28,   105,   106,    31,    32,
      33,     0,     0,     0,    36,    37,    38,    39,   107,   108,
     109,   110,   105,   106,   171,     0,     0,     0,     0,     0,
     153,   111,     0,   112,     0,     0,     0,   107,   108,   109,
     110,   105,   106,     0,   174,     0,     0,     0,     0,     0,
     111,     0,   112,   107,   108,   109,   110,   105,   106,     0,
     175,     0,     0,     0,     0,     0,   111,     0,   112,     0,
       0,     0,   107,   108,   109,   110,   105,   106,     0,   176,
       0,     0,     0,   105,   106,   111,     0,   112,   107,   108,
     109,   110,     0,     0,   177,     0,     0,     0,     0,   105,
     106,   111,     0,   112,     0,     0,     0,   107,   108,   109,
     110,     0,     0,   181,   107,   108,   109,   110,   105,   106,
     111,   182,   112,     0,     0,     0,     0,   111,     0,   112,
     107,   108,   109,   110,   105,   106,   183,     0,     0,     0,
       0,     0,     0,   111,     0,   112,     0,     0,     0,   107,
     108,   109,   110,   105,   106,   185,     0,     0,     0,     0,
       0,     0,   111,     0,   112,   107,   108,   109,   110,   105,
     106,   186,     0,     0,     0,     0,     0,     0,   111,     0,
     112,     0,     0,     0,   107,   108,   109,   110,   105,   106,
     187,     0,     0,     0,     0,     0,     0,   111,     0,   112,
     107,   108,   109,   110,   105,   106,   188,     0,     0,     0,
       0,     0,     0,   111,     0,   112,     0,     0,     0,   107,
     108,   109,   110,   105,   106,   189,     0,     0,     0,     0,
       0,     0,   111,     0,   112,   107,   108,   109,   110,   105,
     106,   190,     0,     0,     0,     0,     0,     0,   111,     0,
     112,     0,     0,     0,   107,   108,   109,   110,   105,   106,
     191,     0,     0,     0,     0,   105,   106,   111,     0,   112,
     107,   108,   109,   110,   105,   106,   192,     0,     0,     0,
       0,     0,     0,   111,     0,   112,     0,     0,     0,   107,
     108,   109,   110,   105,   106,   193,   107,   108,   109,   110,
       0,     0,   111,   194,   112,   107,   108,   109,   110,   111,
       0,   112,   195,   105,   106,     0,     0,     0,   111,     0,
     112,   105,   106,     0,   107,   108,   109,   110,     0,   105,
     106,   196,     0,     0,     0,     0,     0,   111,     0,   112,
       0,     0,     0,     0,   107,   108,   109,   110,   105,   106,
       0,   237,   107,   108,   109,   110,     0,   111,   240,   112,
     107,   108,   109,   110,     0,   111,   241,   112,   105,   106,
       0,     0,     0,   111,     0,   112,   105,   106,     0,   107,
     108,   109,   110,     0,     0,   242,     0,     0,     0,     0,
       0,     0,   111,     0,   112,   105,   106,     0,     0,   107,
     108,   109,   110,   105,   106,   244,     0,   107,   108,   109,
     110,     0,   111,   246,   112,     0,     0,     0,     0,     0,
     111,     0,   112,   105,   106,     0,   107,   108,   109,   110,
     105,   106,   247,     0,   107,   108,   109,   110,     0,   111,
     248,   112,     0,     0,     0,     0,     0,   111,     0,   112,
       0,     0,     0,     0,   107,   108,   109,   110,     0,     0,
     276,   107,   108,   109,   110,     0,     0,   111,     3,   112,
       0,     6,    72,     8,   111,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,    17,    18,
       0,     0,    21,     0,    22,     0,     0,    25,    26,    27,
      28,     0,     0,    31,    32,    33,     0,     0,     0,    36,
      37,    38,    39
};

static const yytype_int16 yycheck[] =
{
      14,     1,    74,    69,   147,    17,   128,    11,    74,   104,
      51,    52,    53,    54,    56,    52,    28,    56,    59,     7,
      34,    57,    58,    64,    51,    52,    53,    54,     4,     5,
      56,    68,    56,     9,    10,     3,    56,    64,     6,     7,
       8,   107,   108,   109,   110,   111,    56,    56,    58,    59,
      58,    59,    58,    59,    56,    69,    70,    71,    57,    58,
      74,    75,    76,    77,    78,   102,    80,    81,    82,    57,
      84,    85,    86,    87,    88,    89,    90,    56,    92,    93,
      94,    95,    96,    13,    14,   207,    56,    65,   231,     3,
     104,    56,     6,     7,     8,    56,    56,   219,   164,   165,
     166,   167,   168,   169,    56,    56,    56,   202,    22,    23,
      24,    56,    56,    27,    56,    29,    56,    56,    32,    33,
      34,    35,   122,    56,    38,    39,    40,    56,    56,    56,
      44,    45,    46,    47,    11,    49,    50,     7,    19,    20,
      21,    58,    62,    58,    60,    56,    60,     7,     7,    57,
       3,   223,    57,   275,    57,    18,   170,   223,   253,    11,
     174,   175,   176,   285,     3,    56,    20,    21,   182,    56,
      51,    52,    53,    54,    11,    63,   298,    19,    56,    65,
     194,   195,   196,    64,    58,    66,    20,    21,   202,    65,
      61,     7,    57,    57,    19,     3,    58,    51,    52,    53,
      54,    19,   274,     3,    61,    59,    60,    61,   274,   223,
      64,    57,    66,    67,    68,    60,    60,    51,    52,    53,
      54,    61,    60,   237,    58,    60,    56,    60,    57,    65,
      64,    11,    66,    11,    11,    11,    11,    65,   238,   253,
       0,    58,    57,     3,     4,     5,     6,     7,     8,     9,
      10,    58,    12,    58,    58,    15,    16,    17,    18,    58,
     274,     3,    22,    23,    24,    25,    26,    27,     3,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,     3,    44,    45,    46,    47,    48,     3,
       4,     5,     6,     7,     8,     9,    10,     3,    12,     3,
      60,    15,    16,    17,    18,    61,    65,    61,    22,    23,
      24,    25,    26,    27,    61,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    61,
      44,    45,    46,    47,    48,    61,   231,    52,   102,    52,
     304,    55,   304,    -1,    -1,   172,    60,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    -1,    -1,    15,
      16,    17,    18,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    47,    48,     3,    -1,    -1,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    20,    21,    -1,
      -1,    -1,    22,    23,    24,    -1,    -1,    27,    -1,    29,
      -1,    -1,    32,    33,    34,    35,    20,    21,    38,    39,
      40,    -1,    -1,    -1,    44,    45,    46,    47,    51,    52,
      53,    54,    20,    21,    57,    -1,    -1,    -1,    -1,    -1,
      60,    64,    -1,    66,    -1,    -1,    -1,    51,    52,    53,
      54,    20,    21,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    66,    51,    52,    53,    54,    20,    21,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    64,    -1,    66,    -1,
      -1,    -1,    51,    52,    53,    54,    20,    21,    -1,    58,
      -1,    -1,    -1,    20,    21,    64,    -1,    66,    51,    52,
      53,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    20,
      21,    64,    -1,    66,    -1,    -1,    -1,    51,    52,    53,
      54,    -1,    -1,    57,    51,    52,    53,    54,    20,    21,
      64,    58,    66,    -1,    -1,    -1,    -1,    64,    -1,    66,
      51,    52,    53,    54,    20,    21,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    66,    -1,    -1,    -1,    51,
      52,    53,    54,    20,    21,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    66,    51,    52,    53,    54,    20,
      21,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      66,    -1,    -1,    -1,    51,    52,    53,    54,    20,    21,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    66,
      51,    52,    53,    54,    20,    21,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    66,    -1,    -1,    -1,    51,
      52,    53,    54,    20,    21,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    66,    51,    52,    53,    54,    20,
      21,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      66,    -1,    -1,    -1,    51,    52,    53,    54,    20,    21,
      57,    -1,    -1,    -1,    -1,    20,    21,    64,    -1,    66,
      51,    52,    53,    54,    20,    21,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    66,    -1,    -1,    -1,    51,
      52,    53,    54,    20,    21,    57,    51,    52,    53,    54,
      -1,    -1,    64,    58,    66,    51,    52,    53,    54,    64,
      -1,    66,    58,    20,    21,    -1,    -1,    -1,    64,    -1,
      66,    20,    21,    -1,    51,    52,    53,    54,    -1,    20,
      21,    58,    -1,    -1,    -1,    -1,    -1,    64,    -1,    66,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    20,    21,
      -1,    58,    51,    52,    53,    54,    -1,    64,    57,    66,
      51,    52,    53,    54,    -1,    64,    57,    66,    20,    21,
      -1,    -1,    -1,    64,    -1,    66,    20,    21,    -1,    51,
      52,    53,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    66,    20,    21,    -1,    -1,    51,
      52,    53,    54,    20,    21,    57,    -1,    51,    52,    53,
      54,    -1,    64,    57,    66,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    66,    20,    21,    -1,    51,    52,    53,    54,
      20,    21,    57,    -1,    51,    52,    53,    54,    -1,    64,
      57,    66,    -1,    -1,    -1,    -1,    -1,    64,    -1,    66,
      -1,    -1,    -1,    -1,    51,    52,    53,    54,    -1,    -1,
      57,    51,    52,    53,    54,    -1,    -1,    64,     3,    66,
      -1,     6,     7,     8,    64,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      -1,    -1,    27,    -1,    29,    -1,    -1,    32,    33,    34,
      35,    -1,    -1,    38,    39,    40,    -1,    -1,    -1,    44,
      45,    46,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    70,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    12,    15,    16,    17,    18,    22,    23,    24,    25,
      26,    27,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    44,    45,    46,    47,
      48,    60,    71,    73,    74,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    93,
      94,    95,    97,    98,    99,   101,   102,    11,    56,    56,
      56,    56,     7,   101,    56,    56,    56,    56,    56,    65,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,   101,    56,    56,    56,    56,    56,    11,     7,    78,
      85,    87,    58,    58,    59,    20,    21,    51,    52,    53,
      54,    64,    66,    62,     7,    57,    87,   100,   101,   102,
     101,   101,    19,   100,   101,   101,   101,   101,    71,    72,
     101,   101,   101,    60,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,    58,    56,    86,    87,
       7,    49,    50,    60,    82,   101,   102,   102,   102,   102,
     102,     3,    57,    57,    59,    60,    61,    66,    67,    68,
      58,    57,    71,    57,    58,    58,    58,    57,    55,    72,
      18,    57,    58,    57,    11,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    58,    58,    58,     3,     4,    75,
      76,    84,    59,    56,    56,    11,    63,    65,   102,   102,
     102,   102,   102,   102,   101,    19,    28,    95,    96,    65,
     101,   101,   101,    56,   101,    58,   101,   101,   101,    61,
      57,    58,     7,    57,    57,    58,    72,    58,    19,    72,
      57,    57,    57,   100,    57,     3,    57,    57,    57,    51,
      52,    53,    54,    59,    64,    19,    76,     3,    13,    14,
      91,    92,   101,    71,    57,    61,    60,    60,    60,    60,
      82,   101,    60,    61,    56,    65,    57,    57,    11,    11,
      11,    11,    11,   100,    72,    65,    58,    58,    58,    58,
      58,    57,    72,     3,     3,     3,     3,     3,    65,    61,
      61,    61,    61,    61,    72,    91,    92
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
        case 24:

/* Line 1455 of yacc.c  */
#line 85 "1707005.y"
    {(yyval.variable).ival=(yyvsp[(1) - (2)].variable).ival;;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 89 "1707005.y"
    {printf("Header Detected.\n");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 93 "1707005.y"
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

  case 30:

/* Line 1455 of yacc.c  */
#line 112 "1707005.y"
    {;;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 121 "1707005.y"
    {
        int a;
        scanf("%d",&a);
        symbol_table[(yyvsp[(1) - (5)].variable).ival].val = a;
    ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 126 "1707005.y"
    {
        float a;
        scanf("%f",&a);
        symbol_table[(yyvsp[(1) - (5)].variable).ival].vall = a;
    ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 133 "1707005.y"
    {
        printf("%d\n",(yyvsp[(3) - (4)].variable).ival);
    ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 136 "1707005.y"
    {
        printf("%f\n",(yyvsp[(3) - (4)].variable).fval);
    ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 139 "1707005.y"
    {
        printf("%s ",(yyvsp[(3) - (4)].variable).st);
    ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 142 "1707005.y"
    {int a = find_array_value(&(yyvsp[(4) - (8)].variable).str,(yyvsp[(6) - (8)].variable).ival); printf("%d\n",a);;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 143 "1707005.y"
    {printf("\n");;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 146 "1707005.y"
    {
        char a[100];
        strcpy(a,(yyvsp[(2) - (5)].variable).str);
        int i=0;
        while(1)
        {
            if(a[i]=='[')
            {
                break;
            }
            i++;
        }
        a[i]='\0';
        strcpy(list[array_counter].array_name,a);
        list[array_counter].limit=(yyvsp[(4) - (5)].variable).ival;
        array_counter++;
        //printf("%s %d\n",list[array_counter-1].array_name,list[array_counter-1].limit);
        //printf("%s %d\n",a,$4.ival);
        ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 168 "1707005.y"
    {int i = add_array_value(&(yyvsp[(2) - (7)].variable).str,(yyvsp[(4) - (7)].variable).ival); list[i].arr[(yyvsp[(4) - (7)].variable).ival]=(yyvsp[(7) - (7)].variable).ival;;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 169 "1707005.y"
    {int i = add_array_value(&(yyvsp[(2) - (7)].variable).str,(yyvsp[(4) - (7)].variable).ival); list[i].arr[(yyvsp[(4) - (7)].variable).ival]=(yyvsp[(7) - (7)].variable).ival;;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 173 "1707005.y"
    {int a = find_array_value(&(yyvsp[(2) - (11)].variable).str,(yyvsp[(4) - (11)].variable).ival),b = find_array_value(&(yyvsp[(8) - (11)].variable).str,(yyvsp[(10) - (11)].variable).ival); (yyval.variable).ival = a+b;;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 174 "1707005.y"
    {int a = find_array_value(&(yyvsp[(2) - (11)].variable).str,(yyvsp[(4) - (11)].variable).ival),b = find_array_value(&(yyvsp[(8) - (11)].variable).str,(yyvsp[(10) - (11)].variable).ival); (yyval.variable).ival = a-b;;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 175 "1707005.y"
    {int a = find_array_value(&(yyvsp[(2) - (11)].variable).str,(yyvsp[(4) - (11)].variable).ival),b = find_array_value(&(yyvsp[(8) - (11)].variable).str,(yyvsp[(10) - (11)].variable).ival); (yyval.variable).ival = a*b;;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 176 "1707005.y"
    {int a = find_array_value(&(yyvsp[(2) - (11)].variable).str,(yyvsp[(4) - (11)].variable).ival),b = find_array_value(&(yyvsp[(8) - (11)].variable).str,(yyvsp[(10) - (11)].variable).ival); (yyval.variable).ival = a/b;;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 177 "1707005.y"
    {int a = find_array_value(&(yyvsp[(2) - (11)].variable).str,(yyvsp[(4) - (11)].variable).ival),b = find_array_value(&(yyvsp[(8) - (11)].variable).str,(yyvsp[(10) - (11)].variable).ival); (yyval.variable).ival = a%b;;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 197 "1707005.y"
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

  case 58:

/* Line 1455 of yacc.c  */
#line 221 "1707005.y"
    {symbol_table[(yyvsp[(1) - (3)].variable).ival].val=(yyvsp[(3) - (3)].variable).ival;;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 226 "1707005.y"
    {(yyval.variable).ival = add_value(&(yyvsp[(1) - (1)].variable).str);;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 230 "1707005.y"
    {printf("This is a comment.\n");;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 234 "1707005.y"
    {printf("Return statement found.\n\n");;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 238 "1707005.y"
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

  case 64:

/* Line 1455 of yacc.c  */
#line 249 "1707005.y"
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

  case 65:

/* Line 1455 of yacc.c  */
#line 261 "1707005.y"
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

  case 66:

/* Line 1455 of yacc.c  */
#line 276 "1707005.y"
    {
                                if((yyvsp[(3) - (7)].variable).ival)
                                {
                                     iff=1;
                                     printf("Else if statement will be executed.\n");
                                }
                        
    ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 284 "1707005.y"
    {
                                if((yyvsp[(3) - (7)].variable).ival)
                                {
                                     iff=1;
                                     printf("The last else if statement will be executed.\n");
                                }
    ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 294 "1707005.y"
    {
                        ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 300 "1707005.y"
    {
        sw = (yyvsp[(3) - (5)].variable).ival;
        printf("This is a switch statement.\n");
    ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 308 "1707005.y"
    {
        if(sw!=INT_MIN)
        {
            printf("%d\n",dv);
        }
    ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 317 "1707005.y"
    {
        if(sw==(yyvsp[(2) - (5)].variable).ival)
        {
            printf("%d\n",(yyvsp[(2) - (5)].variable).ival);
            sw = INT_MIN;
        }

    ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 325 "1707005.y"
    {
        
        if(sw==(yyvsp[(2) - (5)].variable).ival)
        {
            printf("%d\n",(yyvsp[(2) - (5)].variable).ival);
            sw = INT_MIN;
        }
    ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 335 "1707005.y"
    {
       dv = (yyvsp[(3) - (3)].variable).ival;
    ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 341 "1707005.y"
    {
                    for(int i=(yyvsp[(3) - (10)].variable).ival;i<(yyvsp[(5) - (10)].variable).ival;i=i+(yyvsp[(7) - (10)].variable).ival)
                    {
                        printf("This is a for loop.\n");
                    }
    ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 349 "1707005.y"
    {
        if((yyvsp[(3) - (6)].variable).ival)
        {
            printf("This is a while loop\n");
        }
    ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 357 "1707005.y"
    {
        printf("This is a do-while loop\n");
    ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 363 "1707005.y"
    {(yyval.variable).ival=(yyvsp[(1) - (1)].variable).ival;(yyval.variable).fval=(yyvsp[(1) - (1)].variable).fval;;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 364 "1707005.y"
    {if((yyvsp[(1) - (3)].variable).ival==INT_MIN){(yyval.variable).ival = (yyvsp[(1) - (3)].variable).fval > (yyvsp[(3) - (3)].variable).fval;}else{(yyval.variable).ival = (yyvsp[(1) - (3)].variable).ival > (yyvsp[(3) - (3)].variable).ival;};}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 365 "1707005.y"
    {if((yyvsp[(1) - (3)].variable).ival==INT_MIN){(yyval.variable).ival = (yyvsp[(1) - (3)].variable).fval < (yyvsp[(3) - (3)].variable).fval;}else{(yyval.variable).ival = (yyvsp[(1) - (3)].variable).ival < (yyvsp[(3) - (3)].variable).ival;};}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 366 "1707005.y"
    {if((yyvsp[(1) - (3)].variable).ival==INT_MIN){(yyval.variable).ival = (yyvsp[(1) - (3)].variable).fval == (yyvsp[(3) - (3)].variable).fval;}else{(yyval.variable).ival = (yyvsp[(1) - (3)].variable).ival == (yyvsp[(3) - (3)].variable).ival;};}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 367 "1707005.y"
    {if((yyvsp[(1) - (3)].variable).ival==INT_MIN){(yyval.variable).ival = (yyvsp[(1) - (3)].variable).fval != (yyvsp[(3) - (3)].variable).fval;}else{(yyval.variable).ival = (yyvsp[(1) - (3)].variable).ival != (yyvsp[(3) - (3)].variable).ival;};}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 368 "1707005.y"
    {if((yyvsp[(1) - (3)].variable).ival==INT_MIN){(yyval.variable).ival = (yyvsp[(1) - (3)].variable).fval >= (yyvsp[(3) - (3)].variable).fval;}else{(yyval.variable).ival = (yyvsp[(1) - (3)].variable).ival >= (yyvsp[(3) - (3)].variable).ival;};}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 369 "1707005.y"
    {if((yyvsp[(1) - (3)].variable).ival==INT_MIN){(yyval.variable).ival = (yyvsp[(1) - (3)].variable).fval <= (yyvsp[(3) - (3)].variable).fval;}else{(yyval.variable).ival = (yyvsp[(1) - (3)].variable).ival <= (yyvsp[(3) - (3)].variable).ival;};}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 372 "1707005.y"
    {(yyval.variable).ival=(yyvsp[(1) - (1)].variable).ival;(yyval.variable).fval=(yyvsp[(1) - (1)].variable).fval;if((yyvsp[(1) - (1)].variable).st!=NULL){strcpy((yyval.variable).st,(yyvsp[(1) - (1)].variable).st);};}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 373 "1707005.y"
    {int a=strlen((yyvsp[(3) - (4)].variable).st);printf("Lenght of string: %d\n",a);(yyval.variable).ival=a;;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 374 "1707005.y"
    {store n = find_value(&(yyvsp[(3) - (6)].variable).str),m=find_value(&(yyvsp[(5) - (6)].variable).str);int a = strcmp(n.vas,m.vas); 
                            a=0?printf("Strings match.\n"):printf("Strings do not match\n");;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 376 "1707005.y"
    {int i = add_value(&(yyvsp[(3) - (6)].variable).str),j = add_value(&(yyvsp[(5) - (6)].variable).str);strcat(symbol_table[i].vas,symbol_table[j].vas);;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 377 "1707005.y"
    {int i = add_value(&(yyvsp[(3) - (6)].variable).str),j = add_value(&(yyvsp[(5) - (6)].variable).str);strcpy(symbol_table[i].vas,symbol_table[j].vas);;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 378 "1707005.y"
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

  case 90:

/* Line 1455 of yacc.c  */
#line 387 "1707005.y"
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

  case 91:

/* Line 1455 of yacc.c  */
#line 416 "1707005.y"
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

  case 92:

/* Line 1455 of yacc.c  */
#line 427 "1707005.y"
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

  case 93:

/* Line 1455 of yacc.c  */
#line 438 "1707005.y"
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

  case 94:

/* Line 1455 of yacc.c  */
#line 457 "1707005.y"
    {double x = (double)(yyvsp[(3) - (4)].variable).fval,ans = sin((x*3.1416)/180.0);printf("%f\n",(yyval.variable).fval=(float)ans);;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 458 "1707005.y"
    {double x = (double)(yyvsp[(3) - (4)].variable).fval,ans = cos((x*3.1416)/180.0); printf("%f\n",(yyval.variable).fval=(float)ans); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 459 "1707005.y"
    {double x = (double)(yyvsp[(3) - (4)].variable).fval,ans = tan((x*3.1416)/180.0); printf("%f\n",(yyval.variable).fval=(float)ans); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 460 "1707005.y"
    {double x = (double)(yyvsp[(3) - (6)].variable).fval,y = (double)(yyvsp[(5) - (6)].variable).fval;printf("%f\n",(yyval.variable).fval=(float)pow(x,y));;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 461 "1707005.y"
    {float x = (yyvsp[(3) - (4)].variable).fval,ans = log(x);printf("%f\n",(yyval.variable).fval=ans);;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 462 "1707005.y"
    {(yyval.variable).ival=abs((yyvsp[(3) - (4)].variable).ival);printf("%d\n",(yyval.variable).ival);;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 463 "1707005.y"
    {(yyval.variable).ival=(int)(yyvsp[(3) - (4)].variable).fval;printf("%d\n",(yyval.variable).ival);;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 464 "1707005.y"
    {(yyval.variable).ival=(int)(yyvsp[(3) - (4)].variable).fval+1;printf("%d\n",(yyval.variable).ival);;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 465 "1707005.y"
    {if((yyvsp[(1) - (3)].variable).fval!=FLT_MIN){(yyval.variable).fval=(yyvsp[(1) - (3)].variable).fval+(yyvsp[(3) - (3)].variable).fval;}else{(yyval.variable).ival=(yyvsp[(1) - (3)].variable).ival+(yyvsp[(3) - (3)].variable).ival;};}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 466 "1707005.y"
    {if((yyvsp[(1) - (3)].variable).fval!=FLT_MIN){(yyval.variable).fval=(yyvsp[(1) - (3)].variable).fval-(yyvsp[(3) - (3)].variable).fval;}else{(yyval.variable).ival=(yyvsp[(1) - (3)].variable).ival-(yyvsp[(3) - (3)].variable).ival;};}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 467 "1707005.y"
    {if((yyvsp[(1) - (3)].variable).fval!=FLT_MIN){(yyval.variable).fval=(yyvsp[(1) - (3)].variable).fval*(yyvsp[(3) - (3)].variable).fval;}else{(yyval.variable).ival=(yyvsp[(1) - (3)].variable).ival*(yyvsp[(3) - (3)].variable).ival;};}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 468 "1707005.y"
    {if((yyvsp[(1) - (3)].variable).fval!=FLT_MIN){if((yyvsp[(3) - (3)].variable).fval!=0.0){(yyval.variable).fval=(yyvsp[(1) - (3)].variable).fval/(yyvsp[(3) - (3)].variable).fval;}}else{if((yyvsp[(3) - (3)].variable).ival!=0){(yyval.variable).ival=(yyvsp[(1) - (3)].variable).ival/(yyvsp[(3) - (3)].variable).ival;}};}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 469 "1707005.y"
    {(yyval.variable).ival = (yyvsp[(1) - (3)].variable).ival % (yyvsp[(3) - (3)].variable).ival;;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 470 "1707005.y"
    {(yyval.variable).ival = (yyvsp[(1) - (2)].variable).ival + 1; int i = add_value(&(yyvsp[(1) - (2)].variable).str);symbol_table[i].val++;;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 471 "1707005.y"
    {(yyval.variable).ival = (yyvsp[(1) - (2)].variable).ival - 1; int i = add_value(&(yyvsp[(1) - (2)].variable).str);symbol_table[i].val--;;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 474 "1707005.y"
    {(yyval.variable).ival=(yyvsp[(1) - (1)].variable).ival; (yyval.variable).fval=FLT_MIN;(yyval.variable).st=NULL;;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 475 "1707005.y"
    {(yyval.variable).fval = (yyvsp[(1) - (1)].variable).fval; (yyval.variable).ival=INT_MIN;(yyval.variable).st=NULL;;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 476 "1707005.y"
    {(yyval.variable).ival=INT_MIN;(yyval.variable).fval=FLT_MIN;strcpy((yyval.variable).st,(yyvsp[(1) - (1)].variable).st);;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 477 "1707005.y"
    {store pp = find_value(&(yyvsp[(1) - (1)].variable).str);if(pp.val==INT_MAX && pp.vall==FLT_MAX){(yyval.variable).ival=INT_MIN;(yyval.variable).fval=FLT_MIN;strcpy((yyval.variable).st,pp.vas);}
    else if(pp.val==INT_MAX && pp.vall!=FLT_MAX){(yyval.variable).fval=pp.vall;(yyval.variable).ival=INT_MIN;}
                                       else{(yyval.variable).ival=pp.val;(yyval.variable).fval=FLT_MIN;};}
    break;



/* Line 1455 of yacc.c  */
#line 2534 "1707005.tab.c"
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
#line 481 "1707005.y"


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

int find_array_value(char **sym,int j)
{
    char a[100];
    int l=strlen(*sym);
    strcpy(a,*sym);
    int i=0;
    //printf("%s \n",a);
    while(1)
    {
        if(a[i]==',')
        {
            break;
        }
        i++;
    }
    a[i]='\0';
	int p = 0;
	for(int i=0;i<count;i++)
	{
		if(!strcmp(a,list[i].array_name))
		{
            return list[i].arr[j];
		}
	}
    printf("Array not declared\n");
	return -1;
}
int add_array_value(char **sym,int j)
{
        char a[100];
        strcpy(a,*sym);
        int i=0;
        while(1)
        {
            if(a[i]==',')
            {
                break;
            }
            i++;
        }
        a[i]='\0';
        int p=0;
        for(int i=0;i<array_counter;i++)
        {
            if(!strcmp(a,list[i].array_name)){
                if(j<list[i].limit)
                {
                    //list[i].arr[$4.ival]=$7.ival;
                    p=1;
                    return i;
                }
                else{
                    printf("Program is trying to access invalid memory location.\n");
                }
           
            }
        }
        if(!p)
        {
            printf("Invalid Statement.\n");
        }
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
