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
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "tree.h"

extern int yylex();
void yyerror(const char *s);
Node* root;

#line 83 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_LITERAL = 4,                    /* LITERAL  */
  YYSYMBOL_NUM = 5,                        /* NUM  */
  YYSYMBOL_REAL = 6,                       /* REAL  */
  YYSYMBOL_PLUS = 7,                       /* PLUS  */
  YYSYMBOL_MINUS = 8,                      /* MINUS  */
  YYSYMBOL_TIMES = 9,                      /* TIMES  */
  YYSYMBOL_DIV = 10,                       /* DIV  */
  YYSYMBOL_ASSIGN = 11,                    /* ASSIGN  */
  YYSYMBOL_EQ = 12,                        /* EQ  */
  YYSYMBOL_NEQ = 13,                       /* NEQ  */
  YYSYMBOL_LT = 14,                        /* LT  */
  YYSYMBOL_GT = 15,                        /* GT  */
  YYSYMBOL_LE = 16,                        /* LE  */
  YYSYMBOL_GE = 17,                        /* GE  */
  YYSYMBOL_ARROW = 18,                     /* ARROW  */
  YYSYMBOL_LUMOX = 19,                     /* LUMOX  */
  YYSYMBOL_NOX = 20,                       /* NOX  */
  YYSYMBOL_ACCIOINT = 21,                  /* ACCIOINT  */
  YYSYMBOL_ACCIOFLOAT = 22,                /* ACCIOFLOAT  */
  YYSYMBOL_VERITASERUM = 23,               /* VERITASERUM  */
  YYSYMBOL_CRUCIO = 24,                    /* CRUCIO  */
  YYSYMBOL_CONJURAR = 25,                  /* CONJURAR  */
  YYSYMBOL_APARATAR = 26,                  /* APARATAR  */
  YYSYMBOL_FEITICO = 27,                   /* FEITICO  */
  YYSYMBOL_RELICARIO = 28,                 /* RELICARIO  */
  YYSYMBOL_REVELIO = 29,                   /* REVELIO  */
  YYSYMBOL_30_ = 30,                       /* ';'  */
  YYSYMBOL_31_ = 31,                       /* ':'  */
  YYSYMBOL_32_ = 32,                       /* '('  */
  YYSYMBOL_33_ = 33,                       /* ')'  */
  YYSYMBOL_34_ = 34,                       /* ','  */
  YYSYMBOL_35_ = 35,                       /* '['  */
  YYSYMBOL_36_ = 36,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 37,                  /* $accept  */
  YYSYMBOL_programa = 38,                  /* programa  */
  YYSYMBOL_lista_declaracoes = 39,         /* lista_declaracoes  */
  YYSYMBOL_fim_stmt = 40,                  /* fim_stmt  */
  YYSYMBOL_instrucao = 41,                 /* instrucao  */
  YYSYMBOL_declaracao = 42,                /* declaracao  */
  YYSYMBOL_atribuicao = 43,                /* atribuicao  */
  YYSYMBOL_instrucao_conjurar = 44,        /* instrucao_conjurar  */
  YYSYMBOL_instrucao_feitico = 45,         /* instrucao_feitico  */
  YYSYMBOL_chamada_aparatar = 46,          /* chamada_aparatar  */
  YYSYMBOL_chamada_revelio = 47,           /* chamada_revelio  */
  YYSYMBOL_chamada_veritaserum = 48,       /* chamada_veritaserum  */
  YYSYMBOL_expressao = 49,                 /* expressao  */
  YYSYMBOL_vetor = 50,                     /* vetor  */
  YYSYMBOL_lista_elementos = 51,           /* lista_elementos  */
  YYSYMBOL_vetor_float = 52,               /* vetor_float  */
  YYSYMBOL_lista_elementos_float = 53,     /* lista_elementos_float  */
  YYSYMBOL_lista_args = 54,                /* lista_args  */
  YYSYMBOL_lista_params = 55               /* lista_params  */
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
typedef yytype_int8 yy_state_t;

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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   203

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  53
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  126

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   284


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
      32,    33,     2,     2,    34,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    31,    30,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    35,     2,    36,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    55,    55,    60,    66,    72,    78,    81,    84,    89,
      93,    94,    95,    96,    97,   101,   107,   113,   120,   129,
     136,   141,   147,   153,   157,   163,   166,   171,   174,   180,
     185,   190,   195,   198,   201,   204,   207,   210,   213,   216,
     219,   222,   225,   228,   233,   238,   243,   254,   259,   264,
     275,   278,   286,   289
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "LITERAL", "NUM",
  "REAL", "PLUS", "MINUS", "TIMES", "DIV", "ASSIGN", "EQ", "NEQ", "LT",
  "GT", "LE", "GE", "ARROW", "LUMOX", "NOX", "ACCIOINT", "ACCIOFLOAT",
  "VERITASERUM", "CRUCIO", "CONJURAR", "APARATAR", "FEITICO", "RELICARIO",
  "REVELIO", "';'", "':'", "'('", "')'", "','", "'['", "']'", "$accept",
  "programa", "lista_declaracoes", "fim_stmt", "instrucao", "declaracao",
  "atribuicao", "instrucao_conjurar", "instrucao_feitico",
  "chamada_aparatar", "chamada_revelio", "chamada_veritaserum",
  "expressao", "vetor", "lista_elementos", "vetor_float",
  "lista_elementos_float", "lista_args", "lista_params", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-79)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      83,    15,   -22,    25,    42,    17,    36,    57,    83,    63,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,    11,   -17,    11,
      40,    65,    11,    91,   -79,    63,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,    11,   171,    89,    94,    -2,    46,
       9,    19,    68,    32,   -79,   114,    11,    11,    11,    11,
      11,    11,    11,    11,    11,    11,    11,    11,    96,   106,
     115,   -79,   117,    54,   -79,   171,    80,   121,   -79,    11,
     -79,   110,   110,   -79,   -79,   182,   182,   193,   193,   193,
     193,   171,   171,   107,   113,    83,    83,   127,   146,   -79,
      11,    83,   111,   147,   -79,   152,   -79,    44,   112,    83,
     -79,   171,   130,   -79,   -79,    -7,   -79,    14,   137,   124,
     140,   132,   159,   -79,   164,   -79,   153,   -79,   163,   -79,
     -79,   -79,    83,   -79,   148,   -79
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
      10,    11,     7,     8,    14,    12,    13,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     4,     5,     9,     6,
      32,    31,    29,    30,     0,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,    24,    50,     0,     0,    25,     0,
      37,    33,    34,    35,    36,    42,    43,    38,    40,    39,
      41,    15,    16,     0,     0,     0,     0,     0,     0,    23,
       0,     0,     0,     0,    17,     0,    18,     0,     0,     0,
      53,    51,     0,    26,    45,     0,    48,     0,    27,     0,
       0,     0,     0,    44,     0,    47,     0,    21,     0,    22,
      46,    49,     0,    20,     0,    28
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -79,   -79,   -78,   151,    -8,   -79,   -79,    -6,     1,   -79,
     -79,   -79,   -16,   -79,   -79,   -79,   -79,   125,   -79
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     7,     8,    29,     9,    10,    11,    12,    13,    14,
      15,    16,    65,    94,   105,    96,   107,    66,    63
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      25,    35,    26,    39,    36,    37,    42,    97,    98,    27,
      19,    38,    61,   102,    30,    31,    32,    33,    45,    58,
      59,   110,    30,    31,    32,    33,    17,   112,    20,   113,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    62,    34,   124,    21,    18,     1,   114,    22,
     115,    34,    64,    46,    47,    48,    49,    24,    50,    51,
      52,    53,    54,    55,   108,    68,    69,     2,    23,     3,
       4,     5,    40,     6,   101,    46,    47,    48,    49,    60,
      50,    51,    52,    53,    54,    55,     1,    87,    88,    25,
      25,    26,    26,    28,    25,    43,    26,    41,    27,    27,
      56,    67,    25,    27,    26,    57,     2,    83,     3,     4,
       5,    27,     6,    89,    90,     1,    25,    84,    26,    48,
      49,    46,    47,    48,    49,    27,    50,    51,    52,    53,
      54,    55,   109,     1,    85,     2,    86,     3,     4,     5,
      91,     6,    93,     1,   103,    90,    99,    70,    95,   100,
     111,     1,   104,     2,   117,     3,     4,     5,   106,     6,
     118,   116,   119,     2,   120,     3,     4,     5,   125,     6,
     121,     2,   122,     3,     4,     5,    44,     6,    46,    47,
      48,    49,     0,    50,    51,    52,    53,    54,    55,    46,
      47,    48,    49,   123,    92,     0,    52,    53,    54,    55,
      46,    47,    48,    49
};

static const yytype_int8 yycheck[] =
{
       8,    17,     8,    19,    21,    22,    22,    85,    86,     8,
      32,    28,     3,    91,     3,     4,     5,     6,    34,    21,
      22,    99,     3,     4,     5,     6,    11,    34,     3,    36,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    33,    32,   122,     3,    31,     3,    34,    32,
      36,    32,    33,     7,     8,     9,    10,     0,    12,    13,
      14,    15,    16,    17,    20,    33,    34,    23,    32,    25,
      26,    27,    32,    29,    90,     7,     8,     9,    10,    33,
      12,    13,    14,    15,    16,    17,     3,    33,    34,    97,
      98,    97,    98,    30,   102,     4,   102,    32,    97,    98,
      11,    33,   110,   102,   110,    11,    23,    11,    25,    26,
      27,   110,    29,    33,    34,     3,   124,    11,   124,     9,
      10,     7,     8,     9,    10,   124,    12,    13,    14,    15,
      16,    17,    20,     3,    19,    23,    19,    25,    26,    27,
      19,    29,    35,     3,    33,    34,    19,    33,    35,     3,
      20,     3,     5,    23,    30,    25,    26,    27,     6,    29,
      20,    24,    30,    23,     5,    25,    26,    27,    20,    29,
       6,    23,    19,    25,    26,    27,    25,    29,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,     7,
       8,     9,    10,    30,    69,    -1,    14,    15,    16,    17,
       7,     8,     9,    10
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    23,    25,    26,    27,    29,    38,    39,    41,
      42,    43,    44,    45,    46,    47,    48,    11,    31,    32,
       3,     3,    32,    32,     0,    41,    44,    45,    30,    40,
       3,     4,     5,     6,    32,    49,    21,    22,    28,    49,
      32,    32,    49,     4,    40,    49,     7,     8,     9,    10,
      12,    13,    14,    15,    16,    17,    11,    11,    21,    22,
      33,     3,    33,    55,    33,    49,    54,    33,    33,    34,
      33,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    11,    11,    19,    19,    33,    34,    33,
      34,    19,    54,    35,    50,    35,    52,    39,    39,    19,
       3,    49,    39,    33,     5,    51,     6,    53,    20,    20,
      39,    20,    34,    36,    34,    36,    24,    30,    20,    30,
       5,     6,    19,    30,    39,    20
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    39,    39,    39,    39,    39,    39,    40,
      41,    41,    41,    41,    41,    42,    42,    42,    42,    43,
      44,    44,    45,    46,    46,    47,    47,    48,    48,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    50,    51,    51,    52,    53,    53,
      54,    54,    55,    55
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     5,     6,     6,     3,
       9,     8,     8,     5,     4,     4,     6,     7,    11,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3
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

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
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
  case 2: /* programa: lista_declaracoes  */
#line 55 "parser.y"
                      {
        root = create_node("program", 1, (yyvsp[0].node));
    }
#line 1217 "parser.tab.c"
    break;

  case 3: /* lista_declaracoes: lista_declaracoes instrucao fim_stmt  */
#line 60 "parser.y"
                                         {
        Node* list = (yyvsp[-2].node);
        list->children = realloc(list->children, sizeof(Node*) * (list->num_children + 1));
        list->children[list->num_children++] = (yyvsp[-1].node);
        (yyval.node) = list;
    }
#line 1228 "parser.tab.c"
    break;

  case 4: /* lista_declaracoes: lista_declaracoes instrucao_conjurar  */
#line 66 "parser.y"
                                         {
        Node* list = (yyvsp[-1].node);
        list->children = realloc(list->children, sizeof(Node*) * (list->num_children + 1));
        list->children[list->num_children++] = (yyvsp[0].node);
        (yyval.node) = list;
    }
#line 1239 "parser.tab.c"
    break;

  case 5: /* lista_declaracoes: lista_declaracoes instrucao_feitico  */
#line 72 "parser.y"
                                        {
        Node* list = (yyvsp[-1].node);
        list->children = realloc(list->children, sizeof(Node*) * (list->num_children + 1));
        list->children[list->num_children++] = (yyvsp[0].node);
        (yyval.node) = list;
    }
#line 1250 "parser.tab.c"
    break;

  case 6: /* lista_declaracoes: instrucao fim_stmt  */
#line 78 "parser.y"
                       {
        (yyval.node) = create_node("statement_list", 1, (yyvsp[-1].node));
    }
#line 1258 "parser.tab.c"
    break;

  case 7: /* lista_declaracoes: instrucao_conjurar  */
#line 81 "parser.y"
                       {
        (yyval.node) = create_node("statement_list", 1, (yyvsp[0].node));
    }
#line 1266 "parser.tab.c"
    break;

  case 8: /* lista_declaracoes: instrucao_feitico  */
#line 84 "parser.y"
                      {
        (yyval.node) = create_node("statement_list", 1, (yyvsp[0].node));
    }
#line 1274 "parser.tab.c"
    break;

  case 15: /* declaracao: ID ':' ACCIOINT ASSIGN expressao  */
#line 101 "parser.y"
                                   {
    Node* id_node = create_node("identifier: ", 1, create_node((yyvsp[-4].str), 0));
    Node* type_node = create_node("type: ", 1, create_node((yyvsp[-2].str), 0));
    Node* colon = create_node(":", 2, id_node, type_node);
    Node* assign = create_node("=", 1, (yyvsp[0].node));
    (yyval.node) = create_node("declaration", 2, colon, assign);}
#line 1285 "parser.tab.c"
    break;

  case 16: /* declaracao: ID ':' ACCIOFLOAT ASSIGN expressao  */
#line 107 "parser.y"
                                             {
    Node* id_node = create_node("identifier: ", 1, create_node((yyvsp[-4].str), 0));
    Node* type_node = create_node("type: ", 1, create_node((yyvsp[-2].str), 0));
    Node* colon = create_node(":", 2, id_node, type_node);
    Node* assign = create_node("=", 1, (yyvsp[0].node));
    (yyval.node) = create_node("declaration", 2, colon, assign);}
#line 1296 "parser.tab.c"
    break;

  case 17: /* declaracao: ID ':' RELICARIO ACCIOINT ASSIGN vetor  */
#line 113 "parser.y"
                                           {
    Node* id_node = create_node("identifier:", 1, create_node((yyvsp[-5].str), 0));
    Node* relic_node = create_node("relicario", 1, create_node("accioint", 0));
		Node* type_node = create_node("type:", 1, relic_node);
    Node* colon = create_node(":", 2, id_node, type_node);
    Node* assign = create_node("=", 1, (yyvsp[0].node));
    (yyval.node) = create_node("declaration", 2, colon, assign);}
#line 1308 "parser.tab.c"
    break;

  case 18: /* declaracao: ID ':' RELICARIO ACCIOFLOAT ASSIGN vetor_float  */
#line 120 "parser.y"
                                                   {
    Node* id_node = create_node("identifier:", 1, create_node((yyvsp[-5].str), 0));
  	Node* relic_node = create_node("relicario", 1, create_node("acciofloat", 0));
		Node* type_node = create_node("type:", 1, relic_node);
    Node* colon = create_node(":", 2, id_node, type_node);
    Node* assign = create_node("=", 1, (yyvsp[0].node));
    (yyval.node) = create_node("declaration", 2, colon, assign);}
#line 1320 "parser.tab.c"
    break;

  case 19: /* atribuicao: ID ASSIGN expressao  */
#line 129 "parser.y"
                        {
      Node* id_node = create_node("identifier:", 1, create_node((yyvsp[-2].str), 0));
    	Node* assign = create_node("=", 2, id_node, (yyvsp[0].node));
    	(yyval.node) = create_node("instrucao", 1, assign);
    }
#line 1330 "parser.tab.c"
    break;

  case 20: /* instrucao_conjurar: CONJURAR ID '(' lista_params ')' LUMOX lista_declaracoes NOX ';'  */
#line 136 "parser.y"
                                                                     {
        Node* id_node = create_node("identifier:", 1, create_node((yyvsp[-7].str), 0));
        Node* args_node = (yyvsp[-5].node);
        Node* bloco_node = create_node("bloco", 1, (yyvsp[-2].node));
        (yyval.node) = create_node("conjurar", 3, id_node, args_node, bloco_node);}
#line 1340 "parser.tab.c"
    break;

  case 21: /* instrucao_conjurar: CONJURAR ID '(' ')' LUMOX lista_declaracoes NOX ';'  */
#line 141 "parser.y"
                                                        {
        Node* id_node = create_node("identifier:", 1, create_node((yyvsp[-6].str), 0));
        Node* args_node = create_node("args", 0);  // vazio
        Node* bloco_node = create_node("bloco", 1, (yyvsp[-2].node));
        (yyval.node) = create_node("conjurar", 3, id_node, args_node, bloco_node);}
#line 1350 "parser.tab.c"
    break;

  case 22: /* instrucao_feitico: FEITICO '(' expressao ')' LUMOX lista_declaracoes NOX ';'  */
#line 147 "parser.y"
                                                              {
        Node* expressao_node = create_node("()", 1, (yyvsp[-5].node));
        Node* bloco_node = create_node("bloco", 1, (yyvsp[-2].node));
        (yyval.node) = create_node("feitico", 2, expressao_node, bloco_node);}
#line 1359 "parser.tab.c"
    break;

  case 23: /* chamada_aparatar: APARATAR ID '(' lista_args ')'  */
#line 153 "parser.y"
                                   {
        Node* id_node = create_node("identifier:", 1, create_node((yyvsp[-3].str), 0));
        (yyval.node) = create_node("aparatar", 2, id_node, (yyvsp[-1].node)); // $4 já é args
    }
#line 1368 "parser.tab.c"
    break;

  case 24: /* chamada_aparatar: APARATAR ID '(' ')'  */
#line 157 "parser.y"
                        {
        Node* id_node = create_node("identifier:", 1, create_node((yyvsp[-2].str), 0));
        Node* args_node = create_node("args", 0);
        (yyval.node) = create_node("aparatar", 2, id_node, args_node);
    }
#line 1378 "parser.tab.c"
    break;

  case 25: /* chamada_revelio: REVELIO '(' LITERAL ')'  */
#line 163 "parser.y"
                            {
        Node* literal_node = create_node("literal:", 1, create_node((yyvsp[-1].str), 0));
        (yyval.node) = create_node("revelio", 1, literal_node);}
#line 1386 "parser.tab.c"
    break;

  case 26: /* chamada_revelio: REVELIO '(' LITERAL ',' lista_args ')'  */
#line 166 "parser.y"
                                           {
        Node* literal_node = create_node("literal:", 1, create_node((yyvsp[-3].str), 0));
        (yyval.node) = create_node("revelio", 2, literal_node, (yyvsp[-1].node)); // $5 já é args
    }
#line 1395 "parser.tab.c"
    break;

  case 27: /* chamada_veritaserum: VERITASERUM '(' expressao ')' LUMOX lista_declaracoes NOX  */
#line 171 "parser.y"
                                                              {
        (yyval.node) = create_node("veritaserum", 2, (yyvsp[-4].node), (yyvsp[-1].node));  // $3 = cond, $6 = bloco if
    }
#line 1403 "parser.tab.c"
    break;

  case 28: /* chamada_veritaserum: VERITASERUM '(' expressao ')' LUMOX lista_declaracoes NOX CRUCIO LUMOX lista_declaracoes NOX  */
#line 175 "parser.y"
                                       {
        (yyval.node) = create_node("veritaserum", 3, (yyvsp[-8].node), (yyvsp[-5].node), (yyvsp[-1].node));  // $3 = cond, $6 = bloco if, $10 = bloco else
    }
#line 1411 "parser.tab.c"
    break;

  case 29: /* expressao: NUM  */
#line 180 "parser.y"
        {
        char buffer[64];
        sprintf(buffer, "NUM: %d", (yyvsp[0].num));
        (yyval.node) = create_node(buffer, 0);
    }
#line 1421 "parser.tab.c"
    break;

  case 30: /* expressao: REAL  */
#line 185 "parser.y"
         {
        char buffer[64];
        sprintf(buffer, "REAL: %f", (yyvsp[0].fnum));
        (yyval.node) = create_node(buffer, 0);
    }
#line 1431 "parser.tab.c"
    break;

  case 31: /* expressao: LITERAL  */
#line 190 "parser.y"
            {
        char buffer[256];
        sprintf(buffer, "\"%s\"", (yyvsp[0].str));
        (yyval.node) = create_node(buffer, 0);
    }
#line 1441 "parser.tab.c"
    break;

  case 32: /* expressao: ID  */
#line 195 "parser.y"
       {
        (yyval.node) = create_node((yyvsp[0].str), 0);
    }
#line 1449 "parser.tab.c"
    break;

  case 33: /* expressao: expressao PLUS expressao  */
#line 198 "parser.y"
                             {
        (yyval.node) = create_node("+", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1457 "parser.tab.c"
    break;

  case 34: /* expressao: expressao MINUS expressao  */
#line 201 "parser.y"
                              {
        (yyval.node) = create_node("-", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1465 "parser.tab.c"
    break;

  case 35: /* expressao: expressao TIMES expressao  */
#line 204 "parser.y"
                              {
        (yyval.node) = create_node("*", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1473 "parser.tab.c"
    break;

  case 36: /* expressao: expressao DIV expressao  */
#line 207 "parser.y"
                            {
        (yyval.node) = create_node("/", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1481 "parser.tab.c"
    break;

  case 37: /* expressao: '(' expressao ')'  */
#line 210 "parser.y"
                      {
        (yyval.node) = create_node("()", 1, (yyvsp[-1].node));
    }
#line 1489 "parser.tab.c"
    break;

  case 38: /* expressao: expressao LT expressao  */
#line 213 "parser.y"
                               {
        (yyval.node) = create_node("<", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1497 "parser.tab.c"
    break;

  case 39: /* expressao: expressao LE expressao  */
#line 216 "parser.y"
                           {
        (yyval.node) = create_node("<=", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1505 "parser.tab.c"
    break;

  case 40: /* expressao: expressao GT expressao  */
#line 219 "parser.y"
                           {
        (yyval.node) = create_node(">", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1513 "parser.tab.c"
    break;

  case 41: /* expressao: expressao GE expressao  */
#line 222 "parser.y"
                           {
        (yyval.node) = create_node(">=", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1521 "parser.tab.c"
    break;

  case 42: /* expressao: expressao EQ expressao  */
#line 225 "parser.y"
                           {
        (yyval.node) = create_node("==", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1529 "parser.tab.c"
    break;

  case 43: /* expressao: expressao NEQ expressao  */
#line 228 "parser.y"
                            {
        (yyval.node) = create_node("!=", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1537 "parser.tab.c"
    break;

  case 44: /* vetor: '[' lista_elementos ']'  */
#line 233 "parser.y"
                            {
        (yyval.node) = create_node("vetor", 1, (yyvsp[-1].node));
    }
#line 1545 "parser.tab.c"
    break;

  case 45: /* lista_elementos: NUM  */
#line 238 "parser.y"
        {
        char buffer[64];
        sprintf(buffer, "NUM: %d", (yyvsp[0].num));
        (yyval.node) = create_node("elementos", 1, create_node(buffer, 0));
    }
#line 1555 "parser.tab.c"
    break;

  case 46: /* lista_elementos: lista_elementos ',' NUM  */
#line 243 "parser.y"
                            {
        char buffer[64];
        sprintf(buffer, "NUM: %d", (yyvsp[0].num));
        Node* num_node = create_node(buffer, 0);
        Node* list = (yyvsp[-2].node);
        list->children = realloc(list->children, sizeof(Node*) * (list->num_children + 1));
        list->children[list->num_children++] = num_node;
        (yyval.node) = list;
    }
#line 1569 "parser.tab.c"
    break;

  case 47: /* vetor_float: '[' lista_elementos_float ']'  */
#line 254 "parser.y"
                                  {
        (yyval.node) = create_node("vetor", 1, (yyvsp[-1].node));
    }
#line 1577 "parser.tab.c"
    break;

  case 48: /* lista_elementos_float: REAL  */
#line 259 "parser.y"
         {
        char buffer[64];
        sprintf(buffer, "REAL: %f", (yyvsp[0].fnum));
        (yyval.node) = create_node("elementos", 1, create_node(buffer, 0));
    }
#line 1587 "parser.tab.c"
    break;

  case 49: /* lista_elementos_float: lista_elementos_float ',' REAL  */
#line 264 "parser.y"
                                   {
        char buffer[64];
        sprintf(buffer, "REAL: %f", (yyvsp[0].fnum));
        Node* real_node = create_node(buffer, 0);
        Node* list = (yyvsp[-2].node);
        list->children = realloc(list->children, sizeof(Node*) * (list->num_children + 1));
        list->children[list->num_children++] = real_node;
        (yyval.node) = list;
    }
#line 1601 "parser.tab.c"
    break;

  case 50: /* lista_args: expressao  */
#line 275 "parser.y"
              {
        (yyval.node) = create_node("args", 1, (yyvsp[0].node));
    }
#line 1609 "parser.tab.c"
    break;

  case 51: /* lista_args: lista_args ',' expressao  */
#line 278 "parser.y"
                             {
        Node* list = (yyvsp[-2].node);
        list->children = realloc(list->children, sizeof(Node*) * (list->num_children + 1));
        list->children[list->num_children++] = (yyvsp[0].node);
        (yyval.node) = list;
    }
#line 1620 "parser.tab.c"
    break;

  case 52: /* lista_params: ID  */
#line 286 "parser.y"
       {
        (yyval.node) = create_node("args", 1, create_node((yyvsp[0].str), 0));
    }
#line 1628 "parser.tab.c"
    break;

  case 53: /* lista_params: lista_params ',' ID  */
#line 289 "parser.y"
                        {
        int n = (yyvsp[-2].node)->num_children;

        // Cria novo vetor com n + 1 filhos
        Node** children = malloc(sizeof(Node*) * (n + 1));
        for (int i = 0; i < n; i++) {
            children[i] = (yyvsp[-2].node)->children[i];
        }
        children[n] = create_node((yyvsp[0].str), 0);

        Node* new_args = malloc(sizeof(Node));
        new_args->label = strdup("args");
        new_args->num_children = n + 1;
        new_args->children = children;

        (yyval.node) = new_args;

        // Libera o antigo args se quiser evitar vazamento
        free((yyvsp[-2].node)->children);
        free((yyvsp[-2].node)->label);
        free((yyvsp[-2].node));
    }
#line 1655 "parser.tab.c"
    break;


#line 1659 "parser.tab.c"

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
      yyerror (YY_("syntax error"));
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

  return yyresult;
}

#line 312 "parser.y"


void yyerror(const char *s) {
    fprintf(stderr, "Erro sintático: %s\n", s);
}

int main() {
    if (yyparse() == 0) {
        print_tree(root, 0);
    }
    return 0;
}
