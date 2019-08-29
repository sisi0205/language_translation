/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "parse.y" /* yacc.c:339  */

    #include <iostream>
    #include <string>
    #include <map>
    #include <stack>
    #include "includes/ast.h"
	int yylex (void);
	extern char *yytext;
	void yyerror (const char *);
	PoolOfNodes& pool = PoolOfNodes::getInstance();
	//std::stack<const Node*> help_EQ;
	

#line 80 "parse.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AMPEREQUAL = 258,
    AMPERSAND = 259,
    AND = 260,
    AS = 261,
    ASSERT = 262,
    AT = 263,
    BACKQUOTE = 264,
    BAR = 265,
    BREAK = 266,
    CIRCUMFLEX = 267,
    CIRCUMFLEXEQUAL = 268,
    CLASS = 269,
    COLON = 270,
    COMMA = 271,
    CONTINUE = 272,
    DEDENT = 273,
    DEF = 274,
    DEL = 275,
    DOT = 276,
    DOUBLESLASH = 277,
    DOUBLESLASHEQUAL = 278,
    DOUBLESTAR = 279,
    DOUBLESTAREQUAL = 280,
    ELIF = 281,
    ELSE = 282,
    ENDMARKER = 283,
    EQEQUAL = 284,
    EQUAL = 285,
    EXCEPT = 286,
    EXEC = 287,
    FINALLY = 288,
    FOR = 289,
    FROM = 290,
    GLOBAL = 291,
    GREATER = 292,
    GREATEREQUAL = 293,
    GRLT = 294,
    IF = 295,
    IMPORT = 296,
    IN = 297,
    INDENT = 298,
    IS = 299,
    LAMBDA = 300,
    LBRACE = 301,
    LEFTSHIFT = 302,
    LEFTSHIFTEQUAL = 303,
    LESS = 304,
    LESSEQUAL = 305,
    LPAR = 306,
    LSQB = 307,
    MINEQUAL = 308,
    MINUS = 309,
    NAME = 310,
    NEWLINE = 311,
    NOT = 312,
    NOTEQUAL = 313,
    NUMBER = 314,
    OR = 315,
    PASS = 316,
    PERCENT = 317,
    PERCENTEQUAL = 318,
    PLUS = 319,
    PLUSEQUAL = 320,
    PRINT = 321,
    RAISE = 322,
    RBRACE = 323,
    RETURN = 324,
    RIGHTSHIFT = 325,
    RIGHTSHIFTEQUAL = 326,
    RPAR = 327,
    RSQB = 328,
    SEMI = 329,
    SLASH = 330,
    SLASHEQUAL = 331,
    STAR = 332,
    STAREQUAL = 333,
    STRING = 334,
    TILDE = 335,
    TRY = 336,
    VBAREQUAL = 337,
    WHILE = 338,
    WITH = 339,
    YIELD = 340,
    INT = 341,
    FLOAT = 342
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 39 "parse.y" /* yacc.c:355  */

  Node* node;
  int intNumber;
  float fltNumber;
  char *id;

#line 212 "parse.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);



/* Copy the second part of user declarations.  */

#line 243 "parse.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
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
#define YYLAST   958

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  141
/* YYNRULES -- Number of rules.  */
#define YYNRULES  315
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  479

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   342

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    49,    49,    52,    55,    56,    64,    65,    68,    69,
      72,    73,    76,    77,    80,    81,    84,    90,    91,    94,
      95,    98,    99,   102,   103,   106,   107,   110,   111,   114,
     115,   118,   119,   122,   123,   126,   127,   130,   131,   134,
     135,   138,   139,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   153,   237,   256,   257,   262,   266,   276,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   295,   298,   301,   302,   305,   306,   309,   310,   313,
     314,   317,   320,   323,   324,   325,   326,   327,   330,   333,
     336,   337,   340,   343,   344,   347,   348,   351,   352,   355,
     356,   359,   362,   365,   366,   369,   370,   371,   374,   375,
     378,   379,   382,   383,   386,   387,   390,   391,   394,   395,
     398,   401,   402,   405,   406,   409,   410,   413,   414,   415,
     416,   417,   418,   419,   420,   423,   424,   427,   428,   431,
     432,   435,   436,   439,   440,   443,   444,   447,   448,   451,
     452,   455,   458,   459,   462,   463,   466,   467,   470,   471,
     474,   475,   478,   479,   485,   491,   500,   501,   504,   505,
     508,   509,   512,   513,   516,   517,   520,   521,   524,   525,
     528,   529,   532,   533,   536,   537,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   553,   554,   557,
     558,   561,   562,   565,   566,   569,   570,   573,   574,   597,
     598,   601,   602,   634,   635,   636,   637,   640,   665,   668,
     669,   670,   673,   675,   687,   688,   691,   692,   693,   694,
     695,   696,   697,   698,   701,   702,   705,   706,   709,   710,
     713,   714,   717,   718,   721,   722,   725,   726,   729,   730,
     733,   738,   739,   742,   743,   746,   747,   750,   751,   752,
     755,   756,   759,   760,   763,   764,   767,   768,   771,   772,
     775,   776,   779,   780,   783,   784,   787,   788,   791,   792,
     795,   796,   799,   800,   803,   806,   807,   810,   811,   814,
     815,   818,   819,   820,   823,   824,   827,   828,   831,   832,
     835,   836,   839,   840,   843,   844,   847,   848,   851,   852,
     855,   856,   859,   860,   863,   864
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AMPEREQUAL", "AMPERSAND", "AND", "AS",
  "ASSERT", "AT", "BACKQUOTE", "BAR", "BREAK", "CIRCUMFLEX",
  "CIRCUMFLEXEQUAL", "CLASS", "COLON", "COMMA", "CONTINUE", "DEDENT",
  "DEF", "DEL", "DOT", "DOUBLESLASH", "DOUBLESLASHEQUAL", "DOUBLESTAR",
  "DOUBLESTAREQUAL", "ELIF", "ELSE", "ENDMARKER", "EQEQUAL", "EQUAL",
  "EXCEPT", "EXEC", "FINALLY", "FOR", "FROM", "GLOBAL", "GREATER",
  "GREATEREQUAL", "GRLT", "IF", "IMPORT", "IN", "INDENT", "IS", "LAMBDA",
  "LBRACE", "LEFTSHIFT", "LEFTSHIFTEQUAL", "LESS", "LESSEQUAL", "LPAR",
  "LSQB", "MINEQUAL", "MINUS", "NAME", "NEWLINE", "NOT", "NOTEQUAL",
  "NUMBER", "OR", "PASS", "PERCENT", "PERCENTEQUAL", "PLUS", "PLUSEQUAL",
  "PRINT", "RAISE", "RBRACE", "RETURN", "RIGHTSHIFT", "RIGHTSHIFTEQUAL",
  "RPAR", "RSQB", "SEMI", "SLASH", "SLASHEQUAL", "STAR", "STAREQUAL",
  "STRING", "TILDE", "TRY", "VBAREQUAL", "WHILE", "WITH", "YIELD", "INT",
  "FLOAT", "$accept", "start", "file_input", "pick_NEWLINE_stmt",
  "star_NEWLINE_stmt", "decorator", "opt_arglist", "decorators",
  "decorated", "funcdef", "parameters", "varargslist", "opt_EQUAL_test",
  "star_fpdef_COMMA", "opt_DOUBLESTAR_NAME", "pick_STAR_DOUBLESTAR",
  "opt_COMMA", "fpdef", "fplist", "star_fpdef_notest", "stmt",
  "simple_stmt", "star_SEMI_small_stmt", "small_stmt", "expr_stmt",
  "pick_yield_expr_testlist", "star_EQUAL", "help_EQUAL", "augassign",
  "print_stmt", "star_COMMA_test", "opt_test", "plus_COMMA_test",
  "opt_test_2", "del_stmt", "pass_stmt", "flow_stmt", "break_stmt",
  "continue_stmt", "return_stmt", "yield_stmt", "raise_stmt",
  "opt_COMMA_test", "opt_test_3", "import_stmt", "import_name",
  "import_from", "pick_dotted_name", "pick_STAR_import", "import_as_name",
  "dotted_as_name", "import_as_names", "star_COMMA_import_as_name",
  "dotted_as_names", "dotted_name", "global_stmt", "star_COMMA_NAME",
  "exec_stmt", "assert_stmt", "compound_stmt", "if_stmt", "star_ELIF",
  "while_stmt", "for_stmt", "try_stmt", "plus_except", "opt_ELSE",
  "opt_FINALLY", "with_stmt", "star_COMMA_with_item", "with_item",
  "except_clause", "pick_AS_COMMA", "opt_AS_COMMA", "suite", "plus_stmt",
  "testlist_safe", "plus_COMMA_old_test", "old_test", "old_lambdef",
  "test", "opt_IF_ELSE", "or_test", "and_test", "not_test", "comparison",
  "comp_op", "expr", "xor_expr", "and_expr", "shift_expr",
  "pick_LEFTSHIFT_RIGHTSHIFT", "arith_expr", "pick_PLUS_MINUS", "term",
  "pick_multop", "factor", "pick_unop", "power", "star_trailer", "atom",
  "pick_yield_expr_testlist_comp", "opt_yield_test", "opt_listmaker",
  "opt_dictorsetmaker", "plus_STRING", "listmaker", "testlist_comp",
  "lambdef", "trailer", "subscriptlist", "star_COMMA_subscript",
  "subscript", "opt_test_only", "opt_sliceop", "sliceop", "exprlist",
  "star_COMMA_expr", "testlist", "dictorsetmaker", "star_test_COLON_test",
  "pick_for_test_test", "pick_for_test", "classdef", "opt_testlist",
  "arglist", "star_argument_COMMA", "star_COMMA_argument",
  "opt_DOUBLESTAR_test", "pick_argument", "argument", "opt_comp_for",
  "list_iter", "list_for", "list_if", "comp_iter", "comp_for", "comp_if",
  "testlist1", "yield_expr", "star_DOT", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342
};
# endif

#define YYPACT_NINF -273

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-273)))

#define YYTABLE_NINF -262

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -273,    45,  -273,   355,  -273,   805,    62,   805,  -273,    73,
    -273,    78,   871,  -273,   871,   871,  -273,    88,   805,    62,
      52,   805,   264,   805,  -273,  -273,  -273,   857,  -273,  -273,
     709,   805,   805,  -273,  -273,   130,   805,   805,   805,  -273,
    -273,  -273,  -273,    61,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,     3,   150,  -273,   227,    68,   149,   161,    -6,
      44,    35,  -273,   871,  -273,  -273,    90,  -273,    24,  -273,
    -273,   151,  -273,     9,  -273,   104,    23,   124,    68,  -273,
      29,   137,   140,    15,  -273,   169,  -273,   170,    38,   805,
     173,    11,    27,   126,  -273,   158,  -273,   123,  -273,  -273,
     162,   129,  -273,  -273,   805,  -273,  -273,   183,  -273,   610,
     190,  -273,   201,  -273,  -273,  -273,  -273,    12,   192,   857,
     857,  -273,   857,  -273,  -273,  -273,  -273,  -273,   154,  -273,
    -273,   174,  -273,   871,   871,   871,   871,  -273,  -273,   871,
    -273,  -273,   871,  -273,  -273,  -273,  -273,   871,  -273,    31,
    -273,  -273,  -273,  -273,  -273,   264,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,   264,   805,   157,   145,
    -273,  -273,   805,   610,   805,   146,   204,   206,   805,   805,
      30,   187,   209,   216,   610,    62,   178,  -273,   805,   179,
      63,  -273,   181,  -273,   207,   805,   871,   222,  -273,  -273,
    -273,   222,  -273,  -273,   871,   222,  -273,  -273,   223,   222,
     805,  -273,   198,  -273,    20,   610,   138,   871,  -273,   671,
     805,    13,   150,  -273,  -273,  -273,    68,   149,   161,    -6,
      44,    35,  -273,   191,   871,   145,   753,  -273,   212,  -273,
    -273,  -273,  -273,  -273,   175,  -273,    70,  -273,  -273,  -273,
     176,  -273,   177,   610,   871,   229,   235,   197,   247,  -273,
    -273,  -273,  -273,   199,  -273,  -273,  -273,  -273,  -273,  -273,
     185,   239,   805,   243,   158,   218,   805,  -273,  -273,   220,
    -273,   805,   254,  -273,  -273,   229,   529,   805,   248,   113,
     257,   251,   610,   805,    68,  -273,  -273,  -273,   805,  -273,
    -273,   202,   258,   260,   210,  -273,   265,  -273,   226,   805,
     805,   112,  -273,   270,   273,  -273,  -273,    68,   805,  -273,
     610,   217,   237,   274,  -273,   132,   277,  -273,   271,  -273,
    -273,    18,  -273,   278,  -273,  -273,   857,   819,  -273,   805,
    -273,  -273,  -273,   448,    42,   610,   283,   266,   285,   610,
     290,  -273,  -273,  -273,  -273,   291,  -273,   295,   805,  -273,
    -273,  -273,   805,  -273,  -273,   234,  -273,   610,  -273,   287,
    -273,  -273,   197,   805,   302,    63,   267,   805,  -273,    16,
     305,    69,   307,  -273,   272,  -273,  -273,  -273,  -273,  -273,
     805,  -273,  -273,   610,   312,  -273,   610,  -273,   610,  -273,
      84,  -273,   315,   318,  -273,  -273,   316,  -273,   320,   610,
    -273,  -273,   321,   819,  -273,  -273,  -273,   819,   322,   819,
    -273,  -273,  -273,   819,   323,  -273,  -273,   610,  -273,  -273,
    -273,   805,  -273,  -273,   767,  -273,   610,   610,  -273,   805,
      97,  -273,   819,    69,  -273,   819,  -273,  -273,  -273,   805,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       7,     0,     2,     0,     1,     0,     0,     0,    88,     0,
      89,     0,     0,     3,     0,     0,   315,     0,     0,     0,
      24,   241,   237,   239,   220,   230,     4,     0,    82,   219,
      76,    94,    91,   243,   221,     0,     0,     0,   313,   231,
     232,     6,    13,     0,   134,   132,     5,    37,    42,    43,
      44,    45,    46,    47,    83,    84,    85,    87,    86,    48,
      99,   100,    49,    50,    51,    38,   127,   128,   129,   130,
     131,    74,   177,   178,   180,   183,   184,   197,   199,   201,
     203,   207,   211,     0,   218,   225,   233,   175,    58,   133,
      92,   126,   118,     0,   310,     0,     0,     0,   269,    81,
     124,     0,     0,     0,   122,     0,   116,   101,   111,     0,
       0,     0,    74,     0,   240,    74,   236,     0,   235,   234,
      74,     0,   238,   182,     0,    71,    74,    98,    90,     0,
       0,   153,   155,   312,    12,    15,    14,     0,   271,     0,
       0,   174,     0,   188,   187,   189,   191,   193,   195,   186,
     190,     0,   192,     0,     0,     0,     0,   205,   206,     0,
     210,   209,     0,   216,   215,   214,   213,     0,   217,   223,
     242,    64,    66,    70,    69,     0,    67,    60,    63,    59,
      68,    62,    61,    65,    53,    56,     0,     0,     0,   286,
       9,   229,     0,     0,   283,    24,     0,   267,     0,     0,
       0,   314,   103,   120,     0,     0,     0,   249,     0,     0,
       0,    31,     0,    19,    22,     0,     0,    30,   273,   278,
     228,    30,   246,   226,     0,    30,   244,   227,    80,    30,
       0,    93,     0,   162,     0,     0,     0,     0,    40,     0,
     270,     0,   179,   181,   196,   194,   185,   198,   200,   202,
     204,   208,   212,     0,     0,   286,   261,   224,    58,    55,
      54,    52,   125,   119,     0,    10,     0,   311,   281,   282,
       0,    18,     0,     0,   266,    96,     0,     0,   109,   105,
     102,   115,   107,     0,   138,   117,   110,   248,    28,    36,
       0,    26,     0,    30,   275,     0,    29,   279,   247,     0,
     245,     0,    30,    72,    75,    96,     0,   157,     0,   148,
       0,   140,     0,     0,   154,    39,    41,    73,     0,   252,
     222,     0,     0,   258,     0,   256,     0,    57,     0,     0,
       0,   297,   284,    30,     0,    17,    16,   268,     0,   123,
       0,     0,     0,   113,   121,   136,    34,    32,     0,    27,
      21,    23,    20,    30,   272,   276,     0,     0,    78,    29,
      79,    97,   165,     0,   161,     0,     0,   150,     0,     0,
       0,   151,   152,   176,   250,     0,   251,   254,   261,     8,
     293,   288,     0,   294,   296,   285,   291,     0,    95,   142,
     106,   108,   112,     0,     0,    33,     0,    29,   277,   307,
      24,   301,   167,   171,   170,    77,   163,   164,   158,   159,
       0,   156,   144,     0,     0,   143,     0,   146,     0,   257,
     253,   260,   263,   290,   295,   280,     0,   114,     0,     0,
      35,    25,     0,     0,   306,   304,   305,     0,     0,     0,
     300,   298,   299,     0,    30,   160,   147,     0,   145,   139,
     255,   265,   259,   262,     0,   292,     0,     0,   135,     0,
     309,   173,     0,   303,   169,    29,   166,   149,   264,     0,
     287,   141,   137,   274,   308,   172,   302,   168,   289
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -273,  -273,  -273,  -273,  -273,   297,    83,  -273,  -273,   298,
    -273,  -187,  -273,  -273,  -273,  -273,  -201,  -204,  -273,  -273,
    -272,    -2,  -273,   103,  -273,   159,  -273,    94,  -273,  -273,
      89,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,    41,  -273,  -273,  -273,  -273,  -273,  -273,   -45,
     143,    76,  -273,  -273,     8,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
      43,    46,  -273,  -273,  -189,  -273,  -273,  -273,  -265,  -273,
      -5,  -273,  -136,   219,   -16,  -273,  -273,     7,   203,   205,
     211,  -273,   221,  -273,   196,  -273,   -71,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,   -55,    -8,  -273,  -273,   -10,  -273,    -9,  -273,
    -273,  -273,  -273,   325,  -273,  -273,  -273,  -273,  -273,  -273,
     -83,  -273,   -87,   259,  -273,   -82,  -105,  -273,  -273,   -13,
    -273
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    41,     3,    42,   264,    43,    44,    45,
     196,   110,   293,   111,   349,   213,   297,   214,   290,   346,
      46,   233,   137,    48,    49,   258,   184,   185,   186,    50,
     138,   125,   302,   303,    51,    52,    53,    54,    55,    56,
      57,    58,   339,   231,    59,    60,    61,   102,   280,   281,
     106,   282,   343,   107,   108,    62,   203,    63,    64,    65,
      66,   345,    67,    68,    69,   309,   367,   415,    70,   236,
     131,   310,   410,   411,   234,   363,   401,   444,   402,   403,
      71,   141,    72,    73,    74,    75,   153,    76,    77,    78,
      79,   159,    80,   162,    81,   167,    82,    83,    84,   169,
      85,   116,   117,   121,   113,    86,   122,   118,    87,   257,
     324,   377,   325,   326,   452,   453,    99,   197,    88,   114,
     353,   354,   218,    89,   270,   265,   266,   423,   455,   332,
     333,   383,   440,   441,   442,   434,   435,   436,    95,    90,
     103
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      91,    47,    94,   241,   268,   101,   289,   219,   272,   119,
     222,   123,   168,   105,    93,   284,   112,   115,   120,    98,
     298,   100,    98,   128,   300,   126,   127,   171,   304,   133,
     188,   130,   132,   -29,   362,   209,   201,   172,   193,   154,
     318,   157,   215,   139,   206,     4,   311,   173,   408,   174,
     216,   307,   253,   308,   175,   254,   433,   163,   409,   188,
     189,   216,   210,   140,   158,   190,   211,   109,   238,     6,
      92,   198,   176,   140,   194,     9,   140,   177,   154,     7,
      11,   277,   255,   256,   336,   278,   239,   178,   212,   179,
     -29,   407,   352,     7,   329,   180,   252,   164,   160,  -261,
     181,   360,   182,   224,   207,   322,   183,   279,   161,   439,
     165,   202,   166,   191,   210,    20,    21,    92,   211,   228,
     192,    22,    23,   371,    24,    25,   243,    27,    96,    20,
      21,   216,   386,    97,    29,    22,    23,   433,    24,    25,
     366,    27,   382,   104,   307,   129,   216,   330,    29,    33,
      34,   389,   398,   312,   313,   142,    39,    40,   393,   394,
     246,   155,   260,    33,    34,   156,   259,   187,   460,   170,
      39,    40,   461,   260,   463,   195,   412,   259,   464,   199,
     417,   200,   262,   320,   204,   269,   205,   267,   208,   355,
     276,   430,   216,   275,   220,   223,   224,   475,   425,   230,
     477,   217,   227,   287,   221,   235,   295,   237,   240,   225,
     294,   244,   263,   438,   299,   229,   245,   -11,   271,   273,
     399,   404,   274,    98,   446,   305,   384,   448,  -104,   449,
     188,    98,   283,   286,   288,   317,   291,   292,   296,   301,
     458,   306,   175,   466,   314,   338,   319,   328,   334,   335,
     340,   323,   278,   342,   344,   348,   143,   347,   467,   351,
     356,   331,   357,   365,   144,   145,   146,   471,   472,   147,
     359,   148,   369,     7,   374,  -260,   149,   150,   370,   375,
     378,   337,   379,   376,   151,   152,   385,   350,   387,   390,
     392,   317,   391,   395,   397,   396,   358,   404,   413,   414,
     416,   404,   364,   404,    47,   418,   -29,   404,   132,    20,
      21,   420,   419,   373,   426,    22,    23,   429,    24,    25,
     437,    27,   431,   443,   380,   381,   404,   447,    29,   404,
     451,   456,   140,   388,   454,   457,   459,   462,   321,   465,
     134,   135,   316,    33,    34,   261,   361,   427,   285,    38,
      39,    40,   327,   341,   405,   368,   372,   247,   251,   242,
     248,    47,     5,     6,     7,   450,     8,   249,   136,     9,
     422,   470,    10,   421,    11,    12,   476,   424,   474,   226,
     250,     0,     0,    13,     0,     0,     0,    14,   428,    15,
      16,    17,   432,     0,     0,    18,    19,     0,     0,     0,
      20,    21,     0,     0,     0,   445,    22,    23,     0,    24,
      25,    26,    27,     0,     0,   323,    28,     0,     0,    29,
       0,    30,    31,     0,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,    34,    35,     0,    36,    37,
      38,    39,    40,     0,     0,     0,   468,     0,     0,   331,
       0,     0,     0,     0,   473,     5,     6,     7,     0,     8,
       0,     0,     9,     0,   478,    10,   406,    11,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      14,     0,    15,    16,    17,     0,     0,     0,    18,    19,
       0,     0,     0,    20,    21,     0,     0,     0,     0,    22,
      23,     0,    24,    25,     0,    27,     0,     0,     0,    28,
       0,     0,    29,     0,    30,    31,     0,    32,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,    34,    35,
       0,    36,    37,    38,    39,    40,     5,     6,     7,     0,
       8,     0,     0,     9,     0,     0,    10,     0,    11,    12,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    14,     0,    15,    16,    17,     0,     0,     0,    18,
      19,     0,     0,     0,    20,    21,     0,     0,     0,     0,
      22,    23,     0,    24,    25,     0,    27,     0,     0,     0,
      28,     0,     0,    29,     0,    30,    31,     0,    32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    33,    34,
      35,     0,    36,    37,    38,    39,    40,     5,     0,     7,
       0,     8,     0,     0,     0,     0,     0,    10,     0,     0,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,     0,     0,    16,    17,     0,     0,     0,
       0,    19,     0,     0,     0,    20,    21,     0,     0,     0,
       0,    22,    23,     0,    24,    25,   232,    27,     0,     0,
       0,    28,     0,     0,    29,     0,    30,    31,     5,    32,
       7,     0,     8,     0,     0,     0,     0,     0,    10,    33,
      34,    12,     0,     0,     0,    38,    39,    40,     0,     0,
       0,     0,     0,    14,     0,     0,    16,    17,     0,     0,
       0,     0,    19,     0,     0,     0,    20,    21,     7,     0,
       0,     0,    22,    23,     0,    24,    25,   315,    27,     0,
       0,     0,    28,     0,     0,    29,     0,    30,    31,     0,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,    34,     0,     0,    20,    21,    38,    39,    40,     0,
      22,    23,     7,    24,    25,     0,    27,     0,     0,     0,
       0,     0,     0,    29,   322,     0,     7,     0,     0,   124,
       0,     0,     0,     0,     0,     0,     0,     0,    33,    34,
       0,   469,     0,     0,     0,    39,    40,     0,    20,    21,
       0,     0,     0,     0,    22,    23,     0,    24,    25,     0,
      27,     0,    20,    21,     7,     0,     0,    29,    22,    23,
       0,    24,    25,     0,    27,     0,     0,     0,     7,     0,
       0,    29,    33,    34,     0,     0,     0,     0,     0,    39,
      40,     0,     0,     0,     0,     0,    33,    34,     0,     0,
      20,    21,     0,    39,    40,     0,    22,    23,     0,    24,
      25,     0,    27,     0,   400,    21,     7,     0,     0,    29,
      22,    23,     0,    24,    25,     0,    27,     0,     0,     0,
       7,     0,     0,    29,    33,    34,     0,     0,     0,     0,
       0,    39,    40,     0,     0,     0,     0,     0,    33,    34,
       0,     0,     0,    21,     0,    39,    40,     0,    22,    23,
       0,    24,    25,     0,    27,     0,     0,    21,     0,     0,
       0,    29,    22,    23,     0,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    33,    34,     0,     0,
       0,     0,     0,    39,    40,     0,     0,     0,     0,     0,
      33,    34,     0,     0,     0,     0,     0,    39,    40
};

static const yytype_int16 yycheck[] =
{
       5,     3,     7,   139,   193,    15,   210,   112,   195,    22,
     115,    27,    83,    18,     6,   204,    21,    22,    23,    12,
     221,    14,    15,    32,   225,    30,    31,     3,   229,    38,
      21,    36,    37,    15,   306,    24,    21,    13,    15,    10,
      27,    47,    15,    40,     6,     0,   235,    23,     6,    25,
      34,    31,    21,    33,    30,    24,    40,    22,    16,    21,
      51,    34,    51,    60,    70,    56,    55,    15,    56,     8,
      55,    42,    48,    60,    51,    14,    60,    53,    10,     9,
      19,    51,    51,    52,   273,    55,    74,    63,    77,    65,
      72,   363,   293,     9,    24,    71,   167,    62,    54,    15,
      76,   302,    78,    34,   109,    21,    82,    77,    64,    40,
      75,   103,    77,     9,    51,    45,    46,    55,    55,   124,
      16,    51,    52,   312,    54,    55,   142,    57,    55,    45,
      46,    34,   333,    55,    64,    51,    52,    40,    54,    55,
      27,    57,    30,    55,    31,    15,    34,    77,    64,    79,
      80,   340,   353,    15,    16,     5,    86,    87,    26,    27,
     153,    12,   175,    79,    80,     4,   175,    16,   433,    79,
      86,    87,   437,   186,   439,    51,   365,   186,   443,    42,
     369,    41,   187,   254,    15,   194,    16,   192,    15,   294,
     199,   395,    34,   198,    68,    72,    34,   462,   387,    16,
     465,   112,    73,   208,   115,    15,   216,     6,    16,   120,
     215,    57,    55,   400,   224,   126,    42,    72,    72,    15,
     356,   357,    16,   216,   413,   230,   331,   416,    41,   418,
      21,   224,    16,    55,    55,   240,    55,    30,    16,    16,
     429,    43,    30,   444,   237,    16,    55,    72,    72,    72,
      15,   256,    55,     6,    55,    16,    29,    72,   447,    16,
      42,   266,    42,    15,    37,    38,    39,   456,   457,    42,
      16,    44,    15,     9,    72,    15,    49,    50,    27,    21,
      15,   274,    56,    73,    57,    58,    16,   292,    15,    72,
      16,   296,    55,    16,    16,    24,   301,   433,    15,    33,
      15,   437,   307,   439,   306,    15,    72,   443,   313,    45,
      46,    16,    21,   318,    27,    51,    52,    15,    54,    55,
      15,    57,    55,    16,   329,   330,   462,    15,    64,   465,
      15,    15,    60,   338,    16,    15,    15,    15,   255,    16,
      43,    43,   239,    79,    80,   186,   305,   392,   205,    85,
      86,    87,   258,   277,   359,   309,   313,   154,   162,   140,
     155,   363,     7,     8,     9,   420,    11,   156,    43,    14,
     378,   454,    17,   378,    19,    20,   463,   382,   460,   120,
     159,    -1,    -1,    28,    -1,    -1,    -1,    32,   393,    34,
      35,    36,   397,    -1,    -1,    40,    41,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,   410,    51,    52,    -1,    54,
      55,    56,    57,    -1,    -1,   420,    61,    -1,    -1,    64,
      -1,    66,    67,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    -1,    83,    84,
      85,    86,    87,    -1,    -1,    -1,   451,    -1,    -1,   454,
      -1,    -1,    -1,    -1,   459,     7,     8,     9,    -1,    11,
      -1,    -1,    14,    -1,   469,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    34,    35,    36,    -1,    -1,    -1,    40,    41,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,
      52,    -1,    54,    55,    -1,    57,    -1,    -1,    -1,    61,
      -1,    -1,    64,    -1,    66,    67,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,
      -1,    83,    84,    85,    86,    87,     7,     8,     9,    -1,
      11,    -1,    -1,    14,    -1,    -1,    17,    -1,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    34,    35,    36,    -1,    -1,    -1,    40,
      41,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,
      51,    52,    -1,    54,    55,    -1,    57,    -1,    -1,    -1,
      61,    -1,    -1,    64,    -1,    66,    67,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      81,    -1,    83,    84,    85,    86,    87,     7,    -1,     9,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    51,    52,    -1,    54,    55,    56,    57,    -1,    -1,
      -1,    61,    -1,    -1,    64,    -1,    66,    67,     7,    69,
       9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    17,    79,
      80,    20,    -1,    -1,    -1,    85,    86,    87,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    45,    46,     9,    -1,
      -1,    -1,    51,    52,    -1,    54,    55,    56,    57,    -1,
      -1,    -1,    61,    -1,    -1,    64,    -1,    66,    67,    -1,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    -1,    -1,    45,    46,    85,    86,    87,    -1,
      51,    52,     9,    54,    55,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    21,    -1,     9,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      -1,    24,    -1,    -1,    -1,    86,    87,    -1,    45,    46,
      -1,    -1,    -1,    -1,    51,    52,    -1,    54,    55,    -1,
      57,    -1,    45,    46,     9,    -1,    -1,    64,    51,    52,
      -1,    54,    55,    -1,    57,    -1,    -1,    -1,     9,    -1,
      -1,    64,    79,    80,    -1,    -1,    -1,    -1,    -1,    86,
      87,    -1,    -1,    -1,    -1,    -1,    79,    80,    -1,    -1,
      45,    46,    -1,    86,    87,    -1,    51,    52,    -1,    54,
      55,    -1,    57,    -1,    45,    46,     9,    -1,    -1,    64,
      51,    52,    -1,    54,    55,    -1,    57,    -1,    -1,    -1,
       9,    -1,    -1,    64,    79,    80,    -1,    -1,    -1,    -1,
      -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    79,    80,
      -1,    -1,    -1,    46,    -1,    86,    87,    -1,    51,    52,
      -1,    54,    55,    -1,    57,    -1,    -1,    46,    -1,    -1,
      -1,    64,    51,    52,    -1,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    79,    80,    -1,    -1,
      -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,
      79,    80,    -1,    -1,    -1,    -1,    -1,    86,    87
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    89,    90,    92,     0,     7,     8,     9,    11,    14,
      17,    19,    20,    28,    32,    34,    35,    36,    40,    41,
      45,    46,    51,    52,    54,    55,    56,    57,    61,    64,
      66,    67,    69,    79,    80,    81,    83,    84,    85,    86,
      87,    91,    93,    95,    96,    97,   108,   109,   111,   112,
     117,   122,   123,   124,   125,   126,   127,   128,   129,   132,
     133,   134,   143,   145,   146,   147,   148,   150,   151,   152,
     156,   168,   170,   171,   172,   173,   175,   176,   177,   178,
     180,   182,   184,   185,   186,   188,   193,   196,   206,   211,
     227,   168,    55,   142,   168,   226,    55,    55,   175,   204,
     175,   204,   135,   228,    55,   168,   138,   141,   142,    15,
      99,   101,   168,   192,   207,   168,   189,   190,   195,   227,
     168,   191,   194,   172,    70,   119,   168,   168,   206,    15,
     168,   158,   168,   206,    93,    97,   211,   110,   118,    40,
      60,   169,     5,    29,    37,    38,    39,    42,    44,    49,
      50,    57,    58,   174,    10,    12,     4,    47,    70,   179,
      54,    64,   181,    22,    62,    75,    77,   183,   184,   187,
      79,     3,    13,    23,    25,    30,    48,    53,    63,    65,
      71,    76,    78,    82,   114,   115,   116,    16,    21,    51,
      56,     9,    16,    15,    51,    51,    98,   205,    42,    42,
      41,    21,   142,   144,    15,    16,     6,   168,    15,    24,
      51,    55,    77,   103,   105,    15,    34,   118,   210,   224,
      68,   118,   224,    72,    34,   118,   221,    73,   168,   118,
      16,   131,    56,   109,   162,    15,   157,     6,    56,    74,
      16,   170,   171,   172,    57,    42,   175,   176,   177,   178,
     180,   182,   184,    21,    24,    51,    52,   197,   113,   206,
     227,   113,   168,    55,    94,   213,   214,   168,   162,   206,
     212,    72,    99,    15,    16,   168,   206,    51,    55,    77,
     136,   137,   139,    16,   162,   138,    55,   168,    55,   105,
     106,    55,    30,   100,   168,   204,    16,   104,   104,   204,
     104,    16,   120,   121,   104,   168,    43,    31,    33,   153,
     159,   162,    15,    16,   175,    56,   111,   168,    27,    55,
     184,    94,    21,   168,   198,   200,   201,   115,    72,    24,
      77,   168,   217,   218,    72,    72,   162,   175,    16,   130,
      15,   139,     6,   140,    55,   149,   107,    72,    16,   102,
     168,    16,   104,   208,   209,   224,    42,    42,   168,    16,
     104,   130,   108,   163,   168,    15,    27,   154,   159,    15,
      27,   162,   158,   168,    72,    21,    73,   199,    15,    56,
     168,   168,    30,   219,   224,    16,   104,    15,   168,   162,
      72,    55,    16,    26,    27,    16,    24,    16,   104,   170,
      45,   164,   166,   167,   170,   168,    18,   108,     6,    16,
     160,   161,   162,    15,    33,   155,    15,   162,    15,    21,
      16,   168,   201,   215,   168,   162,    27,   137,   168,    15,
     105,    55,   168,    40,   223,   224,   225,    15,    99,    40,
     220,   221,   222,    16,   165,   168,   162,    15,   162,   162,
     200,    15,   202,   203,    16,   216,    15,    15,   162,    15,
     166,   166,    15,   166,   166,    16,   104,   162,   168,    24,
     218,   162,   162,   168,   223,   166,   220,   166,   168
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    90,    91,    91,    92,    92,    93,    93,
      94,    94,    95,    95,    96,    96,    97,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   107,   107,   108,   108,   109,
     109,   110,   110,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   112,   112,   113,   113,   114,   115,   115,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   117,   117,   118,   118,   119,   119,   120,   120,   121,
     121,   122,   123,   124,   124,   124,   124,   124,   125,   126,
     127,   127,   128,   129,   129,   130,   130,   131,   131,   132,
     132,   133,   134,   135,   135,   136,   136,   136,   137,   137,
     138,   138,   139,   139,   140,   140,   141,   141,   142,   142,
     143,   144,   144,   145,   145,   146,   146,   147,   147,   147,
     147,   147,   147,   147,   147,   148,   148,   149,   149,   150,
     150,   151,   151,   152,   152,   153,   153,   154,   154,   155,
     155,   156,   157,   157,   158,   158,   159,   159,   160,   160,
     161,   161,   162,   162,   163,   163,   164,   164,   165,   165,
     166,   166,   167,   167,   168,   168,   169,   169,   170,   170,
     171,   171,   172,   172,   173,   173,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   175,   175,   176,
     176,   177,   177,   178,   178,   179,   179,   180,   180,   181,
     181,   182,   182,   183,   183,   183,   183,   184,   184,   185,
     185,   185,   186,   186,   187,   187,   188,   188,   188,   188,
     188,   188,   188,   188,   189,   189,   190,   190,   191,   191,
     192,   192,   193,   193,   194,   194,   195,   195,   196,   196,
     197,   197,   197,   198,   198,   199,   199,   200,   200,   200,
     201,   201,   202,   202,   203,   203,   204,   204,   205,   205,
     206,   206,   207,   207,   208,   208,   209,   209,   210,   210,
     211,   211,   212,   212,   213,   214,   214,   215,   215,   216,
     216,   217,   217,   217,   218,   218,   219,   219,   220,   220,
     221,   221,   222,   222,   223,   223,   224,   224,   225,   225,
     226,   226,   227,   227,   228,   228
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     0,     6,     3,
       1,     0,     2,     1,     2,     2,     5,     3,     2,     2,
       4,     2,     0,     4,     0,     3,     0,     3,     2,     1,
       0,     1,     3,     3,     2,     3,     0,     1,     1,     4,
       3,     3,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     1,     1,     1,     3,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     4,     3,     0,     3,     0,     3,     2,     2,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     3,     1,     2,     0,     3,     0,     1,
       1,     2,     4,     2,     2,     1,     3,     1,     3,     1,
       3,     1,     3,     2,     3,     0,     1,     3,     1,     3,
       3,     3,     0,     5,     2,     4,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     8,     5,     5,     0,     7,
       4,     9,     6,     6,     6,     4,     3,     3,     0,     3,
       0,     5,     3,     0,     3,     1,     3,     1,     1,     1,
       2,     0,     1,     4,     2,     1,     3,     1,     3,     2,
       1,     1,     4,     3,     2,     1,     4,     0,     1,     3,
       1,     3,     2,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     4,     2,     2,     0,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     0,
       1,     0,     2,     1,     2,     3,     2,     3,     4,     3,
       3,     3,     2,     3,     2,     3,     0,     3,     1,     4,
       1,     0,     1,     0,     2,     1,     3,     2,     3,     0,
       3,     2,     4,     2,     5,     0,     1,     2,     1,     2,
       7,     4,     1,     0,     2,     3,     0,     3,     0,     3,
       0,     2,     4,     2,     2,     3,     1,     0,     1,     1,
       5,     4,     3,     2,     1,     1,     5,     4,     3,     2,
       1,     3,     2,     1,     2,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 55 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=new PrintNode(0); pool.add((yyval.node));}
#line 1916 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 56 "parse.y" /* yacc.c:1646  */
    { 
	         if((yyvsp[0].node)) (yyvsp[0].node)->eval();
			 else
			 std::cout<<" no eval()"<<std::endl;

			}
#line 1927 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 72 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1933 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 73 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 1939 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 84 "parse.y" /* yacc.c:1646  */
    {
	(yyval.node)=new FuncNode((yyvsp[-3].id), (yyvsp[0].node));
	pool.add((yyval.node));
	}
#line 1948 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 90 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 1954 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 91 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 1960 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 106 "parse.y" /* yacc.c:1646  */
    {delete [] (yyvsp[0].id);}
#line 1966 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 110 "parse.y" /* yacc.c:1646  */
    {delete [] (yyvsp[-1].id);}
#line 1972 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 111 "parse.y" /* yacc.c:1646  */
    {delete [] (yyvsp[0].id);}
#line 1978 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 118 "parse.y" /* yacc.c:1646  */
    {delete [] (yyvsp[0].id);}
#line 1984 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 130 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1990 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 131 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 1996 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 134 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-3].node);}
#line 2002 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 135 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-2].node);}
#line 2008 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 142 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node); }
#line 2014 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 143 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node); }
#line 2020 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 144 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2026 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 145 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2032 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 146 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2038 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 147 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2044 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 148 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2050 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 149 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2056 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 150 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2062 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 154 "parse.y" /* yacc.c:1646  */
    {
							  if((yyvsp[-2].node) && (yyvsp[0].node))
							   {   
							   switch((yyvsp[-1].intNumber))
							    {
							        case 1: 
								         {
								         Node * tp;
								         tp = new AddBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
								         (yyvsp[-2].node) = new AsgBinaryNode((yyvsp[-2].node), tp);
								         //delete [] tp;
								         //($$)->eval()->print();
								         pool.add((yyvsp[-2].node));
								         pool.add(tp);
								         }  
								         break; 
								         
								    case 2:
								         {
								         Node * tp;
								         tp= new SubBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
								         (yyvsp[-2].node) = new AsgBinaryNode((yyvsp[-2].node), tp);
								         //($$)->eval()->print();
								         pool.add((yyvsp[-2].node));
								         pool.add(tp);
								         } 
								         break;
								    
								    case 3:
								         {
								         Node * tp;
								         tp= new MulBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
								         (yyvsp[-2].node) = new AsgBinaryNode((yyvsp[-2].node), tp);
								         //($$)->eval()->print();
								         pool.add((yyvsp[-2].node));
								         pool.add(tp);
								         }
								         break;
								        
								    case 4:
								         {
								         Node * tp;
								         tp= new DivBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
								         (yyvsp[-2].node) = new AsgBinaryNode((yyvsp[-2].node), tp);
								         //($$)->eval()->print();
								         pool.add((yyvsp[-2].node));
								         pool.add(tp);
								         }
								         break;
								    case 5:
								         {
								         Node * tp;
								         tp= new PctBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
								         (yyvsp[-2].node) = new AsgBinaryNode((yyvsp[-2].node), tp);
								         //($$)->eval()->print();
								         pool.add((yyvsp[-2].node));
								         pool.add(tp);
								         }
								         break;
								    case 11:
								         {
								         Node * tp;
								         tp= new DbStarBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
								         (yyvsp[-2].node) = new AsgBinaryNode((yyvsp[-2].node), tp);
								         //($$)->eval()->print();
								         pool.add((yyvsp[-2].node));
								         pool.add(tp);
								         }
								         break;
								    case 12:
								         {
								         Node * tp;
								         tp= new DbSlashBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
								         (yyvsp[-2].node) = new AsgBinaryNode((yyvsp[-2].node), tp);
								         //($$)->eval()->print();
								         pool.add((yyvsp[-2].node));
								         pool.add(tp);
								         }
								         break;
								  }
							   }
							  }
#line 2149 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 238 "parse.y" /* yacc.c:1646  */
    { 
						  if((yyvsp[0].node))
						  {
						  (yyval.node) = new AsgBinaryNode((yyvsp[-1].node), (yyvsp[0].node));
             			  pool.add((yyval.node));
						 // ($$)->eval()->print();

						  } 
						  else
					      {
					      (yyval.node) = (yyvsp[-1].node);
					      if((yyvsp[-1].node)) ((yyval.node))->eval()->print();
					      }
						
					    }
#line 2169 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 256 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2175 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 257 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2181 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 262 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2187 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 267 "parse.y" /* yacc.c:1646  */
    {
                                 if((yyvsp[0].node))
                                 {
                                 (yyval.node)=new AsgBinaryNode((yyvsp[-1].node),(yyvsp[0].node));
                                 pool.add((yyval.node));
                                 }
                                 else (yyval.node)=(yyvsp[-1].node);

                                 }
#line 2201 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 276 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2207 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 281 "parse.y" /* yacc.c:1646  */
    {(yyval.intNumber)=1;}
#line 2213 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 282 "parse.y" /* yacc.c:1646  */
    {(yyval.intNumber)=2;}
#line 2219 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 283 "parse.y" /* yacc.c:1646  */
    {(yyval.intNumber)=3;}
#line 2225 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 284 "parse.y" /* yacc.c:1646  */
    {(yyval.intNumber)=4;}
#line 2231 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 285 "parse.y" /* yacc.c:1646  */
    {(yyval.intNumber)=5;}
#line 2237 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 286 "parse.y" /* yacc.c:1646  */
    {(yyval.intNumber)=0;}
#line 2243 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 287 "parse.y" /* yacc.c:1646  */
    {(yyval.intNumber)=0;}
#line 2249 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 288 "parse.y" /* yacc.c:1646  */
    {(yyval.intNumber)=0;}
#line 2255 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 289 "parse.y" /* yacc.c:1646  */
    {(yyval.intNumber)=0;}
#line 2261 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 290 "parse.y" /* yacc.c:1646  */
    {(yyval.intNumber)=0;}
#line 2267 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 291 "parse.y" /* yacc.c:1646  */
    {(yyval.intNumber)=11;}
#line 2273 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 292 "parse.y" /* yacc.c:1646  */
    {(yyval.intNumber)=12;}
#line 2279 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 295 "parse.y" /* yacc.c:1646  */
    { (yyval.node)=new PrintNode((yyvsp[0].node));
	                   //$2->eval()->print();
	                   }
#line 2287 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 298 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2293 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 301 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2299 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 302 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2305 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 305 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-2].node);}
#line 2311 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 306 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2317 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 323 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2323 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 324 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2329 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 325 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2335 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 326 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2341 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 327 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2347 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 374 "parse.y" /* yacc.c:1646  */
    {delete [] (yyvsp[-2].id); delete [] (yyvsp[0].id);}
#line 2353 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 375 "parse.y" /* yacc.c:1646  */
    {delete [] (yyvsp[0].id);}
#line 2359 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 378 "parse.y" /* yacc.c:1646  */
    {delete [] (yyvsp[0].id);}
#line 2365 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 394 "parse.y" /* yacc.c:1646  */
    {delete [] (yyvsp[0].id);}
#line 2371 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 395 "parse.y" /* yacc.c:1646  */
    {delete [] (yyvsp[0].id);}
#line 2377 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 398 "parse.y" /* yacc.c:1646  */
    {delete [] (yyvsp[-1].id);}
#line 2383 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 401 "parse.y" /* yacc.c:1646  */
    {delete [] (yyvsp[0].id);}
#line 2389 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 409 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2395 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 410 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2401 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 413 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2407 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 414 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2413 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 415 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2419 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 416 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2425 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 417 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2431 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 418 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2437 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 419 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2443 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 420 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2449 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 478 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2455 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 480 "parse.y" /* yacc.c:1646  */
    {
	 (yyval.node)=(yyvsp[-1].node);
	}
#line 2463 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 486 "parse.y" /* yacc.c:1646  */
    {
					(yyval.node)=(yyvsp[-1].node);
					dynamic_cast<SuiteNode *> ((yyval.node))->Insert((yyvsp[0].node));
					}
#line 2472 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 492 "parse.y" /* yacc.c:1646  */
    {
			  (yyval.node)=new SuiteNode();
			  dynamic_cast<SuiteNode *> ((yyval.node))->Insert((yyvsp[0].node));
			  
			  pool.add((yyval.node));
			}
#line 2483 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 516 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);}
#line 2489 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 517 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2495 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 524 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2501 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 525 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2507 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 528 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2513 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 529 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2519 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 532 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2525 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 533 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2531 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 536 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2537 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 537 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2543 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 553 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2549 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 554 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2555 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 557 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2561 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 558 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2567 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 561 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2573 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 562 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2579 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 565 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2585 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 566 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2591 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 573 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node); }
#line 2597 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 574 "parse.y" /* yacc.c:1646  */
    {
										switch((yyvsp[-1].intNumber))
										{
										case 1:
											{
											(yyval.node) = new AddBinaryNode((yyvsp[-2].node), (yyvsp[0].node)); 
											pool.add((yyval.node));
											}
											break;

										
										case 2:
											{
											(yyval.node) = new SubBinaryNode((yyvsp[-2].node), (yyvsp[0].node)); 
											pool.add((yyval.node));
											}
											break;

										}

										}
#line 2623 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 597 "parse.y" /* yacc.c:1646  */
    {(yyval.intNumber)=1;}
#line 2629 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 598 "parse.y" /* yacc.c:1646  */
    {(yyval.intNumber)=2;}
#line 2635 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 601 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2641 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 602 "parse.y" /* yacc.c:1646  */
    {
								switch((yyvsp[-1].intNumber))
								{
								   case 1:
									   {
									   (yyval.node)=new MulBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
									   pool.add((yyval.node));
									   }
                                       break;
								   case 2:
									   {
									   (yyval.node)=new DivBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
									   pool.add((yyval.node));
									   }
									   break;
								   case 3:
									   {
									   (yyval.node)=new PctBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
									   pool.add((yyval.node));
									   }
									   break;
								   case 4:
									   {
									   (yyval.node)=new DbSlashBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
									   pool.add((yyval.node));
									   }
									   break;

								}
	                          }
#line 2676 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 634 "parse.y" /* yacc.c:1646  */
    {(yyval.intNumber)=1;}
#line 2682 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 635 "parse.y" /* yacc.c:1646  */
    {(yyval.intNumber)=2;}
#line 2688 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 636 "parse.y" /* yacc.c:1646  */
    {(yyval.intNumber)=3;}
#line 2694 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 637 "parse.y" /* yacc.c:1646  */
    {(yyval.intNumber)=4;}
#line 2700 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 641 "parse.y" /* yacc.c:1646  */
    { if((yyvsp[0].node))
						{ 
						switch((yyvsp[-1].intNumber))
						  { 
						    case 1:
						        (yyval.node) = (yyvsp[0].node);
						        break;
						    case 2:
						        {
						        (yyval.node) = new UnaryNode ((yyvsp[0].node));
						        pool.add((yyval.node));
						        }
						        break;
						    case 3:
						        {
						        (yyval.node) = new TildeNode ((yyvsp[0].node));
						        pool.add((yyval.node));
						        }
						        break;

						  }

						}
						}
#line 2729 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 665 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2735 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 668 "parse.y" /* yacc.c:1646  */
    {(yyval.intNumber)=1;}
#line 2741 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 669 "parse.y" /* yacc.c:1646  */
    {(yyval.intNumber)=2;}
#line 2747 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 670 "parse.y" /* yacc.c:1646  */
    {(yyval.intNumber)=3;}
#line 2753 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 673 "parse.y" /* yacc.c:1646  */
    {if((yyvsp[-3].node) && (yyvsp[0].node)) 
	                                       { (yyval.node) = new DbStarBinaryNode((yyvsp[-3].node), (yyvsp[0].node)); pool.add((yyval.node));}}
#line 2760 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 675 "parse.y" /* yacc.c:1646  */
    {
			        if((yyvsp[0].node))
			        {
			        std::string name=reinterpret_cast<IdentNode* >((yyvsp[-1].node))->getIdent();
			        (yyval.node)=new CallNode(name);
			        pool.add((yyval.node));		        

			        }
			        else (yyval.node)=(yyvsp[-1].node);
			        }
#line 2775 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 687 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2781 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 688 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2787 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 691 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);}
#line 2793 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 692 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2799 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 693 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2805 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 694 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2811 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 695 "parse.y" /* yacc.c:1646  */
    {(yyval.node) = new IdentNode((yyvsp[0].id)); delete [] (yyvsp[0].id); pool.add((yyval.node));}
#line 2817 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 696 "parse.y" /* yacc.c:1646  */
    {(yyval.node) = new IntLiteral((yyvsp[0].intNumber)); pool.add((yyval.node));}
#line 2823 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 697 "parse.y" /* yacc.c:1646  */
    {(yyval.node) = new FloatLiteral((yyvsp[0].fltNumber)); pool.add((yyval.node)); }
#line 2829 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 698 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2835 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 701 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2841 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 702 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2847 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 705 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2853 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 706 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2859 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 725 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2865 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 726 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-2].node);}
#line 2871 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 733 "parse.y" /* yacc.c:1646  */
    {
								if((yyvsp[-1].node)) (yyval.node)=(yyvsp[-1].node);
								else (yyval.node)=new IdentNode("no arugment");
								pool.add((yyval.node));
							}
#line 2881 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 738 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2887 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 739 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0; delete [] (yyvsp[0].id);}
#line 2893 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 795 "parse.y" /* yacc.c:1646  */
    {delete [] (yyvsp[-5].id);}
#line 2899 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 796 "parse.y" /* yacc.c:1646  */
    {delete [] (yyvsp[-2].id);}
#line 2905 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 803 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node);}
#line 2911 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 818 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);}
#line 2917 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 819 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2923 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 820 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=0;}
#line 2929 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 823 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node);}
#line 2935 "parse.tab.c" /* yacc.c:1646  */
    break;


#line 2939 "parse.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
  return yyresult;
}
#line 867 "parse.y" /* yacc.c:1906  */


#include <stdio.h>
void yyerror (const char *s)
{
    if(yylloc.first_line > 0)	{
        fprintf (stderr, "%d.%d-%d.%d:", yylloc.first_line, yylloc.first_column,
	                                     yylloc.last_line,  yylloc.last_column);
    }
    fprintf(stderr, " %s with [%s]\n", s, yytext);
}

