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
#line 1 "./g2r.y" /* yacc.c:339  */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <ctype.h>

#include "g2r.h"
#include "g2r_config.h"

/*
 * defined from lex.yy.c
 */
extern int yylineno;
extern struct g2r_config gconfig;   
extern int yylex (void);

void yyerror(char* s, ...);
void gerror(char* s, ...);
void dbgprintf(char* s, ...);
int is_type(char* str);
int extract_package_name(struct package_t* pkg, char* package_name);
char* get_tmp_message_name();
char* get_tmp_enum_name();

void fill_package_name(struct package_t* pkg);

int insert_item_to_enum(struct enum_t* em, struct enum_item_t* em_item);
int insert_expression_to_message(struct message_t* msg, struct expression_t* expression);
int insert_enum_to_message(struct message_t* msg, struct enum_t* em);
int insert_enum_to_package(struct package_t* pkg, struct enum_t* em);
int insert_message_to_package(struct package_t* pkg, struct message_t* msg);
int get_expression_message_to_message(struct message_t* dst, struct message_t* src);

struct enum_item_t* create_enum_item(char* name, char* value);
#define close_enum_item(em_item) if ((em_item)) { free((em_item)); (em_item) = NULL; }

struct expression_t* create_expression(int repeated, char* type, char* name, char* value);
struct expression_t* create_map_expression(char* key_type, char* value_type, char* name, char* value);
#define close_expression(express) if ((express)) { free((express)); (express) = NULL; }
struct message_t* map_expression_to_message(struct expression_t*);

struct enum_t* create_enum(char* em_name);
void close_enum(struct enum_t* em);

struct message_t* create_message(char* msg_name);
void close_message(struct message_t* msg);

struct package_t* create_package(char* pkg_name);
void close_package(struct package_t* pkg);

struct package_t* gpackage = NULL;
struct package_t* cpackage = NULL;

struct package_t* global_make_package(char* pkg_name);
struct package_t* global_popkg();

void reset_yyparse();
int is_curr_package_created = 0;


#line 129 "g2r.tab.c" /* yacc.c:339  */

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
   by #include "g2r.tab.h".  */
#ifndef YY_YY_G2R_TAB_H_INCLUDED
# define YY_YY_G2R_TAB_H_INCLUDED
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
    SYNTAX = 258,
    IMPORT = 259,
    PACKAGE = 260,
    MESSAGE = 261,
    ENUM = 262,
    ONEOF = 263,
    MAP = 264,
    REPEATED = 265,
    PROTO = 266,
    PATH = 267,
    PACKAGE_NAME = 268,
    PACKAGE_TYPE = 269,
    SYMBOL = 270,
    INTEGER = 271,
    NUMBER = 272,
    BOOLT = 273,
    BOOLF = 274,
    QUOTATION = 275,
    ASSIGN = 276,
    COMMA = 277,
    LBRACE = 278,
    RBRACE = 279,
    LDASH = 280,
    RDASH = 281,
    EOL = 282
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 64 "./g2r.y" /* yacc.c:355  */

  char text[256];
  struct package_t* pkg;
  struct message_t* msg;
  struct enum_t* em;
  struct enum_item_t* em_item;
  struct expression_t* express;
  struct header_t* hdr;

#line 207 "g2r.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_G2R_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 224 "g2r.tab.c" /* yacc.c:358  */

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   97

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  28
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  33
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  80

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   282

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
      25,    26,    27
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    91,    91,    97,    98,   101,   105,   113,   125,   129,
     133,   137,   143,   148,   155,   170,   181,   190,   195,   213,
     220,   229,   237,   243,   259,   275,   280,   285,   292,   299,
     308,   315,   322,   329
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SYNTAX", "IMPORT", "PACKAGE", "MESSAGE",
  "ENUM", "ONEOF", "MAP", "REPEATED", "PROTO", "PATH", "PACKAGE_NAME",
  "PACKAGE_TYPE", "SYMBOL", "INTEGER", "NUMBER", "BOOLT", "BOOLF",
  "QUOTATION", "ASSIGN", "COMMA", "LBRACE", "RBRACE", "LDASH", "RDASH",
  "EOL", "$accept", "protocal", "protocal_maker", "statement",
  "protocal_context", "message", "message_body", "oneof", "oneof_body",
  "expression", "type", "enum", "enum_body", "enum_expression", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282
};
# endif

#define YYPACT_NINF -20

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-20)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      33,   -19,    19,    -7,    41,    14,   -20,    22,    31,   -20,
     -20,    30,    32,   -20,    -3,   -20,   -20,    35,    28,    26,
      27,   -20,   -20,   -20,    34,   -20,     1,    36,   -20,    37,
      38,    18,   -20,   -20,   -20,   -20,    20,   -20,   -20,    40,
     -20,    39,   -10,   -20,    42,    43,    44,   -20,   -20,   -20,
     -20,   -20,    45,    47,   -20,   -20,    46,    48,    50,    51,
     -20,    53,    16,    54,    56,   -20,    52,    59,   -20,    49,
     -20,    60,    57,    62,   -20,    63,    61,   -20,    64,   -20
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     3,     0,     0,     7,
       1,     0,     0,     4,     0,     8,     9,     0,     0,     0,
       0,     2,    10,    11,     0,     6,     0,     0,     5,     0,
       0,     0,    29,    28,    13,    16,     0,    20,    14,     0,
      18,     0,     0,    31,     0,     0,     0,    12,    17,    21,
      15,    19,     0,     0,    30,    32,     0,     0,     0,     0,
      33,     0,     0,     0,     0,    25,     0,     0,    22,     0,
      26,     0,     0,     0,    23,     0,     0,    24,     0,    27
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -20,   -20,   -20,    76,   -20,   -14,   -20,    17,   -20,    21,
      25,   -13,   -20,    55
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,    14,    15,    36,    37,    62,    38,
      39,    16,    42,    43
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      22,    23,     7,    11,    12,    41,     9,    11,    12,    29,
      30,    31,    35,    40,    54,    32,    33,     1,     2,     3,
      11,    12,    48,    51,    21,    34,    11,    12,    29,    30,
      31,    67,    32,    33,    32,    33,     1,     2,     3,     8,
      68,    10,    17,    18,    47,    19,    24,    20,    25,    26,
      27,    41,    44,    49,    28,    52,    46,    50,    57,    58,
      53,    61,     0,    45,    60,    56,    59,    65,    66,    69,
      63,    64,    70,    71,    72,    73,    74,    76,    75,    77,
      79,    13,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55
};

static const yytype_int8 yycheck[] =
{
      14,    14,    21,     6,     7,    15,    13,     6,     7,     8,
       9,    10,    26,    26,    24,    14,    15,     3,     4,     5,
       6,     7,    36,    36,    27,    24,     6,     7,     8,     9,
      10,    15,    14,    15,    14,    15,     3,     4,     5,    20,
      24,     0,    20,    12,    24,    15,    11,    15,    20,    23,
      23,    15,    15,    36,    20,    15,    31,    36,    15,    15,
      21,    15,    -1,    25,    17,    23,    21,    16,    15,    15,
      22,    21,    16,    21,    15,    26,    16,    15,    21,    16,
      16,     5,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    29,    30,    31,    21,    20,    13,
       0,     6,     7,    31,    32,    33,    39,    20,    12,    15,
      15,    27,    33,    39,    11,    20,    23,    23,    20,     8,
       9,    10,    14,    15,    24,    33,    34,    35,    37,    38,
      39,    15,    40,    41,    15,    25,    38,    24,    33,    35,
      37,    39,    15,    21,    24,    41,    23,    15,    15,    21,
      17,    15,    36,    22,    21,    16,    15,    15,    24,    15,
      16,    21,    15,    26,    16,    21,    15,    16,    21,    16
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    28,    29,    30,    30,    31,    31,    31,    32,    32,
      32,    32,    33,    33,    34,    34,    34,    34,    34,    34,
      34,    34,    35,    36,    36,    37,    37,    37,    38,    38,
      39,    40,    40,    41
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     2,     5,     4,     2,     1,     1,
       2,     2,     5,     4,     1,     2,     1,     2,     1,     2,
       1,     2,     5,     4,     5,     4,     5,     9,     1,     1,
       5,     1,     2,     3
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
        case 2:
#line 91 "./g2r.y" /* yacc.c:1646  */
    {
  (yyval.pkg) = (yyvsp[-1].pkg);
  return 0;
}
#line 1352 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 97 "./g2r.y" /* yacc.c:1646  */
    {}
#line 1358 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 98 "./g2r.y" /* yacc.c:1646  */
    {}
#line 1364 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 101 "./g2r.y" /* yacc.c:1646  */
    {
  if (!is_curr_package_created) global_make_package("");
  strcpy(cpackage->header.syntax, (yyvsp[-1].text));
}
#line 1373 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 105 "./g2r.y" /* yacc.c:1646  */
    {
  if (!is_curr_package_created) global_make_package("");
  if (cpackage->header.ifile_count >= MAX_IMPORT_FILES) {
    yyerror("import file is over the limit(%d)\r\n", MAX_IMPORT_FILES);
    return -1;
  }
  strcpy(cpackage->header.import_files[cpackage->header.ifile_count++], (yyvsp[-1].text));
}
#line 1386 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 113 "./g2r.y" /* yacc.c:1646  */
    {
  if (!is_curr_package_created) global_make_package("");
  int ret = extract_package_name(cpackage, (yyvsp[0].text));
  if (ret != 0) {
    return ret;
  }

  //char* name = cpackage->header.package_name[cpackage->header.package_name_count-1];
  fill_package_name(cpackage);
}
#line 1401 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 125 "./g2r.y" /* yacc.c:1646  */
    {
  if (insert_message_to_package(cpackage, (yyvsp[0].msg)) != 0) return -1;
  (yyval.pkg) = cpackage;
}
#line 1410 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 129 "./g2r.y" /* yacc.c:1646  */
    {
  if (insert_enum_to_package(cpackage, (yyvsp[0].em)) != 0) return -1;
  (yyval.pkg) = cpackage;
}
#line 1419 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 133 "./g2r.y" /* yacc.c:1646  */
    { 
  if (insert_message_to_package((yyvsp[-1].pkg), (yyvsp[0].msg)) != 0) return -1;
  (yyval.pkg) = (yyvsp[-1].pkg);
}
#line 1428 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 137 "./g2r.y" /* yacc.c:1646  */
    {
  if (insert_enum_to_package((yyvsp[-1].pkg), (yyvsp[0].em)) != 0) return -1;
  (yyval.pkg) = (yyvsp[-1].pkg);
}
#line 1437 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 143 "./g2r.y" /* yacc.c:1646  */
    {
  dbgprintf("rename message `%s` to `%s`\r\n", (yyvsp[-1].msg)->name, (yyvsp[-3].text));
  strcpy((yyvsp[-1].msg)->name, (yyvsp[-3].text));
  (yyval.msg) = (yyvsp[-1].msg);
}
#line 1447 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 148 "./g2r.y" /* yacc.c:1646  */
    {
  struct message_t* msg = create_message((yyvsp[-2].text));
  if (!msg) return -1;
  (yyval.msg) = msg;
}
#line 1457 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 155 "./g2r.y" /* yacc.c:1646  */
    {
  struct message_t* msg = create_message(get_tmp_message_name());
  if (!msg) return -1;
  if (insert_expression_to_message(msg, (yyvsp[0].express)) != 0)
    return -1;
  if ((yyvsp[0].express)->map) {
    // 扩展为一个消息
    struct message_t* map_msg = map_expression_to_message((yyvsp[0].express));
    if (!map_msg)
      return -1;
    if (insert_message_to_package(cpackage, map_msg) != 0)
      return -1;
  }
  (yyval.msg) = msg;
}
#line 1477 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 170 "./g2r.y" /* yacc.c:1646  */
    {
  if (insert_expression_to_message((yyvsp[-1].msg), (yyvsp[0].express)) != 0)
    return -1;
  if ((yyvsp[0].express)->map) {
    struct message_t* map_msg = map_expression_to_message((yyvsp[0].express));
    if (!map_msg) return -1;
    if (insert_message_to_package(cpackage, map_msg) != 0)
      return -1;
  }
  (yyval.msg) = (yyvsp[-1].msg);
}
#line 1493 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 181 "./g2r.y" /* yacc.c:1646  */
    {
  if (insert_message_to_package(cpackage, (yyvsp[0].msg)) != 0)
    return -1;

  // 创建空消息体
  struct message_t* msg = create_message(get_tmp_message_name());
  if (!msg) return -1;
  (yyval.msg) = msg;
}
#line 1507 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 190 "./g2r.y" /* yacc.c:1646  */
    {
  if (insert_message_to_package(cpackage, (yyvsp[0].msg)) != 0)
    return -1;
  (yyval.msg) = (yyvsp[-1].msg);
}
#line 1517 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 195 "./g2r.y" /* yacc.c:1646  */
    {
  /*
   * 这里修改枚举体到插入到包体内，google buffer protocal
   * 中会将在message中定义的枚举体定义到类外，在包命名空间下
   * 然后在message对应的类中,定义一组`static const xxx`的变量
   * 来保存枚举体的每个内容
   *
   * 直接将message内的枚举体直接插入到包内, 作为独立的ros msg文件
   */
  //if (insert_enum_to_message(msg, $1) != 0)
  if (insert_enum_to_package(cpackage, (yyvsp[0].em)) != 0)
    return -1;
  
  // 创建空消息体
  struct message_t* msg = create_message(get_tmp_message_name());
  if (!msg) return -1;
  (yyval.msg) = msg;
}
#line 1540 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 213 "./g2r.y" /* yacc.c:1646  */
    {
  // 这里的处理同上
  //if (insert_enum_to_message($1, $2) != 0)
  if (insert_enum_to_package(cpackage, (yyvsp[0].em)) != 0)
    return -1;
  (yyval.msg) = (yyvsp[-1].msg);
}
#line 1552 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 220 "./g2r.y" /* yacc.c:1646  */
    {
  //struct message_t* msg = create_message("");
  //if (!msg) return -1;
  //if (get_expression_message_to_message(msg, $1) != 0)
  //  return -1;
  //$$ = msg;
  dbgprintf("define oneof '%s' in message first element\r\n", (yyvsp[0].msg)->name);
  (yyval.msg) = (yyvsp[0].msg);
}
#line 1566 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 229 "./g2r.y" /* yacc.c:1646  */
    {
  if (get_expression_message_to_message((yyvsp[-1].msg), (yyvsp[0].msg)) != 0)
    return -1;
  free((yyvsp[0].msg)); // 这里不需要临时的message结构了
  (yyval.msg) = (yyvsp[-1].msg);
}
#line 1577 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 237 "./g2r.y" /* yacc.c:1646  */
    {
  //strcpy($4->name, $2);
  (yyval.msg) = (yyvsp[-1].msg);
}
#line 1586 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 243 "./g2r.y" /* yacc.c:1646  */
    {
  if (!is_type((yyvsp[-2].text))) {
    yyerror("invalid type\r\n");
    return -1;
  }
  struct message_t* msg = create_message(get_tmp_message_name());
  if (!msg) return -1;

  struct expression_t* express = create_expression(0, (yyvsp[-3].text), (yyvsp[-2].text), (yyvsp[0].text));
  if (!express) return -1;

  if (insert_expression_to_message(msg, express) != 0)
    return -1;

  (yyval.msg) = msg;
}
#line 1607 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 259 "./g2r.y" /* yacc.c:1646  */
    {
  if (!is_type((yyvsp[-3].text))) {
    yyerror("invalid type\r\n");
    return -1;
  }

  struct expression_t* express = create_expression(0, (yyvsp[-3].text), (yyvsp[-2].text), (yyvsp[0].text));
  if (!express) return -1;

  if (insert_expression_to_message((yyvsp[-4].msg), express) != 0)
    return -1;

  (yyval.msg) = (yyvsp[-4].msg);
}
#line 1626 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 275 "./g2r.y" /* yacc.c:1646  */
    {
  struct expression_t* express = create_expression(0, (yyvsp[-3].text), (yyvsp[-2].text), (yyvsp[0].text));
  if (!express) return -1;
  (yyval.express) = express;
}
#line 1636 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 280 "./g2r.y" /* yacc.c:1646  */
    {
  struct expression_t* express = create_expression(1, (yyvsp[-3].text), (yyvsp[-2].text), (yyvsp[0].text));
  if (!express) return -1;
  (yyval.express) = express;
}
#line 1646 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 285 "./g2r.y" /* yacc.c:1646  */
    {
  struct expression_t* express = create_map_expression((yyvsp[-6].text), (yyvsp[-4].text), (yyvsp[-2].text), (yyvsp[0].text));
  if (!express) return -1;
  (yyval.express) = express;
}
#line 1656 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 292 "./g2r.y" /* yacc.c:1646  */
    {
  if (!is_type((yyvsp[0].text))) {
    yyerror("invalid type\r\n");
    return -1;
  }
  strcpy((yyval.text), (yyvsp[0].text));
}
#line 1668 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 299 "./g2r.y" /* yacc.c:1646  */
    { 
  if (!is_type((yyvsp[0].text))) {
    yyerror("invalid type\r\n");
    return -1;
  }
  strcpy((yyval.text), (yyvsp[0].text));
}
#line 1680 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 308 "./g2r.y" /* yacc.c:1646  */
    {
  dbgprintf("rename enum `%s` to `%s`\r\n", (yyvsp[-1].em)->name, (yyvsp[-3].text));
  strcpy((yyvsp[-1].em)->name, (yyvsp[-3].text));
  (yyval.em) = (yyvsp[-1].em);
}
#line 1690 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 315 "./g2r.y" /* yacc.c:1646  */
    {
  struct enum_t* em = create_enum(get_tmp_enum_name());
  if (!em) return -1;
  if (insert_item_to_enum(em, (yyvsp[0].em_item)) != 0)
    return -1;
  (yyval.em) = em;
}
#line 1702 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 322 "./g2r.y" /* yacc.c:1646  */
    {
  if (insert_item_to_enum((yyvsp[-1].em), (yyvsp[0].em_item)) != 0)
    return -1;
  (yyval.em) = (yyvsp[-1].em);
}
#line 1712 "g2r.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 329 "./g2r.y" /* yacc.c:1646  */
    {
  struct enum_item_t* em_item = create_enum_item((yyvsp[-2].text), (yyvsp[0].text));
  if (!em_item) return -1;
  (yyval.em_item) = em_item;
}
#line 1722 "g2r.tab.c" /* yacc.c:1646  */
    break;


#line 1726 "g2r.tab.c" /* yacc.c:1646  */
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
#line 336 "./g2r.y" /* yacc.c:1906  */

void yyerror(char* s, ...) {
  va_list ap;
  va_start(ap, s);

  fprintf(stderr, "%d: error: ", yylineno);
  vfprintf(stderr, s, ap);
  fprintf(stderr, "\n");
  va_end(ap);
  return;
}

void gerror(char* s, ...) {
  va_list ap;
  va_start(ap, s);
  vfprintf(stderr, s, ap);
  fprintf(stderr, "\n");
  va_end(ap);
  return;
}
#define check_malloc(v) { \
  if (!(v)) { \
    gerror("<I/O error>malloc failed\r\n"); \
    return NULL; \
  } \
}

void dbgprintf(char* s, ...) {
#ifdef ENABLE_YYPARSE_DBG
  char buffer[256] = {0};
  va_list ap;
  va_start(ap, s);
  vsprintf(buffer, s, ap);
  printf("[parse dbginfo]%s", buffer);
  va_end(ap);
#endif
  return; 
}

char* get_tmp_message_name() {
  static char tmp[MAX_NAME_SIZE] = {0};
  static int count = 0;

  sprintf(tmp, "message_tmp_%d", count++);
  return tmp;
}

char* get_tmp_enum_name() {
  static char tmp[MAX_NAME_SIZE] = {0};
  static int count = 0;

  sprintf(tmp, "enum_tmp_%d", count++);
  return tmp;  
}

// 在使用此函数之前,调用 extract_package_name 函数
void fill_package_name(struct package_t* pkg) {
  assert(pkg);
  /*
   * 如果第一个是apollo那么则跳过,使用随后的合成包名
   */
  char package_name[MAX_NAME_SIZE] = {0};

  for (int i = 0; i < cpackage->header.package_name_count; i++) {
    strcat(package_name, pkg->header.package_name[i]);
    if (i < pkg->header.package_name_count-1) {
      strcat(package_name, "_");
    }
  }

  //sprintf(package_name, "ros_%s", package_name);
  strcpy(pkg->name, package_name);
  return;
}

static char str_internal_type[] = 
  "double float int64 uint64 int32 fixed64 fixed32 bool string group bytes uint32 sfixed32 sfixed64 sint32 sint64";

static int is_internal_type(char* str) {
  char* token = strtok(str_internal_type, " ");
  while (token) {
    if (strcmp(str, token) == 0)
      return 1;
    token = strtok(NULL, " ");
  }
  return 0;
}

int is_type(char* str) {
  if (is_internal_type(str))
    return 1;

  /* 确定str是否是在一个包内
   * 当前直接忽略,毕竟不是做解释器不需要那么严谨的错误判断
   */
  return 1;
}

static int invalid_package_name(char* name) {
  return 0;
}

int extract_package_name(struct package_t* pkg, char* package_name) {
  char* token = strtok(package_name, ".");
  while (token) {
    if (pkg->header.package_name_count >= MAX_PACKAGE_SPACE) {
      gerror("package list in package name is over the limit(%d)\r\n", MAX_PACKAGE_SPACE);
      return -1;
    }
    if (invalid_package_name(token) != 0) {
      gerror("invalide package name = %s\r\n", token);
      return -2;
    }
    strcpy(pkg->header.package_name[pkg->header.package_name_count++], token);
    token = strtok(NULL, ".");
  }
  return 0;
}

int insert_item_to_enum(struct enum_t* em, struct enum_item_t* em_item) {
  assert(em && em_item);

  dbgprintf("insert enum item '%s' to enum '%s'\r\n", em_item->name, em->name);

  if (em->item_count >= MAX_ITEM_IM_ENUM) {
    gerror("item in enum is over the limit(%d)\r\n", MAX_ITEM_IM_ENUM);
    return -1;
  }

  em->items[em->item_count] = em_item;
  em->item_count++; 

  return 0;
}

int insert_expression_to_message(struct message_t* msg, struct expression_t* expression) {
  assert(msg && expression);

  dbgprintf("insert express '%s' to message '%s'\r\n", expression->name, msg->name);

  if (msg->exp_count >= MAX_EXP_IN_MESSAGE) {
    gerror("expression in message is over the limit(%d)\r\n", MAX_EXP_IN_MESSAGE);
    return -1;
  }

  msg->expressions[msg->exp_count] = expression;
  msg->exp_count++;
  return 0;
}

int insert_enum_to_message(struct message_t* msg, struct enum_t* em) {
  assert(msg && em);

  dbgprintf("insert enum '%s' to message '%s'\r\n", em->name, msg->name);

  if (msg->enum_count >= MAX_ENUM_IN_MESSAGE) {
    gerror("enum in message is over the limit(%d)\r\n", MAX_ENUM_IN_MESSAGE);
    return -1;
  }

  msg->enums[msg->enum_count] = em;
  msg->enum_count++;
  return 0;
}

/*
 * 将enum当作独立的一个message使用
 */
int insert_enum_to_package(struct package_t* pkg, struct enum_t* em) {
  assert(pkg && em);

  dbgprintf("insert enum '%s' to package '%s'\r\n", em->name, pkg->name);

  struct message_t* msg = (struct message_t*)malloc(sizeof(struct message_t));
  if (!msg) {
    gerror("<I/O error>malloc failed\r\n");
    return -1;
  }
  memset(msg, 0, sizeof(struct message_t));

  strcpy(msg->name, em->name);
  msg->type = 1;
  msg->enums[0] = em;
  msg->enum_count = 1;

  return insert_message_to_package(pkg, msg);
}

int insert_message_to_package(struct package_t* pkg, struct message_t* msg) {
  assert(pkg && msg);

  dbgprintf("insert message '%s' to package '%s'\r\n", msg->name, pkg->name);

  if (pkg->message_count >= MAX_MESSAGE_IN_PACKAGE) {
    gerror("message in package is over the limit(%d)\r\n", MAX_MESSAGE_IN_PACKAGE);
    return -1;
  }

  pkg->messages[pkg->message_count] = msg;
  pkg->message_count++;
  return 0;
}

int get_expression_message_to_message(struct message_t* dst, struct message_t* src) {
  assert(dst && src);

  dbgprintf("insert expression message to message '%s'\r\n", dst->name);

  int j = dst->exp_count;
  for (int i = 0; i < src->exp_count; i++) {
    if (j + i >= MAX_EXP_IN_MESSAGE) {
      gerror("express in message is over limit\r\n");
      return -1;
    }
    dst->expressions[j + i] = src->expressions[i];
  }
  dst->exp_count += src->exp_count;
  return 0;
}

struct enum_item_t* create_enum_item(char* name, char* value) {
  struct enum_item_t* item = (struct enum_item_t*)malloc(sizeof(struct enum_item_t));
  check_malloc(item);
  memset(item, 0, sizeof(struct enum_item_t));
  strcpy(item->name, name);
  strcpy(item->value, value);
  return item;
}

struct expression_t* create_expression(int repeated, char* type, char* name, char* value) {
  struct expression_t* express = (struct expression_t*)malloc(sizeof(struct expression_t));
  check_malloc(express);
  memset(express, 0, sizeof(struct expression_t));
  express->repeated = repeated;
  strcpy(express->type, type);
  strcpy(express->name, name);
  strcpy(express->value, value);
  return express;
}

struct expression_t* create_map_expression(char* key_type, char* value_type, char* name, char* value) {
  struct expression_t* express = (struct expression_t*)malloc(sizeof(struct expression_t));
  check_malloc(express);
  memset(express, 0, sizeof(struct expression_t));
  express->map = 1;
  express->repeated = 1;

  char exp_type[MAX_NAME_SIZE] = {0};
  char big_key_type[MAX_NAME_SIZE] = {0};
  char big_value_type[MAX_NAME_SIZE] = {0};

  strcpy(big_key_type, key_type);
  strcpy(big_value_type, value_type);

  big_key_type[0] = toupper(big_key_type[0]);
  big_value_type[0] = toupper(big_value_type[0]);

  sprintf(exp_type, "Map%s%sEntry", big_key_type, big_value_type);

  strcpy(express->type, exp_type);
  strcpy(express->key_type, key_type);
  strcpy(express->value_type, value_type);
  strcpy(express->name, name);
  strcpy(express->value, value);

  return express;
}

struct message_t* map_expression_to_message(struct expression_t* express) {
  char msg_name[MAX_NAME_SIZE] = {0};
  char big_key_type[MAX_NAME_SIZE] = {0};
  char big_value_type[MAX_NAME_SIZE] = {0};

  strcpy(big_key_type, express->key_type);
  strcpy(big_value_type, express->value_type);

  big_key_type[0] = toupper(big_key_type[0]);
  big_value_type[0] = toupper(big_value_type[0]);

  sprintf(msg_name, "Map%s%sEntry", big_key_type, big_value_type);
  struct message_t* msg = create_message(msg_name);
  check_malloc(msg);

  struct expression_t* key_exp = create_expression(0, express->key_type, "key", "1");
  if (!key_exp) {
    free(msg);
    return NULL;
  }

  struct expression_t* value_exp = create_expression(0, express->value_type, "value", "2");
  if (!value_exp) {
    close_expression(key_exp);
    free(msg);
    return NULL;
  }

  if (insert_expression_to_message(msg, key_exp) != 0) {
    close_expression(key_exp);
    close_expression(value_exp);
    free(msg);
    return NULL;
  }

  if (insert_expression_to_message(msg, value_exp) != 0) {
    close_expression(key_exp);
    close_expression(value_exp);
    free(msg);
    return NULL;
  }

  msg->type = 2;
  return msg;
}

struct enum_t* create_enum(char* em_name) {
  struct enum_t* em = (struct enum_t*)malloc(sizeof(struct enum_t));
  check_malloc(em);
  memset(em, 0, sizeof(struct enum_t));
  strcpy(em->name, em_name);
  return em;
}

void close_enum(struct enum_t* em) {
  for (int i = 0; i < em->item_count; i++) {
    struct enum_item_t* em_i = em->items[i];
    if (em_i) { close_enum_item(em_i); em->items[i] = NULL; }
  }
}

struct message_t* create_message(char* msg_name) {
  struct message_t* msg = (struct message_t*)malloc(sizeof(struct message_t));
  check_malloc(msg);
  memset(msg, 0, sizeof(struct message_t));
  strcpy(msg->name, msg_name);
  return msg;
}

void close_message(struct message_t* msg) {
  if (msg) {
    for (int j = 0; j < msg->exp_count; j++) {
      struct expression_t* express = msg->expressions[j];
      if (express) { close_expression(express); msg->expressions[j] = NULL; }
    }

    for (int j = 0; j < msg->enum_count; j++) {
      struct enum_t* em = msg->enums[j];
      if (em) { close_enum(em); free(em); msg->enums[j] = NULL; }
    }
    if (msg->fp) { fflush(msg->fp); fclose(msg->fp); msg->fp = NULL; }
    if (msg->h_fp) { fflush(msg->h_fp); fclose(msg->h_fp); msg->h_fp = NULL; }
    if (msg->cc_fp) { fflush(msg->cc_fp); fclose(msg->cc_fp); msg->cc_fp = NULL; }
  }/* end if (msg) */
}

struct package_t* create_package(char* pkg_name) {
  struct package_t* package = (struct package_t*)malloc(sizeof(struct package_t));
  check_malloc(package);
  memset(package, 0, sizeof(struct package_t));
  strcpy(package->name, pkg_name);
  return package;
}

void close_package(struct package_t* pkg) {
  if (!pkg) return;

  for (int i = 0; i < pkg->message_count; i++) {
    struct message_t* msg = pkg->messages[i];
    if (msg) { close_message(msg); free(msg); pkg->messages[i] = NULL; }
  }

  close_package(pkg->next);
  pkg->next = NULL;

  if (pkg->fp) {
    fflush(pkg->fp);
    fclose(pkg->fp);
  }

  free(pkg);
}

struct package_t* global_make_package(char* pkg_name) {
  if (!is_curr_package_created) is_curr_package_created = 1;
  if (!gpackage) {
    gpackage = create_package(pkg_name);
    if (!gpackage) return NULL;
    cpackage = gpackage;
  } else {
    struct package_t* pkg = create_package(pkg_name);
    cpackage->next = pkg;
    pkg->prev = cpackage;
    cpackage = pkg;
  }
  return cpackage;
}

struct package_t* global_popkg() {
  if ((!gpackage) || (!cpackage)) return NULL;
  struct package_t* res = cpackage;
  cpackage = cpackage->prev;
  return res;
}

struct package_t* global_package() {
  return gpackage;
}

void reset_yyparse() {
  is_curr_package_created = 0;
}

void free_packages() {
  close_package(gpackage);
}
