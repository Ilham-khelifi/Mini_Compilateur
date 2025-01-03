
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
#line 1 "syntaxique.y"
  
int nb_ligne=1;
char sauvType[30];
char sauvOpr[20];
int sauvConstInt;
float sauvConstReal;
int NbrIdf =0;
typedef struct
	{
		char signFromatage;
		char idfs[20]; 
 
	} compatibilite;

compatibilite tableau [20];


/* Line 189 of yacc.c  */
#line 91 "syntaxique.tab.c"

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
     mc_pgm = 258,
     mc_int = 259,
     mc_float = 260,
     mc_string = 261,
     mc_const = 262,
     mc_for = 263,
     mc_begin = 264,
     mc_end = 265,
     mc_in = 266,
     mc_out = 267,
     idf = 268,
     cst_int = 269,
     cst_float = 270,
     cst_string = 271,
     cr_ouv = 272,
     cr_ferm = 273,
     vg = 274,
     pvg = 275,
     acc_ouv = 276,
     acc_ferm = 277,
     par_ouv = 278,
     par_ferm = 279,
     aff = 280,
     plus2 = 281,
     incr = 282,
     Infer = 283,
     moins = 284,
     mult = 285,
     div2 = 286,
     InferEgal = 287
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 18 "syntaxique.y"

int entier;
float flt;	
char character;
char* string;



/* Line 214 of yacc.c  */
#line 168 "syntaxique.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 180 "syntaxique.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   138

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNRULES -- Number of states.  */
#define YYNSTATES  142

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    12,    13,    15,    17,    22,    26,
      28,    30,    32,    36,    38,    45,    50,    56,    62,    68,
      72,    76,    80,    83,    84,    86,    88,    90,    92,    93,
     105,   109,   113,   117,   120,   125,   130,   138,   146,   154,
     162,   166,   170,   176,   178,   180,   182,   184,   186,   188,
     193,   198,   200,   202,   210,   212,   217,   222,   224,   226,
     234,   238,   240,   245,   250,   257,   264
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      34,     0,    -1,     3,    13,    21,    35,    22,    -1,    36,
      35,    -1,    -1,    37,    -1,    41,    -1,    38,     7,    40,
      20,    -1,    38,    39,    20,    -1,     4,    -1,     5,    -1,
       6,    -1,    13,    19,    39,    -1,    13,    -1,    13,    17,
      14,    18,    19,    39,    -1,    13,    17,    14,    18,    -1,
      13,    25,    14,    19,    40,    -1,    13,    25,    16,    19,
      40,    -1,    13,    25,    15,    19,    40,    -1,    13,    25,
      14,    -1,    13,    25,    16,    -1,    13,    25,    15,    -1,
      42,    41,    -1,    -1,    43,    -1,    47,    -1,    51,    -1,
      53,    -1,    -1,     8,    23,    44,    20,    45,    20,    46,
      24,     9,    41,    10,    -1,    13,    25,    14,    -1,    13,
      28,    14,    -1,    13,    32,    14,    -1,    13,    27,    -1,
      13,    25,    16,    20,    -1,    13,    25,    48,    20,    -1,
      13,    17,    13,    18,    25,    16,    20,    -1,    13,    17,
      13,    18,    25,    48,    20,    -1,    13,    17,    14,    18,
      25,    48,    20,    -1,    13,    17,    14,    18,    25,    16,
      20,    -1,    13,    25,    13,    -1,    50,    49,    50,    -1,
      50,    49,    50,    49,    48,    -1,    50,    -1,    26,    -1,
      29,    -1,    31,    -1,    30,    -1,    13,    -1,    13,    17,
      14,    18,    -1,    13,    17,    13,    18,    -1,    14,    -1,
      15,    -1,    11,    23,    16,    19,    52,    24,    20,    -1,
      13,    -1,    13,    17,    13,    18,    -1,    13,    17,    14,
      18,    -1,    54,    -1,    56,    -1,    12,    23,    16,    19,
      55,    24,    20,    -1,    13,    19,    55,    -1,    13,    -1,
      13,    17,    13,    18,    -1,    13,    17,    14,    18,    -1,
      13,    17,    13,    18,    19,    55,    -1,    13,    17,    14,
      18,    19,    55,    -1,    12,    23,    16,    24,    20,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    28,    28,    36,    37,    39,    40,    44,    45,    48,
      49,    50,    54,    62,    70,    76,    84,    88,    92,    96,
     102,   108,   115,   116,   118,   119,   120,   121,   122,   125,
     128,   131,   132,   135,   138,   144,   151,   161,   171,   180,
     188,   199,   207,   213,   216,   220,   224,   228,   233,   237,
     243,   250,   254,   261,   277,   282,   289,   297,   298,   300,
     316,   321,   326,   333,   339,   346,   353
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_pgm", "mc_int", "mc_float",
  "mc_string", "mc_const", "mc_for", "mc_begin", "mc_end", "mc_in",
  "mc_out", "idf", "cst_int", "cst_float", "cst_string", "cr_ouv",
  "cr_ferm", "vg", "pvg", "acc_ouv", "acc_ferm", "par_ouv", "par_ferm",
  "aff", "plus2", "incr", "Infer", "moins", "mult", "div2", "InferEgal",
  "$accept", "S", "Corps", "Inst_Dec", "Dec", "TYPE", "Liste_idfs",
  "Liste_idf_cst", "List_inst", "Inst", "InstFor", "Init", "Cond", "Incr",
  "InstAff", "InstArith", "OPERATEUR", "OPERANDE", "Lecture",
  "idf_lecture", "Inst_ecriture", "EcritureFormat", "idf_ecriture",
  "Ecriture", 0
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
     285,   286,   287
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    33,    34,    35,    35,    36,    36,    37,    37,    38,
      38,    38,    39,    39,    39,    39,    40,    40,    40,    40,
      40,    40,    41,    41,    42,    42,    42,    42,    42,    43,
      44,    45,    45,    46,    47,    47,    47,    47,    47,    47,
      47,    48,    48,    48,    49,    49,    49,    49,    50,    50,
      50,    50,    50,    51,    52,    52,    52,    53,    53,    54,
      55,    55,    55,    55,    55,    55,    56
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     2,     0,     1,     1,     4,     3,     1,
       1,     1,     3,     1,     6,     4,     5,     5,     5,     3,
       3,     3,     2,     0,     1,     1,     1,     1,     0,    11,
       3,     3,     3,     2,     4,     4,     7,     7,     7,     7,
       3,     3,     5,     1,     1,     1,     1,     1,     1,     4,
       4,     1,     1,     7,     1,     4,     4,     1,     1,     7,
       3,     1,     4,     4,     6,     6,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     4,     9,    10,    11,     0,
       0,     0,     0,     0,     4,     5,     0,     6,    23,    24,
      25,    26,    27,    57,    58,     0,     0,     0,     0,     0,
       2,     3,     0,    13,     0,    22,     0,     0,     0,     0,
       0,     0,    40,    51,    52,     0,     0,    43,     0,     0,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    35,    44,    45,    47,    46,     0,     0,     7,
       0,    12,    30,     0,     0,    54,     0,    61,     0,    66,
       0,     0,     0,     0,    48,    41,    19,    21,    20,    15,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,    49,     0,     0,     0,     0,     0,    31,
      32,     0,     0,     0,     0,    53,     0,     0,    60,    59,
      36,    37,    39,    38,    42,    16,    18,    17,    14,    33,
       0,    55,    56,    62,    63,    23,     0,     0,     0,    64,
      65,    29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    13,    14,    15,    16,    34,    49,    17,    18,
      19,    37,    74,   112,    20,    46,    67,    47,    21,    76,
      22,    23,    78,    24
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -95
static const yytype_int8 yypact[] =
{
      63,    -3,    20,    53,   -95,    17,   -95,   -95,   -95,    52,
      54,    56,   -10,    58,    17,   -95,    -1,   -95,    23,   -95,
     -95,   -95,   -95,   -95,   -95,    65,    60,    66,    19,    24,
     -95,   -95,    68,     7,    64,   -95,    61,    67,    69,    -8,
      71,    72,   -12,   -95,   -95,    73,    74,    15,    70,    76,
      77,    79,   -95,    83,    85,    86,    87,    81,    78,    80,
      55,   -95,   -95,   -95,   -95,   -95,   -95,    42,    45,   -95,
      84,   -95,   -95,   -19,    88,    89,    90,    48,    91,   -95,
      34,    38,    92,    93,    95,    15,    94,    97,    99,   100,
     106,   107,    96,    57,   102,    59,    87,   103,   104,   105,
     108,   109,   -95,   -95,    42,    68,    68,    68,    79,   -95,
     -95,   110,   111,   112,   113,   -95,   114,   115,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
      98,   -95,   -95,   117,   119,    23,    87,    87,    75,   -95,
     -95,   -95
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -95,   -95,   120,   -95,   -95,   -95,   -50,   -43,   -18,   -95,
     -95,   -95,   -95,   -95,   -95,   -77,    -2,    37,   -95,   -95,
     -95,   -95,   -94,   -95
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -49
static const yytype_int16 yytable[] =
{
      35,    71,   118,    99,   101,    60,    32,    28,   -48,    90,
       3,    56,    33,    91,   -48,    29,    57,   -48,   -48,   -48,
       4,     6,     7,     8,    50,     9,    51,   124,    10,    11,
      12,     9,    40,    41,    10,    11,    12,    42,    43,    44,
      45,    63,   139,   140,    64,    65,    66,    84,    43,    44,
      98,    84,    43,    44,   100,    84,    43,    44,   128,    86,
      87,    88,   125,   126,   127,    95,     1,    96,    82,    83,
     113,   114,   116,   117,     5,    25,    38,    26,    36,    27,
      30,    48,    39,   104,    52,   141,    53,    54,    55,    58,
      59,    70,    33,    61,    62,    68,    69,    72,    73,    75,
      77,    79,    89,    80,    85,    81,    93,   135,    92,   111,
     102,   103,    60,   105,    94,    97,   106,   138,   107,   108,
     109,   110,   115,   119,   120,   121,     0,     0,   122,   123,
     131,   132,   133,   134,    31,   130,   136,   129,   137
};

static const yytype_int16 yycheck[] =
{
      18,    51,    96,    80,    81,    17,     7,    17,    20,    28,
      13,    19,    13,    32,    26,    25,    24,    29,    30,    31,
       0,     4,     5,     6,    17,     8,    19,   104,    11,    12,
      13,     8,    13,    14,    11,    12,    13,    13,    14,    15,
      16,    26,   136,   137,    29,    30,    31,    13,    14,    15,
      16,    13,    14,    15,    16,    13,    14,    15,   108,    14,
      15,    16,   105,   106,   107,    17,     3,    19,    13,    14,
      13,    14,    13,    14,    21,    23,    16,    23,    13,    23,
      22,    13,    16,    85,    20,    10,    25,    20,    19,    18,
      18,    14,    13,    20,    20,    25,    20,    14,    13,    13,
      13,    20,    18,    25,    67,    25,    17,     9,    20,    13,
      18,    18,    17,    19,    24,    24,    19,   135,    19,    19,
      14,    14,    20,    20,    20,    20,    -1,    -1,    20,    20,
      18,    18,    18,    18,    14,    24,    19,    27,    19
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    34,    13,     0,    21,     4,     5,     6,     8,
      11,    12,    13,    35,    36,    37,    38,    41,    42,    43,
      47,    51,    53,    54,    56,    23,    23,    23,    17,    25,
      22,    35,     7,    13,    39,    41,    13,    44,    16,    16,
      13,    14,    13,    14,    15,    16,    48,    50,    13,    40,
      17,    19,    20,    25,    20,    19,    19,    24,    18,    18,
      17,    20,    20,    26,    29,    30,    31,    49,    25,    20,
      14,    39,    14,    13,    45,    13,    52,    13,    55,    20,
      25,    25,    13,    14,    13,    50,    14,    15,    16,    18,
      28,    32,    20,    17,    24,    17,    19,    24,    16,    48,
      16,    48,    18,    18,    49,    19,    19,    19,    19,    14,
      14,    13,    46,    13,    14,    20,    13,    14,    55,    20,
      20,    20,    20,    20,    48,    40,    40,    40,    39,    27,
      24,    18,    18,    18,    18,     9,    19,    19,    41,    55,
      55,    10
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
        case 2:

/* Line 1455 of yacc.c  */
#line 29 "syntaxique.y"
    {
        inserer((yyvsp[(2) - (5)].string), "idf");  
        printf("Syntaxe correcte\n");
        YYACCEPT;  
    ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 48 "syntaxique.y"
    {strcpy(sauvType, (yyvsp[(1) - (1)].string));;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 49 "syntaxique.y"
    {strcpy(sauvType, (yyvsp[(1) - (1)].string));;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 50 "syntaxique.y"
    {strcpy(sauvType, (yyvsp[(1) - (1)].string));;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 54 "syntaxique.y"
    {
                                if (doubleDeclaration((yyvsp[(1) - (3)].string)) == 1) {
								inserer((yyvsp[(1) - (3)].string), "idf");
								insererType((yyvsp[(1) - (3)].string), sauvType);
								insererTaille((yyvsp[(1) - (3)].string), 1);
								}
                                else {printf("erreur semantique: double declaration de %s a la ligne %d \n",(yyvsp[(1) - (3)].string), nb_ligne);}
							   ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 62 "syntaxique.y"
    {
		                        if (doubleDeclaration((yyvsp[(1) - (1)].string)) == 1) {
		                        inserer((yyvsp[(1) - (1)].string), "idf");
								insererType((yyvsp[(1) - (1)].string), sauvType);
								insererTaille((yyvsp[(1) - (1)].string), 1);
								}
                                else {printf("erreur semantique: double declaration de %s a la ligne %d \n",(yyvsp[(1) - (1)].string), nb_ligne);}
							   ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 71 "syntaxique.y"
    {
			                   if ((yyvsp[(3) - (6)].entier)<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
			                   if (doubleDeclaration((yyvsp[(1) - (6)].string)) == 1) {inserer((yyvsp[(1) - (6)].string), "idf_tableau"); insererType((yyvsp[(1) - (6)].string),sauvType);}
			                   else {printf("Erreur semantique 'double declaration' a la ligne %d, la variable %s est deja declaree \n", nb_ligne, (yyvsp[(1) - (6)].string));}			
		                       ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 77 "syntaxique.y"
    {
			                    if ((yyvsp[(3) - (4)].entier)<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
			                    if (doubleDeclaration((yyvsp[(1) - (4)].string)) == 1) {inserer((yyvsp[(1) - (4)].string), "idf_tableau");insererType((yyvsp[(1) - (4)].string),sauvType); insererTaille((yyvsp[(1) - (4)].string), (yyvsp[(3) - (4)].entier));}
			                    else {printf("Erreur semantique 'double declaration' a la ligne %d, la variable %s est deja declaree \n", nb_ligne, (yyvsp[(1) - (4)].string));}
		                       ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 84 "syntaxique.y"
    {if (doubleDeclaration((yyvsp[(1) - (5)].string))==1) {inserer((yyvsp[(1) - (5)].string), "constante");insererType((yyvsp[(1) - (5)].string),sauvType);insererTaille((yyvsp[(1) - (5)].string), 1);}
					                           else {printf("Erreur semantique 'double declaration' a la ligne %d, la variable %s est deja declaree \n", nb_ligne, (yyvsp[(1) - (5)].string));}
					                            if (CompType((yyvsp[(1) - (5)].string),"int")==0) {printf("Erreur semantique a la	 ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, (yyvsp[(1) - (5)].string));}
				                               ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 88 "syntaxique.y"
    {if (doubleDeclaration((yyvsp[(1) - (5)].string))==1) {inserer((yyvsp[(1) - (5)].string), "constante");insererType((yyvsp[(1) - (5)].string),sauvType);insererTaille((yyvsp[(1) - (5)].string), 1);}
					                           else {printf("Erreur semantique 'double declaration' a la ligne %d, la variable %s est deja declaree \n", nb_ligne, (yyvsp[(1) - (5)].string));}
					                            if (CompType((yyvsp[(1) - (5)].string),"string")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, (yyvsp[(1) - (5)].string));}
				                               ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 92 "syntaxique.y"
    {if (doubleDeclaration((yyvsp[(1) - (5)].string))==1) {inserer((yyvsp[(1) - (5)].string), "constante");insererType((yyvsp[(1) - (5)].string),sauvType);insererTaille((yyvsp[(1) - (5)].string), 1);}
					                           else {printf("Erreur semantique 'double declaration' a la ligne %d, la variable %s est deja declaree \n", nb_ligne, (yyvsp[(1) - (5)].string));}
					                            if (CompType((yyvsp[(1) - (5)].string),"float")==0) {printf("Erreur semantique a la	 ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, (yyvsp[(1) - (5)].string));}
				                               ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 97 "syntaxique.y"
    {
					                             if (doubleDeclaration((yyvsp[(1) - (3)].string))==1) {inserer((yyvsp[(1) - (3)].string), "constante");insererType((yyvsp[(1) - (3)].string),sauvType);insererTaille((yyvsp[(1) - (3)].string), 1);}
				                                 else {printf("Erreur semantique 'double declaration' a la ligne %d, la variable %s est deja declaree \n", nb_ligne, (yyvsp[(1) - (3)].string));}
					                             if (CompType((yyvsp[(1) - (3)].string),"int")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, (yyvsp[(1) - (3)].string));}
												;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 103 "syntaxique.y"
    {
					                             if (doubleDeclaration((yyvsp[(1) - (3)].string))==1) {inserer((yyvsp[(1) - (3)].string), "constante");insererType((yyvsp[(1) - (3)].string),sauvType);insererTaille((yyvsp[(1) - (3)].string), 1);}
				                                 else {printf("Erreur semantique 'double declaration' a la ligne %d, la variable %s est deja declaree \n", nb_ligne, (yyvsp[(1) - (3)].string));}
					                             if (CompType((yyvsp[(1) - (3)].string),"string")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, (yyvsp[(1) - (3)].string));}
												;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 109 "syntaxique.y"
    {
					                             if (doubleDeclaration((yyvsp[(1) - (3)].string))==1) {inserer((yyvsp[(1) - (3)].string), "constante");insererType((yyvsp[(1) - (3)].string),sauvType);insererTaille((yyvsp[(1) - (3)].string), 1);}
				                                 else {printf("Erreur semantique 'double declaration' a la ligne %d, la variable %s est deja declaree \n", nb_ligne, (yyvsp[(1) - (3)].string));}
					                             if (CompType((yyvsp[(1) - (3)].string),"float")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, (yyvsp[(1) - (3)].string));}
												;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 139 "syntaxique.y"
    {
				if (CompType((yyvsp[(1) - (4)].string),"string")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, (yyvsp[(1) - (4)].string));}
				if (VerifIdfConst((yyvsp[(1) - (4)].string))==1){printf("Erreur semantique a la ligne  %d : la variable %s est une constante, affectation impossible\n",nb_ligne,(yyvsp[(1) - (4)].string));}
				if (recherche((yyvsp[(1) - (4)].string))==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,(yyvsp[(1) - (4)].string));}
			;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 145 "syntaxique.y"
    {
				if ((CompType((yyvsp[(1) - (4)].string),"int")==0) && (CompType((yyvsp[(1) - (4)].string),"float")==0)) //we can't affect an expression to an id if it's not float or int
				{printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, (yyvsp[(1) - (4)].string));}
				if (VerifIdfConst((yyvsp[(1) - (4)].string))==1){printf("Erreur semantique a la ligne  %d : la variable %s est une constante, affectation impossible\n",nb_ligne,(yyvsp[(1) - (4)].string));}
				if (recherche((yyvsp[(1) - (4)].string))==-1){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,(yyvsp[(1) - (4)].string));}
			;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 152 "syntaxique.y"
    {
				if (CompType((yyvsp[(1) - (7)].string),"string")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, (yyvsp[(1) - (7)].string));}
				if (CompType((yyvsp[(3) - (7)].string),"int")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, (yyvsp[(1) - (7)].string));}
				if (VerifIdfConst((yyvsp[(1) - (7)].string))==1){printf("Erreur semantique a la ligne  %d : la variable %s est une constante, affectation impossible\n",nb_ligne,(yyvsp[(1) - (7)].string));}
				if ((yyvsp[(3) - (7)].string)<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if (recherche((yyvsp[(1) - (7)].string))==-1){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,(yyvsp[(1) - (7)].string));}
				if (recherche((yyvsp[(3) - (7)].string))==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,(yyvsp[(3) - (7)].string));}			
			
			;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 162 "syntaxique.y"
    {
				if ((CompType((yyvsp[(1) - (7)].string),"int")==0)&&(CompType((yyvsp[(1) - (7)].string),"float")==0)) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, (yyvsp[(1) - (7)].string));}
				if (CompType((yyvsp[(3) - (7)].string),"int")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, (yyvsp[(1) - (7)].string));}
				if (VerifIdfConst((yyvsp[(1) - (7)].string))==1){printf("Erreur semantique a la ligne  %d : la variable %s est une constante, affectation impossible\n",nb_ligne,(yyvsp[(1) - (7)].string));}
				if ((yyvsp[(3) - (7)].string)<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if (recherche((yyvsp[(1) - (7)].string))==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,(yyvsp[(1) - (7)].string));}
				if (recherche((yyvsp[(3) - (7)].string))==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,(yyvsp[(3) - (7)].string));}			

			;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 172 "syntaxique.y"
    {
				if ((CompType((yyvsp[(1) - (7)].string),"int")==0)&&(CompType((yyvsp[(1) - (7)].string),"float")==0))
				 {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, (yyvsp[(1) - (7)].string));}
				if (VerifIdfConst((yyvsp[(1) - (7)].string))==1){printf("Erreur semantique a la ligne  %d : la variable %s est une constante, affectation impossible\n",nb_ligne,(yyvsp[(1) - (7)].string));}
				if ((yyvsp[(3) - (7)].entier)<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if(VerifierTailleTableau((yyvsp[(1) - (7)].string), (yyvsp[(3) - (7)].entier)) == 0){printf("Erreur semantique a la ligne  %d : depassement de la taille du tableau\n",nb_ligne);}
				if (recherche((yyvsp[(1) - (7)].string))==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,(yyvsp[(1) - (7)].string));}
			;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 181 "syntaxique.y"
    {
				if (CompType((yyvsp[(1) - (7)].string),"string")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, (yyvsp[(1) - (7)].string));}
				if (VerifIdfConst((yyvsp[(1) - (7)].string))==1){printf("Erreur semantique a la ligne  %d : la variable %s est une constante, affectation impossible\n",nb_ligne,(yyvsp[(1) - (7)].string));}
				if ((yyvsp[(3) - (7)].entier)<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if(VerifierTailleTableau((yyvsp[(1) - (7)].string), (yyvsp[(3) - (7)].entier)) == 0){printf("Erreur semantique a la ligne  %d : depassement de la taille du tableau\n",nb_ligne);}
				if (recherche((yyvsp[(1) - (7)].string))==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,(yyvsp[(1) - (7)].string));}
			;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 189 "syntaxique.y"
    {
				if (verifierCompatibiliteType((yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].string))==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, (yyvsp[(1) - (3)].string));}
				if (VerifIdfConst((yyvsp[(1) - (3)].string))==1){printf("Erreur semantique a la ligne  %d : la variable %s est une constante, affectation impossible\n",nb_ligne,(yyvsp[(1) - (3)].string));}
				if (VerifIdfConst((yyvsp[(3) - (3)].string))==1){printf("Erreur semantique a la ligne  %d : la variable %s est une constante, affectation impossible\n",nb_ligne,(yyvsp[(3) - (3)].string));}
				if (recherche((yyvsp[(1) - (3)].string))==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,(yyvsp[(1) - (3)].string));}
			    if(VerifierTailleTableau((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].string)) == 0){printf("Erreur semantique a la ligne  %d : depassement de la taille du tableau\n",nb_ligne);}
				if (recherche((yyvsp[(3) - (3)].string))==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,(yyvsp[(3) - (3)].string));}
			;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 200 "syntaxique.y"
    {
		if((strcmp(sauvOpr,"/")==0)&& sauvConstInt==0)
        {printf("Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne);
		 sauvConstInt=-1;}
		else if ((strcmp(sauvOpr,"/")==0)&& sauvConstReal==0) {printf(" Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); sauvConstReal=-1.0;}
	;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 208 "syntaxique.y"
    {
		if((strcmp(sauvOpr,"/")==0)&& sauvConstInt==0)
        {printf("Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); sauvConstInt=-1;}
		else if ((strcmp(sauvOpr,"/")==0)&& sauvConstReal==0) {printf(" Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); sauvConstReal=-1.0;}
	;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 217 "syntaxique.y"
    {
			strcpy(sauvOpr,"+");
		;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 221 "syntaxique.y"
    {
			strcpy(sauvOpr,"-");
		;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 225 "syntaxique.y"
    {
			strcpy(sauvOpr,"/");
		;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 229 "syntaxique.y"
    {
			strcpy(sauvOpr,"*");
		;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 234 "syntaxique.y"
    {
			if (recherche((yyvsp[(1) - (1)].string))==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,(yyvsp[(1) - (1)].string));}
			;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 238 "syntaxique.y"
    {
				if ((yyvsp[(3) - (4)].entier)<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if (recherche((yyvsp[(1) - (4)].string))==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,(yyvsp[(1) - (4)].string));}
				if(VerifierTailleTableau((yyvsp[(1) - (4)].string), (yyvsp[(3) - (4)].entier)) == 0){printf("Erreur semantique a la ligne  %d : depassement de la taille du tableau\n",nb_ligne);}
			    ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 244 "syntaxique.y"
    {
			    if ((yyvsp[(3) - (4)].string)<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if (recherche((yyvsp[(3) - (4)].string))==-1){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,(yyvsp[(3) - (4)].string));}			
				if (recherche((yyvsp[(1) - (4)].string))==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,(yyvsp[(1) - (4)].string));}			
	 			if(VerifierTailleTableau((yyvsp[(1) - (4)].string), (yyvsp[(3) - (4)].string)) == 0){printf("Erreur semantique a la ligne  %d : depassement de la taille du tableau\n",nb_ligne);}
				;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 251 "syntaxique.y"
    {    
			sauvConstInt=(yyvsp[(1) - (1)].entier);           
		;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 255 "syntaxique.y"
    {    
			sauvConstReal=(yyvsp[(1) - (1)].flt);           
		;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 262 "syntaxique.y"
    {
    // Vérification du nombre de variables et des signes de formatage
    if (NbrIdf != NbrFormat((yyvsp[(3) - (7)].string))) {
        printf("Erreur semantique a la ligne %d : Le nombre de signes de formatage n'est pas egal au nombre de variables.\n", nb_ligne);
    } else {
        insererSignFormat((yyvsp[(3) - (7)].string), tableau);
        if (verifierCompatibiliteFormat(tableau, NbrIdf) != 0) {
            printf("Erreur semantique a la ligne %d : Incompatibilite de type .\n", nb_ligne);
        }
        initialiseTableau(tableau);
    }
    NbrIdf = 0; // Réinitialisation du compteur
;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 278 "syntaxique.y"
    {strcpy(tableau[NbrIdf].idfs, (yyvsp[(1) - (1)].string));
			NbrIdf++;
				if(recherche((yyvsp[(1) - (1)].string))==-1){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,(yyvsp[(1) - (1)].string));}
			;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 283 "syntaxique.y"
    {strcpy(tableau[NbrIdf].idfs, (yyvsp[(1) - (4)].string));
			NbrIdf++;
				if ((yyvsp[(3) - (4)].string)<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if(recherche((yyvsp[(1) - (4)].string))==-1){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,(yyvsp[(1) - (4)].string));}
				if(recherche((yyvsp[(3) - (4)].string))==-1){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,(yyvsp[(3) - (4)].string));}
			;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 290 "syntaxique.y"
    {strcpy(tableau[NbrIdf].idfs, (yyvsp[(1) - (4)].string));
			NbrIdf++;
				if ((yyvsp[(3) - (4)].entier)<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);	
				if(recherche((yyvsp[(1) - (4)].string))==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,(yyvsp[(1) - (4)].string));}
			;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 301 "syntaxique.y"
    {
    // Vérification du nombre de variables et des signes de formatage
    if (NbrIdf != NbrFormat((yyvsp[(3) - (7)].string))) {
        printf("Erreur semantique a la ligne %d : Le nombre de signes de formatage n'est pas egal au nombre de variables.\n", nb_ligne);
    } else {
        insererSignFormat((yyvsp[(3) - (7)].string), tableau);
        if (verifierCompatibiliteFormat(tableau, NbrIdf) != 0) {
            printf("Erreur semantique a la ligne %d : INCOMPATIBILITE de type avec la variable numero %d dans l'instruction Ecriture.\n", nb_ligne, verifierCompatibiliteFormat(tableau, NbrIdf));
        }
        initialiseTableau(tableau);
    }
    NbrIdf = 0; // Réinitialisation du compteur
;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 317 "syntaxique.y"
    {strcpy(tableau[NbrIdf].idfs, (yyvsp[(1) - (3)].string));
			NbrIdf++;
				if (recherche((yyvsp[(1) - (3)].string))==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,(yyvsp[(1) - (3)].string));}
			;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 322 "syntaxique.y"
    {strcpy(tableau[NbrIdf].idfs, (yyvsp[(1) - (1)].string));
			NbrIdf++;
				if (recherche((yyvsp[(1) - (1)].string))==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,(yyvsp[(1) - (1)].string));}
			;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 327 "syntaxique.y"
    {strcpy(tableau[NbrIdf].idfs, (yyvsp[(1) - (4)].string));
			NbrIdf++;
				if ((yyvsp[(3) - (4)].string)<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if(recherche((yyvsp[(1) - (4)].string))==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,(yyvsp[(1) - (4)].string));}
				if(recherche((yyvsp[(3) - (4)].string))==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,(yyvsp[(3) - (4)].string));}
			;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 334 "syntaxique.y"
    {strcpy(tableau[NbrIdf].idfs, (yyvsp[(1) - (4)].string));
			NbrIdf++;
				if ((yyvsp[(3) - (4)].entier)<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);	
				if(recherche((yyvsp[(1) - (4)].string))==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,(yyvsp[(1) - (4)].string));}
			;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 340 "syntaxique.y"
    {strcpy(tableau[NbrIdf].idfs, (yyvsp[(1) - (6)].string));
			NbrIdf++;
				if ((yyvsp[(3) - (6)].string)<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if(recherche((yyvsp[(1) - (6)].string))==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,(yyvsp[(1) - (6)].string));}
				if(recherche((yyvsp[(3) - (6)].string))==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,(yyvsp[(3) - (6)].string));}
			;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 347 "syntaxique.y"
    {strcpy(tableau[NbrIdf].idfs, (yyvsp[(1) - (6)].string));
			NbrIdf++;
				if ((yyvsp[(3) - (6)].entier)<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if(recherche((yyvsp[(1) - (6)].string))==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,(yyvsp[(1) - (6)].string));}
			;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 354 "syntaxique.y"
    {
				if (NbrIdf != NbrFormat((yyvsp[(3) - (5)].string)))
			{
				printf("Erreur semantique a la ligne %d : Le nombre de signes de formatages n'est pas egal au nombre de variables\n", nb_ligne);
			}
			;}
    break;



/* Line 1455 of yacc.c  */
#line 1990 "syntaxique.tab.c"
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
#line 361 "syntaxique.y"

main () 
{
yyparse();
afficher();
}
yywrap()
{}

int yyerror(char * msg)

{
printf("erreur syntaxique sur la ligne %d\n",nb_ligne);
}


