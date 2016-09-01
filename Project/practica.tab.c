/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "practica.y" /* yacc.c:339  */

  #include <math.h>
  #include "list.h"
#line 7 "practica.y" /* yacc.c:339  */

  #define  MX 1000
  
  list * table;  
  char ans[MX];

  char * concat(char * a, char * b) {
    strcpy(ans, ""); 
    strcat(ans,  a); 
    strcat(ans,  b); 
    return strdup(ans);    
  }

  char * repeat(char * a, int    n) {
    strcpy(ans, ""); 
    int  i = 0;
    for (i = 0; i < n; i++)
      strcat(ans,   a);
    return strdup(ans);
  }

  char * remstr(char * a, char * b) {
    char *  x = strstr(a, b);
    if (!x) return strdup(a);
    int k = x - a, i = 0; 
    int m =    strlen(b); 
    strcpy(ans, "");
    for (i = 0; i <= k; i++) 
      ans[i]   =  a[i];
    ans[i - 1] =  '\0';
    strcat(ans, x + m);
    return strdup(ans);
  }


#line 106 "practica.tab.c" /* yacc.c:339  */

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

/* In a future release of Bison, this section will be replaced
   by #include "practica.tab.h".  */
#ifndef YY_YY_PRACTICA_TAB_H_INCLUDED
# define YY_YY_PRACTICA_TAB_H_INCLUDED
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
    integerValue = 258,
    doubleValue = 259,
    stringValue = 260,
    integerID = 261,
    undeclrID = 262,
    doubleID = 263,
    stringID = 264,
    typeInteger = 265,
    typeString = 266,
    typeDouble = 267,
    umin = 268
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 43 "practica.y" /* yacc.c:355  */

  int   Integer;
  double Double;
  char * String;

#line 166 "practica.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PRACTICA_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 181 "practica.tab.c" /* yacc.c:358  */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   574

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  25
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  207
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  312

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   268

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      22,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    17,     2,     2,
      19,    24,    15,    13,     2,    14,     2,    16,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    23,
       2,    21,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    20,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    18
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    79,    79,    80,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    94,    95,    96,    97,    98,    99,
     100,   101,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   141,   142,   143,   144,   145,   146,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   289,   290,   291,   292,   293,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     313,   314,   315,   316,   317,   318,   319,   320
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "integerValue", "doubleValue",
  "stringValue", "integerID", "undeclrID", "doubleID", "stringID",
  "typeInteger", "typeString", "typeDouble", "'+'", "'-'", "'*'", "'/'",
  "'%'", "umin", "'('", "'^'", "'='", "'\\n'", "';'", "')'", "$accept",
  "input", "line", "integerExp", "doubleExp", "stringExp", "invExp",
  "typeError", "redeclr", "assign", "assignError", "declr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,    43,    45,    42,    47,    37,   268,    40,
      94,    61,    10,    59,    41
};
# endif

#define YYPACT_NINF -26

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-26)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -26,    29,   -26,   -26,   -26,   -26,   -19,    -7,    -6,    21,
      46,   125,   245,   179,   179,   -26,   -26,   243,   301,   316,
     327,   -12,     0,     8,    26,    40,   236,   179,   236,   236,
      23,    49,    50,    57,    58,    65,    71,    75,    78,    79,
      86,    87,    93,   133,   134,    88,   154,   157,   179,   142,
     153,     4,   156,    -8,    74,    89,   143,   179,   179,   179,
     179,   179,   179,   -26,   170,   179,   179,   179,   179,   179,
     179,   -26,   172,   179,   179,   179,   179,   179,   179,   -26,
     173,   179,   179,   179,   179,   179,   179,   -26,   174,   -26,
     175,   -26,   177,   -26,   184,   185,   -26,   193,   155,   188,
     373,   -26,   -26,   -26,   -26,   -26,   -26,   155,   188,   373,
     -26,   -26,   155,   188,   373,   -26,   -26,   179,   236,   179,
     179,   179,   236,   179,   179,   179,   236,   179,   179,   179,
     179,   179,   195,   200,   202,     4,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   -26,   -26,   -26,   -26,    30,    95,
       4,   266,    30,    95,     4,   266,   142,   153,     4,   156,
     142,   153,     4,   156,   142,   381,     4,   156,   -26,   -26,
       4,   -26,   -26,    30,    95,     4,   266,    30,    95,     4,
     266,   142,   153,     4,   156,   142,   153,     4,   156,   389,
       4,   156,   -26,   -26,     4,   -26,   -26,   389,   381,   359,
     266,   389,   381,   359,   266,   142,   381,   156,   389,   381,
     156,   389,   381,   156,   389,   381,   -26,   -26,    30,    95,
     359,   266,    30,    95,   359,   266,   142,   153,   204,   156,
     142,   153,   204,   156,   142,   153,   204,   156,   -26,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   389,   381,
       4,   416,   155,   188,   373,   -26,   -26,   389,   381,     4,
     416,   389,   381,     4,   416,   389,   381,     4,   416,   155,
     188,   373,   -26,   -26,   389,   381,     4,   416,   389,   381,
       4,   416,   389,   381,     4,   416,   155,   188,   373,   -26,
     -26,   389,   381,     4,   416,   389,   381,     4,   416,   179,
     179,   179
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    22,    32,    51,    31,    57,    50,    56,
       0,     0,     0,     0,     0,     4,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     144,   205,   143,   142,   138,   207,   137,   136,   141,   206,
     140,   139,    31,    50,    56,     0,     0,     0,     0,    29,
      48,   135,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,     0,     0,     0,     0,     0,     0,
       0,    15,     0,     0,     0,     0,     0,     0,     0,    16,
       0,     0,     0,     0,     0,     0,     0,    19,     0,    20,
       0,    21,     0,    18,     0,     0,    17,     0,   182,   184,
     189,   108,   192,   105,   107,   106,   111,   185,   183,   188,
     109,   191,   186,   187,   181,   110,   190,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    30,    49,    55,   101,    23,    43,
     117,    58,    24,    44,   118,    59,    25,    45,   119,    60,
      26,    46,   120,    61,    27,     0,   121,    62,    28,    47,
     122,    63,     5,    38,    33,   129,    70,    39,    34,   130,
      71,    40,    35,   131,    72,    41,    36,   132,    73,     0,
     133,    74,    42,    37,   134,    75,     6,   112,   123,    52,
      82,   113,   124,    54,    83,    53,   125,    84,   114,   126,
      85,   115,   127,    86,   116,   128,    87,     7,    64,    76,
      88,    94,    65,    77,    89,    95,    66,    78,    90,    96,
      67,    79,    91,    97,    68,    80,    92,    98,    69,    81,
      93,    99,    10,    11,    12,     9,    13,     8,   177,   178,
     179,   180,   200,   202,   195,   102,   198,   173,   174,   175,
     176,   169,   170,   171,   172,   153,   154,   155,   156,   193,
     194,   204,   104,   197,   149,   150,   151,   152,   145,   146,
     147,   148,   165,   166,   167,   168,   203,   201,   196,   103,
     199,   161,   162,   163,   164,   157,   158,   159,   160,     0,
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -26,   -26,   -26,   152,   427,   299,    -1,   -25,   -26,   -26,
     -26,   -26
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    16,   199,   175,   135,    52,    21,    22,    23,
      24,    25
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      20,   102,    26,   111,   116,   136,   137,   138,   139,   140,
      89,    90,   141,    56,    27,    28,   154,   148,   149,   150,
     151,   152,    91,    92,   153,   101,   106,   110,   115,     2,
      93,    94,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    29,    13,   117,   138,   139,   140,    14,    95,
     141,    15,    30,    31,    32,    33,   161,   165,   169,   173,
     177,   181,    96,    97,   186,   190,   194,   198,   201,   205,
     118,   119,   210,   214,   217,   220,   223,   226,   120,   121,
     231,   235,   239,   243,   247,   251,   122,   142,   143,   144,
     145,   146,   123,   266,   147,   132,   124,   283,   155,   125,
     126,   300,   148,   149,   150,   151,   152,   127,   128,   153,
     144,   145,   146,   156,   129,   147,   261,   265,   270,   274,
     278,   282,   287,   291,   295,   299,   304,   308,   101,   110,
     115,    34,    35,    36,    37,   161,   165,   169,   173,   177,
     181,   186,   190,   194,   198,   201,   205,   210,   214,   217,
     220,   223,   226,    17,   130,   131,    81,    82,    83,    84,
      85,   133,   141,    86,   134,    49,    53,   157,    57,    58,
      59,    60,    61,   147,     0,    62,    86,     0,    98,   103,
     107,   112,     3,     4,     5,    42,     7,    43,    44,    45,
      46,    47,   182,    48,   206,   227,   252,   253,    14,   254,
      49,    65,    66,    67,    68,    69,   255,   256,    70,   158,
     162,   166,   170,   174,   178,   257,   309,   183,   187,   191,
     195,   310,   202,   311,   153,   207,   211,   215,   218,   221,
     224,     0,     0,   228,   232,   236,   240,   244,   248,     3,
       4,     5,    42,     7,    43,    44,    45,    46,    47,     0,
      13,    38,    39,    40,    41,    14,    57,    58,    59,    60,
      61,     0,     0,    62,     0,    63,    64,     0,     0,   258,
     262,   267,   271,   275,   279,   284,   288,   292,   296,   301,
     305,    83,    84,    85,     0,     0,    86,     0,   158,   162,
     166,   170,   174,   178,   183,   187,   191,   195,     0,   202,
      19,     0,   215,     0,     0,     0,     0,     0,   265,   282,
     299,     0,    51,    55,    65,    66,    67,    68,    69,     0,
       0,    70,     0,    71,    72,   100,   105,   109,   114,    73,
      74,    75,    76,    77,     0,     0,    78,     0,    79,    80,
      81,    82,    83,    84,    85,     0,     0,    86,     0,    87,
      88,     0,     0,     0,     0,     0,   160,   164,   168,   172,
     176,   180,     0,     0,   185,   189,   193,   197,   200,   204,
       0,     0,   209,   213,   150,   151,   152,     0,     0,   153,
     230,   234,   238,   242,   246,   250,    73,    74,    75,    76,
      77,     0,     0,    78,   142,   143,   144,   145,   146,     0,
       0,   147,   136,   137,   138,   139,   140,     0,     0,   141,
       0,     0,     0,     0,     0,     0,   260,   264,   269,   273,
     277,   281,   286,   290,   294,   298,   303,   307,    18,    81,
      82,    83,    84,    85,     0,     0,    86,     0,     0,     0,
      50,    54,     0,     0,     0,     0,     0,   209,   213,     0,
       0,     0,     0,    99,   104,   108,   113,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,   159,   163,   167,   171,     0,   179,
       0,     0,   184,   188,   192,   196,     0,   203,     0,     0,
     208,   212,   216,   219,   222,   225,     0,     0,   229,   233,
     237,   241,   245,   249,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   259,   263,   268,   272,   276,   280,
     285,   289,   293,   297,   302,   306,     0,     0,     0,     0,
       0,     0,     0,   159,   163,   167,   171,     0,   179,   184,
     188,   192,   196,     0,   203
};

static const yytype_int16 yycheck[] =
{
       1,    26,    21,    28,    29,    13,    14,    15,    16,    17,
      22,    23,    20,    14,    21,    21,    24,    13,    14,    15,
      16,    17,    22,    23,    20,    26,    27,    28,    29,     0,
      22,    23,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    21,    14,    21,    15,    16,    17,    19,    23,
      20,    22,     6,     7,     8,     9,    57,    58,    59,    60,
      61,    62,    22,    23,    65,    66,    67,    68,    69,    70,
      21,    21,    73,    74,    75,    76,    77,    78,    21,    21,
      81,    82,    83,    84,    85,    86,    21,    13,    14,    15,
      16,    17,    21,   118,    20,     7,    21,   122,    24,    21,
      21,   126,    13,    14,    15,    16,    17,    21,    21,    20,
      15,    16,    17,    24,    21,    20,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,     6,     7,     8,     9,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,     1,    21,    21,    13,    14,    15,    16,
      17,     7,    20,    20,     7,    13,    14,    24,    13,    14,
      15,    16,    17,    20,    -1,    20,    20,    -1,    26,    27,
      28,    29,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    22,    14,    22,    22,    22,    22,    19,    22,
      48,    13,    14,    15,    16,    17,    22,    22,    20,    57,
      58,    59,    60,    61,    62,    22,    21,    65,    66,    67,
      68,    21,    70,    21,    20,    73,    74,    75,    76,    77,
      78,    -1,    -1,    81,    82,    83,    84,    85,    86,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      14,     6,     7,     8,     9,    19,    13,    14,    15,    16,
      17,    -1,    -1,    20,    -1,    22,    23,    -1,    -1,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    15,    16,    17,    -1,    -1,    20,    -1,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,    -1,   147,
       1,    -1,   150,    -1,    -1,    -1,    -1,    -1,   309,   310,
     311,    -1,    13,    14,    13,    14,    15,    16,    17,    -1,
      -1,    20,    -1,    22,    23,    26,    27,    28,    29,    13,
      14,    15,    16,    17,    -1,    -1,    20,    -1,    22,    23,
      13,    14,    15,    16,    17,    -1,    -1,    20,    -1,    22,
      23,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    -1,    -1,    65,    66,    67,    68,    69,    70,
      -1,    -1,    73,    74,    15,    16,    17,    -1,    -1,    20,
      81,    82,    83,    84,    85,    86,    13,    14,    15,    16,
      17,    -1,    -1,    20,    13,    14,    15,    16,    17,    -1,
      -1,    20,    13,    14,    15,    16,    17,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,     1,    13,
      14,    15,    16,    17,    -1,    -1,    20,    -1,    -1,    -1,
      13,    14,    -1,    -1,    -1,    -1,    -1,   148,   149,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    -1,    62,
      -1,    -1,    65,    66,    67,    68,    -1,    70,    -1,    -1,
      73,    74,    75,    76,    77,    78,    -1,    -1,    81,    82,
      83,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   136,   137,   138,   139,    -1,   141,   142,
     143,   144,   145,    -1,   147
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    26,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    14,    19,    22,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    21,    21,    21,    21,
       6,     7,     8,     9,     6,     7,     8,     9,     6,     7,
       8,     9,     6,     8,     9,    10,    11,    12,    14,    28,
      29,    30,    31,    28,    29,    30,    31,    13,    14,    15,
      16,    17,    20,    22,    23,    13,    14,    15,    16,    17,
      20,    22,    23,    13,    14,    15,    16,    17,    20,    22,
      23,    13,    14,    15,    16,    17,    20,    22,    23,    22,
      23,    22,    23,    22,    23,    23,    22,    23,    28,    29,
      30,    31,    32,    28,    29,    30,    31,    28,    29,    30,
      31,    32,    28,    29,    30,    31,    32,    21,    21,    21,
      21,    21,    21,    21,    21,    21,    21,    21,    21,    21,
      21,    21,     7,     7,     7,    30,    13,    14,    15,    16,
      17,    20,    13,    14,    15,    16,    17,    20,    13,    14,
      15,    16,    17,    20,    24,    24,    24,    24,    28,    29,
      30,    31,    28,    29,    30,    31,    28,    29,    30,    31,
      28,    29,    30,    31,    28,    29,    30,    31,    28,    29,
      30,    31,    22,    28,    29,    30,    31,    28,    29,    30,
      31,    28,    29,    30,    31,    28,    29,    30,    31,    28,
      30,    31,    28,    29,    30,    31,    22,    28,    29,    30,
      31,    28,    29,    30,    31,    28,    29,    31,    28,    29,
      31,    28,    29,    31,    28,    29,    31,    22,    28,    29,
      30,    31,    28,    29,    30,    31,    28,    29,    30,    31,
      28,    29,    30,    31,    28,    29,    30,    31,    28,    29,
      30,    31,    22,    22,    22,    22,    22,    22,    28,    29,
      30,    31,    28,    29,    30,    31,    32,    28,    29,    30,
      31,    28,    29,    30,    31,    28,    29,    30,    31,    28,
      29,    30,    31,    32,    28,    29,    30,    31,    28,    29,
      30,    31,    28,    29,    30,    31,    28,    29,    30,    31,
      32,    28,    29,    30,    31,    28,    29,    30,    31,    21,
      21,    21
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    25,    26,    26,    27,    27,    27,    27,    27,    27,
      27,    27,    27,    27,    27,    27,    27,    27,    27,    27,
      27,    27,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    30,    30,    30,    30,    30,    30,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    32,    32,    32,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    32,    33,    33,    33,    33,
      33,    33,    33,    33,    33,    33,    33,    33,    33,    33,
      33,    33,    33,    33,    33,    33,    33,    33,    33,    33,
      33,    33,    33,    33,    33,    33,    33,    33,    33,    33,
      33,    33,    33,    33,    33,    33,    33,    33,    33,    33,
      33,    34,    34,    34,    34,    34,    35,    35,    35,    35,
      35,    35,    35,    35,    35,    35,    35,    35,    35,    35,
      36,    36,    36,    36,    36,    36,    36,    36
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     3,     3,     3,     3,     3,     3,     2,
       3,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       1,     1,     3,     3,     3,     3,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     4,     4,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     2,     2,     2
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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                                              );
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:
#line 84 "practica.y" /* yacc.c:1646  */
    { printf("ans = %d\n",   (yyvsp[-2].Integer));      }
#line 1522 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 85 "practica.y" /* yacc.c:1646  */
    { printf("ans = %f\n",   (yyvsp[-2].Double));      }
#line 1528 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 86 "practica.y" /* yacc.c:1646  */
    { printf("ans = '%s'\n", (yyvsp[-2].String));      }
#line 1534 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 87 "practica.y" /* yacc.c:1646  */
    { printf("Definición  exitosa\n"); }
#line 1540 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 88 "practica.y" /* yacc.c:1646  */
    { printf("Asignación  exitosa\n"); }
#line 1546 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 89 "practica.y" /* yacc.c:1646  */
    { printf("Expresión  inválida\n"); }
#line 1552 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 90 "practica.y" /* yacc.c:1646  */
    { printf("Tipos   incorrectos\n"); }
#line 1558 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 91 "practica.y" /* yacc.c:1646  */
    { printf("Variable  existente\n"); }
#line 1564 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 92 "practica.y" /* yacc.c:1646  */
    { printf("Error en asignación\n"); }
#line 1570 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 94 "practica.y" /* yacc.c:1646  */
    { printf("Error falta ;\n"); }
#line 1576 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 95 "practica.y" /* yacc.c:1646  */
    { printf("Error falta ;\n"); }
#line 1582 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 96 "practica.y" /* yacc.c:1646  */
    { printf("Error falta ;\n"); }
#line 1588 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 97 "practica.y" /* yacc.c:1646  */
    { printf("Error falta ;\n"); }
#line 1594 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 98 "practica.y" /* yacc.c:1646  */
    { printf("Error falta ;\n"); }
#line 1600 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 99 "practica.y" /* yacc.c:1646  */
    { printf("Error falta ;\n"); }
#line 1606 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 100 "practica.y" /* yacc.c:1646  */
    { printf("Error falta ;\n"); }
#line 1612 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 101 "practica.y" /* yacc.c:1646  */
    { printf("Error falta ;\n"); }
#line 1618 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 106 "practica.y" /* yacc.c:1646  */
    { (yyval.Integer) =  (yyvsp[0].Integer);          }
#line 1624 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 107 "practica.y" /* yacc.c:1646  */
    { (yyval.Integer) =  (yyvsp[-2].Integer) + (yyvsp[0].Integer);     }
#line 1630 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 108 "practica.y" /* yacc.c:1646  */
    { (yyval.Integer) =  (yyvsp[-2].Integer) - (yyvsp[0].Integer);     }
#line 1636 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 109 "practica.y" /* yacc.c:1646  */
    { (yyval.Integer) =  (yyvsp[-2].Integer) * (yyvsp[0].Integer);     }
#line 1642 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 110 "practica.y" /* yacc.c:1646  */
    { (yyval.Integer) =  (yyvsp[-2].Integer) / (yyvsp[0].Integer);     }
#line 1648 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 111 "practica.y" /* yacc.c:1646  */
    { (yyval.Integer) =  (yyvsp[-2].Integer) % (yyvsp[0].Integer);     }
#line 1654 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 112 "practica.y" /* yacc.c:1646  */
    { (yyval.Integer) =  pow((yyvsp[-2].Integer), (yyvsp[0].Integer)); }
#line 1660 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 113 "practica.y" /* yacc.c:1646  */
    { (yyval.Integer) = -(yyvsp[0].Integer);          }
#line 1666 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 114 "practica.y" /* yacc.c:1646  */
    { (yyval.Integer) =  (yyvsp[-1].Integer);          }
#line 1672 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 115 "practica.y" /* yacc.c:1646  */
    { (yyval.Integer) =  atoi(search(table, (yyvsp[0].String))->data); }
#line 1678 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 119 "practica.y" /* yacc.c:1646  */
    { (yyval.Double) =  (yyvsp[0].Double);          }
#line 1684 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 120 "practica.y" /* yacc.c:1646  */
    { (yyval.Double) =  (yyvsp[-2].Double) + (yyvsp[0].Double);     }
#line 1690 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 121 "practica.y" /* yacc.c:1646  */
    { (yyval.Double) =  (yyvsp[-2].Double) - (yyvsp[0].Double);     }
#line 1696 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 122 "practica.y" /* yacc.c:1646  */
    { (yyval.Double) =  (yyvsp[-2].Double) * (yyvsp[0].Double);     }
#line 1702 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 123 "practica.y" /* yacc.c:1646  */
    { (yyval.Double) =  (yyvsp[-2].Double) / (yyvsp[0].Double);     }
#line 1708 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 124 "practica.y" /* yacc.c:1646  */
    { (yyval.Double) =  pow((yyvsp[-2].Double), (yyvsp[0].Double)); }
#line 1714 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 125 "practica.y" /* yacc.c:1646  */
    { (yyval.Double) =  (yyvsp[-2].Double) + (yyvsp[0].Integer);     }
#line 1720 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 126 "practica.y" /* yacc.c:1646  */
    { (yyval.Double) =  (yyvsp[-2].Double) - (yyvsp[0].Integer);     }
#line 1726 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 127 "practica.y" /* yacc.c:1646  */
    { (yyval.Double) =  (yyvsp[-2].Double) * (yyvsp[0].Integer);     }
#line 1732 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 128 "practica.y" /* yacc.c:1646  */
    { (yyval.Double) =  (yyvsp[-2].Double) / (yyvsp[0].Integer);     }
#line 1738 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 129 "practica.y" /* yacc.c:1646  */
    { (yyval.Double) =  pow((yyvsp[-2].Double), (yyvsp[0].Integer)); }
#line 1744 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 130 "practica.y" /* yacc.c:1646  */
    { (yyval.Double) =  (yyvsp[-2].Integer) + (yyvsp[0].Double);     }
#line 1750 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 131 "practica.y" /* yacc.c:1646  */
    { (yyval.Double) =  (yyvsp[-2].Integer) - (yyvsp[0].Double);     }
#line 1756 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 132 "practica.y" /* yacc.c:1646  */
    { (yyval.Double) =  (yyvsp[-2].Integer) * (yyvsp[0].Double);     }
#line 1762 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 133 "practica.y" /* yacc.c:1646  */
    { (yyval.Double) =  (yyvsp[-2].Integer) / (yyvsp[0].Double);     }
#line 1768 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 134 "practica.y" /* yacc.c:1646  */
    { (yyval.Double) =  pow((yyvsp[-2].Integer), (yyvsp[0].Double)); }
#line 1774 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 135 "practica.y" /* yacc.c:1646  */
    { (yyval.Double) = -(yyvsp[0].Double);          }
#line 1780 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 136 "practica.y" /* yacc.c:1646  */
    { (yyval.Double) =  (yyvsp[-1].Double);          }
#line 1786 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 137 "practica.y" /* yacc.c:1646  */
    { (yyval.Double) =  atof(search(table, (yyvsp[0].String))->data); }
#line 1792 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 141 "practica.y" /* yacc.c:1646  */
    { (yyval.String) = (yyvsp[0].String);             }
#line 1798 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 142 "practica.y" /* yacc.c:1646  */
    { (yyval.String) = concat((yyvsp[-2].String), (yyvsp[0].String)); }
#line 1804 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 143 "practica.y" /* yacc.c:1646  */
    { (yyval.String) = repeat((yyvsp[-2].String), (yyvsp[0].Integer)); }
#line 1810 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 144 "practica.y" /* yacc.c:1646  */
    { (yyval.String) = remstr((yyvsp[-2].String), (yyvsp[0].String)); }
#line 1816 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 145 "practica.y" /* yacc.c:1646  */
    { (yyval.String) = (yyvsp[-1].String);             }
#line 1822 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 146 "practica.y" /* yacc.c:1646  */
    { (yyval.String) = search(table,  (yyvsp[0].String))->data; }
#line 1828 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 150 "practica.y" /* yacc.c:1646  */
    { printf("Variable '%s' no existe\n", (yyvsp[0].String));  }
#line 1834 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 151 "practica.y" /* yacc.c:1646  */
    {  }
#line 1840 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 152 "practica.y" /* yacc.c:1646  */
    {  }
#line 1846 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 153 "practica.y" /* yacc.c:1646  */
    {  }
#line 1852 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 154 "practica.y" /* yacc.c:1646  */
    {  }
#line 1858 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 155 "practica.y" /* yacc.c:1646  */
    {  }
#line 1864 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 156 "practica.y" /* yacc.c:1646  */
    {  }
#line 1870 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 157 "practica.y" /* yacc.c:1646  */
    {  }
#line 1876 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 158 "practica.y" /* yacc.c:1646  */
    {  }
#line 1882 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 159 "practica.y" /* yacc.c:1646  */
    {  }
#line 1888 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 160 "practica.y" /* yacc.c:1646  */
    {  }
#line 1894 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 161 "practica.y" /* yacc.c:1646  */
    {  }
#line 1900 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 162 "practica.y" /* yacc.c:1646  */
    {  }
#line 1906 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 163 "practica.y" /* yacc.c:1646  */
    {  }
#line 1912 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 164 "practica.y" /* yacc.c:1646  */
    {  }
#line 1918 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 165 "practica.y" /* yacc.c:1646  */
    {  }
#line 1924 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 166 "practica.y" /* yacc.c:1646  */
    {  }
#line 1930 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 167 "practica.y" /* yacc.c:1646  */
    {  }
#line 1936 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 168 "practica.y" /* yacc.c:1646  */
    {  }
#line 1942 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 169 "practica.y" /* yacc.c:1646  */
    {  }
#line 1948 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 170 "practica.y" /* yacc.c:1646  */
    {  }
#line 1954 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 171 "practica.y" /* yacc.c:1646  */
    {  }
#line 1960 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 172 "practica.y" /* yacc.c:1646  */
    {  }
#line 1966 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 173 "practica.y" /* yacc.c:1646  */
    {  }
#line 1972 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 174 "practica.y" /* yacc.c:1646  */
    {  }
#line 1978 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 175 "practica.y" /* yacc.c:1646  */
    {  }
#line 1984 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 176 "practica.y" /* yacc.c:1646  */
    {  }
#line 1990 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 177 "practica.y" /* yacc.c:1646  */
    {  }
#line 1996 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 178 "practica.y" /* yacc.c:1646  */
    {  }
#line 2002 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 179 "practica.y" /* yacc.c:1646  */
    {  }
#line 2008 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 180 "practica.y" /* yacc.c:1646  */
    {  }
#line 2014 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 181 "practica.y" /* yacc.c:1646  */
    {  }
#line 2020 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 182 "practica.y" /* yacc.c:1646  */
    {  }
#line 2026 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 183 "practica.y" /* yacc.c:1646  */
    {  }
#line 2032 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 184 "practica.y" /* yacc.c:1646  */
    {  }
#line 2038 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 185 "practica.y" /* yacc.c:1646  */
    {  }
#line 2044 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 186 "practica.y" /* yacc.c:1646  */
    {  }
#line 2050 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 187 "practica.y" /* yacc.c:1646  */
    {  }
#line 2056 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 188 "practica.y" /* yacc.c:1646  */
    {  }
#line 2062 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 189 "practica.y" /* yacc.c:1646  */
    {  }
#line 2068 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 190 "practica.y" /* yacc.c:1646  */
    {  }
#line 2074 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 191 "practica.y" /* yacc.c:1646  */
    {  }
#line 2080 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 192 "practica.y" /* yacc.c:1646  */
    {  }
#line 2086 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 193 "practica.y" /* yacc.c:1646  */
    {  }
#line 2092 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 194 "practica.y" /* yacc.c:1646  */
    {  }
#line 2098 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 195 "practica.y" /* yacc.c:1646  */
    {  }
#line 2104 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 196 "practica.y" /* yacc.c:1646  */
    {  }
#line 2110 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 197 "practica.y" /* yacc.c:1646  */
    {  }
#line 2116 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 198 "practica.y" /* yacc.c:1646  */
    {  }
#line 2122 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 199 "practica.y" /* yacc.c:1646  */
    {  }
#line 2128 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 200 "practica.y" /* yacc.c:1646  */
    {  }
#line 2134 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 201 "practica.y" /* yacc.c:1646  */
    {  }
#line 2140 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 202 "practica.y" /* yacc.c:1646  */
    {  }
#line 2146 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 203 "practica.y" /* yacc.c:1646  */
    {  }
#line 2152 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 204 "practica.y" /* yacc.c:1646  */
    {  }
#line 2158 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 214 "practica.y" /* yacc.c:1646  */
    {  }
#line 2164 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 215 "practica.y" /* yacc.c:1646  */
    {  }
#line 2170 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 216 "practica.y" /* yacc.c:1646  */
    {  }
#line 2176 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 217 "practica.y" /* yacc.c:1646  */
    {  }
#line 2182 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 218 "practica.y" /* yacc.c:1646  */
    {  }
#line 2188 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 219 "practica.y" /* yacc.c:1646  */
    {  }
#line 2194 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 220 "practica.y" /* yacc.c:1646  */
    {  }
#line 2200 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 221 "practica.y" /* yacc.c:1646  */
    {  }
#line 2206 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 222 "practica.y" /* yacc.c:1646  */
    {  }
#line 2212 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 223 "practica.y" /* yacc.c:1646  */
    {  }
#line 2218 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 224 "practica.y" /* yacc.c:1646  */
    {  }
#line 2224 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 225 "practica.y" /* yacc.c:1646  */
    {  }
#line 2230 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 226 "practica.y" /* yacc.c:1646  */
    {  }
#line 2236 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 227 "practica.y" /* yacc.c:1646  */
    {  }
#line 2242 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 228 "practica.y" /* yacc.c:1646  */
    {  }
#line 2248 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 229 "practica.y" /* yacc.c:1646  */
    {  }
#line 2254 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 230 "practica.y" /* yacc.c:1646  */
    {  }
#line 2260 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 231 "practica.y" /* yacc.c:1646  */
    {  }
#line 2266 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 232 "practica.y" /* yacc.c:1646  */
    {  }
#line 2272 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 233 "practica.y" /* yacc.c:1646  */
    {  }
#line 2278 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 234 "practica.y" /* yacc.c:1646  */
    {  }
#line 2284 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 235 "practica.y" /* yacc.c:1646  */
    {  }
#line 2290 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 236 "practica.y" /* yacc.c:1646  */
    {  }
#line 2296 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 237 "practica.y" /* yacc.c:1646  */
    {  }
#line 2302 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 241 "practica.y" /* yacc.c:1646  */
    {  }
#line 2308 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 242 "practica.y" /* yacc.c:1646  */
    {  }
#line 2314 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 243 "practica.y" /* yacc.c:1646  */
    {  }
#line 2320 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 244 "practica.y" /* yacc.c:1646  */
    {  }
#line 2326 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 245 "practica.y" /* yacc.c:1646  */
    {  }
#line 2332 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 246 "practica.y" /* yacc.c:1646  */
    {  }
#line 2338 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 247 "practica.y" /* yacc.c:1646  */
    {  }
#line 2344 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 248 "practica.y" /* yacc.c:1646  */
    {  }
#line 2350 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 249 "practica.y" /* yacc.c:1646  */
    {  }
#line 2356 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 250 "practica.y" /* yacc.c:1646  */
    {  }
#line 2362 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 251 "practica.y" /* yacc.c:1646  */
    {  }
#line 2368 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 252 "practica.y" /* yacc.c:1646  */
    {  }
#line 2374 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 253 "practica.y" /* yacc.c:1646  */
    {  }
#line 2380 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 254 "practica.y" /* yacc.c:1646  */
    {  }
#line 2386 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 255 "practica.y" /* yacc.c:1646  */
    {  }
#line 2392 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 256 "practica.y" /* yacc.c:1646  */
    {  }
#line 2398 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 257 "practica.y" /* yacc.c:1646  */
    {  }
#line 2404 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 258 "practica.y" /* yacc.c:1646  */
    {  }
#line 2410 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 259 "practica.y" /* yacc.c:1646  */
    {  }
#line 2416 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 260 "practica.y" /* yacc.c:1646  */
    {  }
#line 2422 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 261 "practica.y" /* yacc.c:1646  */
    {  }
#line 2428 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 262 "practica.y" /* yacc.c:1646  */
    {  }
#line 2434 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 263 "practica.y" /* yacc.c:1646  */
    {  }
#line 2440 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 264 "practica.y" /* yacc.c:1646  */
    {  }
#line 2446 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 265 "practica.y" /* yacc.c:1646  */
    {  }
#line 2452 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 266 "practica.y" /* yacc.c:1646  */
    {  }
#line 2458 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 267 "practica.y" /* yacc.c:1646  */
    {  }
#line 2464 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 268 "practica.y" /* yacc.c:1646  */
    {  }
#line 2470 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 269 "practica.y" /* yacc.c:1646  */
    {  }
#line 2476 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 270 "practica.y" /* yacc.c:1646  */
    {  }
#line 2482 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 271 "practica.y" /* yacc.c:1646  */
    {  }
#line 2488 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 272 "practica.y" /* yacc.c:1646  */
    {  }
#line 2494 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 273 "practica.y" /* yacc.c:1646  */
    {  }
#line 2500 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 274 "practica.y" /* yacc.c:1646  */
    {  }
#line 2506 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 275 "practica.y" /* yacc.c:1646  */
    {  }
#line 2512 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 276 "practica.y" /* yacc.c:1646  */
    {  }
#line 2518 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 277 "practica.y" /* yacc.c:1646  */
    {  }
#line 2524 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 278 "practica.y" /* yacc.c:1646  */
    {  }
#line 2530 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 279 "practica.y" /* yacc.c:1646  */
    {  }
#line 2536 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 280 "practica.y" /* yacc.c:1646  */
    {  }
#line 2542 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 281 "practica.y" /* yacc.c:1646  */
    {  }
#line 2548 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 282 "practica.y" /* yacc.c:1646  */
    {  }
#line 2554 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 283 "practica.y" /* yacc.c:1646  */
    {  }
#line 2560 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 284 "practica.y" /* yacc.c:1646  */
    {  }
#line 2566 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 285 "practica.y" /* yacc.c:1646  */
    {  }
#line 2572 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 289 "practica.y" /* yacc.c:1646  */
    { update(table, (yyvsp[-2].String),  (yyvsp[0].String));                                 }
#line 2578 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 290 "practica.y" /* yacc.c:1646  */
    { sprintf(ans, "%d", (yyvsp[0].Integer));         update(table, (yyvsp[-2].String), ans); }
#line 2584 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 291 "practica.y" /* yacc.c:1646  */
    { sprintf(ans, "%f", (yyvsp[0].Double));         update(table, (yyvsp[-2].String), ans); }
#line 2590 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 292 "practica.y" /* yacc.c:1646  */
    { sprintf(ans, "%d",    (int)(yyvsp[0].Double)); update(table, (yyvsp[-2].String), ans); }
#line 2596 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 293 "practica.y" /* yacc.c:1646  */
    { sprintf(ans, "%f", (double)(yyvsp[0].Integer)); update(table, (yyvsp[-2].String), ans); }
#line 2602 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 296 "practica.y" /* yacc.c:1646  */
    {  }
#line 2608 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 297 "practica.y" /* yacc.c:1646  */
    {  }
#line 2614 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 298 "practica.y" /* yacc.c:1646  */
    {  }
#line 2620 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 299 "practica.y" /* yacc.c:1646  */
    {  }
#line 2626 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 300 "practica.y" /* yacc.c:1646  */
    {  }
#line 2632 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 301 "practica.y" /* yacc.c:1646  */
    {  }
#line 2638 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 302 "practica.y" /* yacc.c:1646  */
    {  }
#line 2644 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 303 "practica.y" /* yacc.c:1646  */
    {  }
#line 2650 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 304 "practica.y" /* yacc.c:1646  */
    {  }
#line 2656 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 305 "practica.y" /* yacc.c:1646  */
    {  }
#line 2662 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 306 "practica.y" /* yacc.c:1646  */
    {  }
#line 2668 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 307 "practica.y" /* yacc.c:1646  */
    {  }
#line 2674 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 308 "practica.y" /* yacc.c:1646  */
    {  }
#line 2680 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 309 "practica.y" /* yacc.c:1646  */
    {  }
#line 2686 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 313 "practica.y" /* yacc.c:1646  */
    { sprintf(ans,  "%d",            (yyvsp[0].Integer)); insert(table, "integer", (yyvsp[-2].String), ans); }
#line 2692 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 314 "practica.y" /* yacc.c:1646  */
    { sprintf(ans,  "%f",            (yyvsp[0].Double)); insert(table, "double",  (yyvsp[-2].String), ans); }
#line 2698 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 315 "practica.y" /* yacc.c:1646  */
    { sprintf(ans,  "%d",       (int)(yyvsp[0].Double)); insert(table, "integer", (yyvsp[-2].String), ans); }
#line 2704 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 316 "practica.y" /* yacc.c:1646  */
    { sprintf(ans,  "%f",    (double)(yyvsp[0].Integer)); insert(table, "double",  (yyvsp[-2].String), ans); }
#line 2710 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 317 "practica.y" /* yacc.c:1646  */
    { insert(table, "string",  (yyvsp[-2].String),   (yyvsp[0].String)); }
#line 2716 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 318 "practica.y" /* yacc.c:1646  */
    { insert(table, "integer", (yyvsp[0].String),  "0"); }
#line 2722 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 319 "practica.y" /* yacc.c:1646  */
    { insert(table, "double", (yyvsp[0].String), "0.0"); }
#line 2728 "practica.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 320 "practica.y" /* yacc.c:1646  */
    { insert(table, "string", (yyvsp[0].String),    ""); }
#line 2734 "practica.tab.c" /* yacc.c:1646  */
    break;


#line 2738 "practica.tab.c" /* yacc.c:1646  */
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 323 "practica.y" /* yacc.c:1906  */


int yyerror(char * s) {
  printf("%s\n", s);
}

int main() {
  table = (list*) malloc(sizeof(list));
  if (yyparse())
     fprintf(stderr, "Successful parsing.\n");
  else
     fprintf(stderr, "error found.\n");
}
