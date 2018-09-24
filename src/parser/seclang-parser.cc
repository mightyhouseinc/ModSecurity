// A Bison parser, made by GNU Bison 3.0.5.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


// First part of user declarations.

#line 37 "seclang-parser.cc" // lalr1.cc:406

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "seclang-parser.hh"

// User implementation prologue.

#line 51 "seclang-parser.cc" // lalr1.cc:414
// Unqualified %code blocks.
#line 360 "seclang-parser.yy" // lalr1.cc:415

#include "src/parser/driver.h"

#line 57 "seclang-parser.cc" // lalr1.cc:415


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
#line 143 "seclang-parser.cc" // lalr1.cc:481

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  seclang_parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
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
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  seclang_parser::seclang_parser (modsecurity::Parser::Driver& driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg)
  {}

  seclang_parser::~seclang_parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  seclang_parser::by_state::by_state ()
    : state (empty_state)
  {}

  seclang_parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  void
  seclang_parser::by_state::clear ()
  {
    state = empty_state;
  }

  void
  seclang_parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  seclang_parser::by_state::by_state (state_type s)
    : state (s)
  {}

  seclang_parser::symbol_number_type
  seclang_parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  seclang_parser::stack_symbol_type::stack_symbol_type ()
  {}

  seclang_parser::stack_symbol_type::stack_symbol_type (const stack_symbol_type& that)
    : super_type (that.state, that.location)
  {
    switch (that.type_get ())
    {
      case 144: // "Accuracy"
      case 145: // "Allow"
      case 146: // "Append"
      case 147: // "AuditLog"
      case 148: // "Block"
      case 149: // "Capture"
      case 150: // "Chain"
      case 151: // "ACTION_CTL_AUDIT_ENGINE"
      case 152: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case 153: // "ACTION_CTL_BDY_JSON"
      case 154: // "ACTION_CTL_BDY_XML"
      case 155: // "ACTION_CTL_BDY_URLENCODED"
      case 156: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case 157: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case 158: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case 159: // "ACTION_CTL_RULE_REMOVE_BY_TAG"
      case 160: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case 161: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case 162: // "Deny"
      case 163: // "DeprecateVar"
      case 164: // "Drop"
      case 165: // "Exec"
      case 166: // "ExpireVar"
      case 167: // "Id"
      case 168: // "InitCol"
      case 169: // "Log"
      case 170: // "LogData"
      case 171: // "Maturity"
      case 172: // "Msg"
      case 173: // "MultiMatch"
      case 174: // "NoAuditLog"
      case 175: // "NoLog"
      case 176: // "Pass"
      case 177: // "Pause"
      case 178: // "Phase"
      case 179: // "Prepend"
      case 180: // "Proxy"
      case 181: // "Redirect"
      case 182: // "Rev"
      case 183: // "SanitiseArg"
      case 184: // "SanitiseMatched"
      case 185: // "SanitiseMatchedBytes"
      case 186: // "SanitiseRequestHeader"
      case 187: // "SanitiseResponseHeader"
      case 188: // "SetEnv"
      case 189: // "SetRsc"
      case 190: // "SetSid"
      case 191: // "SetUID"
      case 192: // "Severity"
      case 193: // "Skip"
      case 194: // "SkipAfter"
      case 195: // "Status"
      case 196: // "Tag"
      case 197: // "ACTION_TRANSFORMATION_BASE_64_ENCODE"
      case 198: // "ACTION_TRANSFORMATION_BASE_64_DECODE"
      case 199: // "ACTION_TRANSFORMATION_BASE_64_DECODE_EXT"
      case 200: // "ACTION_TRANSFORMATION_CMD_LINE"
      case 201: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case 202: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case 203: // "ACTION_TRANSFORMATION_ESCAPE_SEQ_DECODE"
      case 204: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case 205: // "ACTION_TRANSFORMATION_HEX_DECODE"
      case 206: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case 207: // "ACTION_TRANSFORMATION_JS_DECODE"
      case 208: // "ACTION_TRANSFORMATION_LENGTH"
      case 209: // "ACTION_TRANSFORMATION_LOWERCASE"
      case 210: // "ACTION_TRANSFORMATION_MD5"
      case 211: // "ACTION_TRANSFORMATION_NONE"
      case 212: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case 213: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case 214: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case 215: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case 216: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case 217: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case 218: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case 219: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case 220: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case 221: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case 222: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case 223: // "ACTION_TRANSFORMATION_SHA1"
      case 224: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case 225: // "ACTION_TRANSFORMATION_TRIM"
      case 226: // "ACTION_TRANSFORMATION_TRIM_LEFT"
      case 227: // "ACTION_TRANSFORMATION_TRIM_RIGHT"
      case 228: // "ACTION_TRANSFORMATION_UPPERCASE"
      case 229: // "ACTION_TRANSFORMATION_URL_ENCODE"
      case 230: // "ACTION_TRANSFORMATION_URL_DECODE"
      case 231: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case 232: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case 233: // "Ver"
      case 234: // "xmlns"
      case 235: // "CONFIG_COMPONENT_SIG"
      case 236: // "CONFIG_CONN_ENGINE"
      case 237: // "CONFIG_SEC_ARGUMENT_SEPARATOR"
      case 238: // "CONFIG_SEC_WEB_APP_ID"
      case 239: // "CONFIG_SEC_SERVER_SIG"
      case 240: // "CONFIG_DIR_AUDIT_DIR"
      case 241: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case 242: // "CONFIG_DIR_AUDIT_ENG"
      case 243: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case 244: // "CONFIG_DIR_AUDIT_LOG"
      case 245: // "CONFIG_DIR_AUDIT_LOG2"
      case 246: // "CONFIG_DIR_AUDIT_LOG_P"
      case 247: // "CONFIG_DIR_AUDIT_STS"
      case 248: // "CONFIG_DIR_AUDIT_TPE"
      case 249: // "CONFIG_DIR_DEBUG_LOG"
      case 250: // "CONFIG_DIR_DEBUG_LVL"
      case 251: // "CONFIG_SEC_CACHE_TRANSFORMATIONS"
      case 252: // "CONFIG_SEC_DISABLE_BACKEND_COMPRESS"
      case 253: // "CONFIG_SEC_HASH_ENGINE"
      case 254: // "CONFIG_SEC_HASH_KEY"
      case 255: // "CONFIG_SEC_HASH_PARAM"
      case 256: // "CONFIG_SEC_HASH_METHOD_RX"
      case 257: // "CONFIG_SEC_HASH_METHOD_PM"
      case 258: // "CONFIG_SEC_CHROOT_DIR"
      case 259: // "CONFIG_DIR_GEO_DB"
      case 260: // "CONFIG_DIR_GSB_DB"
      case 261: // "CONFIG_SEC_GUARDIAN_LOG"
      case 262: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case 263: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case 264: // "CONFIG_SEC_CONN_R_STATE_LIMIT"
      case 265: // "CONFIG_SEC_CONN_W_STATE_LIMIT"
      case 266: // "CONFIG_SEC_SENSOR_ID"
      case 267: // "CONFIG_DIR_REQ_BODY"
      case 268: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case 269: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case 270: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case 271: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case 272: // "CONFIG_DIR_RES_BODY"
      case 273: // "CONFIG_DIR_RES_BODY_LIMIT"
      case 274: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case 275: // "CONFIG_SEC_RULE_INHERITANCE"
      case 276: // "CONFIG_SEC_RULE_PERF_TIME"
      case 277: // "CONFIG_DIR_RULE_ENG"
      case 278: // "CONFIG_DIR_SEC_ACTION"
      case 279: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case 280: // "CONFIG_DIR_SEC_MARKER"
      case 281: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case 282: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case 283: // "CONFIG_SEC_HTTP_BLKEY"
      case 284: // "CONFIG_SEC_INTERCEPT_ON_ERROR"
      case 285: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case 286: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case 287: // "CONFIG_SEC_RULE_REMOVE_BY_MSG"
      case 288: // "CONFIG_SEC_RULE_REMOVE_BY_TAG"
      case 289: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG"
      case 290: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG"
      case 291: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID"
      case 292: // "CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID"
      case 293: // "CONFIG_UPDLOAD_KEEP_FILES"
      case 294: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case 295: // "CONFIG_UPLOAD_DIR"
      case 296: // "CONFIG_UPLOAD_FILE_LIMIT"
      case 297: // "CONFIG_UPLOAD_FILE_MODE"
      case 298: // "CONFIG_VALUE_ABORT"
      case 299: // "CONFIG_VALUE_DETC"
      case 300: // "CONFIG_VALUE_HTTPS"
      case 301: // "CONFIG_VALUE_OFF"
      case 302: // "CONFIG_VALUE_ON"
      case 303: // "CONFIG_VALUE_PARALLEL"
      case 304: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case 305: // "CONFIG_VALUE_REJECT"
      case 306: // "CONFIG_VALUE_RELEVANT_ONLY"
      case 307: // "CONFIG_VALUE_SERIAL"
      case 308: // "CONFIG_VALUE_WARN"
      case 309: // "CONFIG_XML_EXTERNAL_ENTITY"
      case 310: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case 311: // "CONGIG_DIR_SEC_ARG_SEP"
      case 312: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case 313: // "CONFIG_SEC_COOKIEV0_SEPARATOR"
      case 314: // "CONGIG_DIR_SEC_DATA_DIR"
      case 315: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case 316: // "CONFIG_SEC_STREAM_IN_BODY_INSPECTION"
      case 317: // "CONFIG_SEC_STREAM_OUT_BODY_INSPECTION"
      case 318: // "CONGIG_DIR_SEC_TMP_DIR"
      case 319: // "DIRECTIVE"
      case 320: // "DIRECTIVE_SECRULESCRIPT"
      case 321: // "FREE_TEXT_QUOTE_MACRO_EXPANSION"
      case 322: // "QUOTATION_MARK"
      case 323: // "RUN_TIME_VAR_BLD"
      case 324: // "RUN_TIME_VAR_DUR"
      case 325: // "RUN_TIME_VAR_HSV"
      case 326: // "RUN_TIME_VAR_REMOTE_USER"
      case 327: // "RUN_TIME_VAR_TIME"
      case 328: // "RUN_TIME_VAR_TIME_DAY"
      case 329: // "RUN_TIME_VAR_TIME_EPOCH"
      case 330: // "RUN_TIME_VAR_TIME_HOUR"
      case 331: // "RUN_TIME_VAR_TIME_MIN"
      case 332: // "RUN_TIME_VAR_TIME_MON"
      case 333: // "RUN_TIME_VAR_TIME_SEC"
      case 334: // "RUN_TIME_VAR_TIME_WDAY"
      case 335: // "RUN_TIME_VAR_TIME_YEAR"
      case 336: // "VARIABLE"
      case 337: // "Dictionary element"
      case 338: // "Dictionary element, selected by regexp"
        value.copy< std::string > (that.value);
        break;

      case 345: // op
      case 346: // op_before_init
        value.copy< std::unique_ptr<Operator> > (that.value);
        break;

      case 354: // run_time_string
        value.copy< std::unique_ptr<RunTimeString> > (that.value);
        break;

      case 351: // var
        value.copy< std::unique_ptr<Variable> > (that.value);
        break;

      case 352: // act
      case 353: // setvar_action
        value.copy< std::unique_ptr<actions::Action> > (that.value);
        break;

      case 348: // variables
      case 349: // variables_pre_process
      case 350: // variables_may_be_quoted
        value.copy< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > (that.value);
        break;

      case 343: // actions
      case 344: // actions_may_quoted
        value.copy< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > (that.value);
        break;

      default:
        break;
    }

  }

  seclang_parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
    switch (that.type_get ())
    {
      case 144: // "Accuracy"
      case 145: // "Allow"
      case 146: // "Append"
      case 147: // "AuditLog"
      case 148: // "Block"
      case 149: // "Capture"
      case 150: // "Chain"
      case 151: // "ACTION_CTL_AUDIT_ENGINE"
      case 152: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case 153: // "ACTION_CTL_BDY_JSON"
      case 154: // "ACTION_CTL_BDY_XML"
      case 155: // "ACTION_CTL_BDY_URLENCODED"
      case 156: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case 157: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case 158: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case 159: // "ACTION_CTL_RULE_REMOVE_BY_TAG"
      case 160: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case 161: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case 162: // "Deny"
      case 163: // "DeprecateVar"
      case 164: // "Drop"
      case 165: // "Exec"
      case 166: // "ExpireVar"
      case 167: // "Id"
      case 168: // "InitCol"
      case 169: // "Log"
      case 170: // "LogData"
      case 171: // "Maturity"
      case 172: // "Msg"
      case 173: // "MultiMatch"
      case 174: // "NoAuditLog"
      case 175: // "NoLog"
      case 176: // "Pass"
      case 177: // "Pause"
      case 178: // "Phase"
      case 179: // "Prepend"
      case 180: // "Proxy"
      case 181: // "Redirect"
      case 182: // "Rev"
      case 183: // "SanitiseArg"
      case 184: // "SanitiseMatched"
      case 185: // "SanitiseMatchedBytes"
      case 186: // "SanitiseRequestHeader"
      case 187: // "SanitiseResponseHeader"
      case 188: // "SetEnv"
      case 189: // "SetRsc"
      case 190: // "SetSid"
      case 191: // "SetUID"
      case 192: // "Severity"
      case 193: // "Skip"
      case 194: // "SkipAfter"
      case 195: // "Status"
      case 196: // "Tag"
      case 197: // "ACTION_TRANSFORMATION_BASE_64_ENCODE"
      case 198: // "ACTION_TRANSFORMATION_BASE_64_DECODE"
      case 199: // "ACTION_TRANSFORMATION_BASE_64_DECODE_EXT"
      case 200: // "ACTION_TRANSFORMATION_CMD_LINE"
      case 201: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case 202: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case 203: // "ACTION_TRANSFORMATION_ESCAPE_SEQ_DECODE"
      case 204: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case 205: // "ACTION_TRANSFORMATION_HEX_DECODE"
      case 206: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case 207: // "ACTION_TRANSFORMATION_JS_DECODE"
      case 208: // "ACTION_TRANSFORMATION_LENGTH"
      case 209: // "ACTION_TRANSFORMATION_LOWERCASE"
      case 210: // "ACTION_TRANSFORMATION_MD5"
      case 211: // "ACTION_TRANSFORMATION_NONE"
      case 212: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case 213: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case 214: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case 215: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case 216: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case 217: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case 218: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case 219: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case 220: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case 221: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case 222: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case 223: // "ACTION_TRANSFORMATION_SHA1"
      case 224: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case 225: // "ACTION_TRANSFORMATION_TRIM"
      case 226: // "ACTION_TRANSFORMATION_TRIM_LEFT"
      case 227: // "ACTION_TRANSFORMATION_TRIM_RIGHT"
      case 228: // "ACTION_TRANSFORMATION_UPPERCASE"
      case 229: // "ACTION_TRANSFORMATION_URL_ENCODE"
      case 230: // "ACTION_TRANSFORMATION_URL_DECODE"
      case 231: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case 232: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case 233: // "Ver"
      case 234: // "xmlns"
      case 235: // "CONFIG_COMPONENT_SIG"
      case 236: // "CONFIG_CONN_ENGINE"
      case 237: // "CONFIG_SEC_ARGUMENT_SEPARATOR"
      case 238: // "CONFIG_SEC_WEB_APP_ID"
      case 239: // "CONFIG_SEC_SERVER_SIG"
      case 240: // "CONFIG_DIR_AUDIT_DIR"
      case 241: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case 242: // "CONFIG_DIR_AUDIT_ENG"
      case 243: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case 244: // "CONFIG_DIR_AUDIT_LOG"
      case 245: // "CONFIG_DIR_AUDIT_LOG2"
      case 246: // "CONFIG_DIR_AUDIT_LOG_P"
      case 247: // "CONFIG_DIR_AUDIT_STS"
      case 248: // "CONFIG_DIR_AUDIT_TPE"
      case 249: // "CONFIG_DIR_DEBUG_LOG"
      case 250: // "CONFIG_DIR_DEBUG_LVL"
      case 251: // "CONFIG_SEC_CACHE_TRANSFORMATIONS"
      case 252: // "CONFIG_SEC_DISABLE_BACKEND_COMPRESS"
      case 253: // "CONFIG_SEC_HASH_ENGINE"
      case 254: // "CONFIG_SEC_HASH_KEY"
      case 255: // "CONFIG_SEC_HASH_PARAM"
      case 256: // "CONFIG_SEC_HASH_METHOD_RX"
      case 257: // "CONFIG_SEC_HASH_METHOD_PM"
      case 258: // "CONFIG_SEC_CHROOT_DIR"
      case 259: // "CONFIG_DIR_GEO_DB"
      case 260: // "CONFIG_DIR_GSB_DB"
      case 261: // "CONFIG_SEC_GUARDIAN_LOG"
      case 262: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case 263: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case 264: // "CONFIG_SEC_CONN_R_STATE_LIMIT"
      case 265: // "CONFIG_SEC_CONN_W_STATE_LIMIT"
      case 266: // "CONFIG_SEC_SENSOR_ID"
      case 267: // "CONFIG_DIR_REQ_BODY"
      case 268: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case 269: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case 270: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case 271: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case 272: // "CONFIG_DIR_RES_BODY"
      case 273: // "CONFIG_DIR_RES_BODY_LIMIT"
      case 274: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case 275: // "CONFIG_SEC_RULE_INHERITANCE"
      case 276: // "CONFIG_SEC_RULE_PERF_TIME"
      case 277: // "CONFIG_DIR_RULE_ENG"
      case 278: // "CONFIG_DIR_SEC_ACTION"
      case 279: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case 280: // "CONFIG_DIR_SEC_MARKER"
      case 281: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case 282: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case 283: // "CONFIG_SEC_HTTP_BLKEY"
      case 284: // "CONFIG_SEC_INTERCEPT_ON_ERROR"
      case 285: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case 286: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case 287: // "CONFIG_SEC_RULE_REMOVE_BY_MSG"
      case 288: // "CONFIG_SEC_RULE_REMOVE_BY_TAG"
      case 289: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG"
      case 290: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG"
      case 291: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID"
      case 292: // "CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID"
      case 293: // "CONFIG_UPDLOAD_KEEP_FILES"
      case 294: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case 295: // "CONFIG_UPLOAD_DIR"
      case 296: // "CONFIG_UPLOAD_FILE_LIMIT"
      case 297: // "CONFIG_UPLOAD_FILE_MODE"
      case 298: // "CONFIG_VALUE_ABORT"
      case 299: // "CONFIG_VALUE_DETC"
      case 300: // "CONFIG_VALUE_HTTPS"
      case 301: // "CONFIG_VALUE_OFF"
      case 302: // "CONFIG_VALUE_ON"
      case 303: // "CONFIG_VALUE_PARALLEL"
      case 304: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case 305: // "CONFIG_VALUE_REJECT"
      case 306: // "CONFIG_VALUE_RELEVANT_ONLY"
      case 307: // "CONFIG_VALUE_SERIAL"
      case 308: // "CONFIG_VALUE_WARN"
      case 309: // "CONFIG_XML_EXTERNAL_ENTITY"
      case 310: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case 311: // "CONGIG_DIR_SEC_ARG_SEP"
      case 312: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case 313: // "CONFIG_SEC_COOKIEV0_SEPARATOR"
      case 314: // "CONGIG_DIR_SEC_DATA_DIR"
      case 315: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case 316: // "CONFIG_SEC_STREAM_IN_BODY_INSPECTION"
      case 317: // "CONFIG_SEC_STREAM_OUT_BODY_INSPECTION"
      case 318: // "CONGIG_DIR_SEC_TMP_DIR"
      case 319: // "DIRECTIVE"
      case 320: // "DIRECTIVE_SECRULESCRIPT"
      case 321: // "FREE_TEXT_QUOTE_MACRO_EXPANSION"
      case 322: // "QUOTATION_MARK"
      case 323: // "RUN_TIME_VAR_BLD"
      case 324: // "RUN_TIME_VAR_DUR"
      case 325: // "RUN_TIME_VAR_HSV"
      case 326: // "RUN_TIME_VAR_REMOTE_USER"
      case 327: // "RUN_TIME_VAR_TIME"
      case 328: // "RUN_TIME_VAR_TIME_DAY"
      case 329: // "RUN_TIME_VAR_TIME_EPOCH"
      case 330: // "RUN_TIME_VAR_TIME_HOUR"
      case 331: // "RUN_TIME_VAR_TIME_MIN"
      case 332: // "RUN_TIME_VAR_TIME_MON"
      case 333: // "RUN_TIME_VAR_TIME_SEC"
      case 334: // "RUN_TIME_VAR_TIME_WDAY"
      case 335: // "RUN_TIME_VAR_TIME_YEAR"
      case 336: // "VARIABLE"
      case 337: // "Dictionary element"
      case 338: // "Dictionary element, selected by regexp"
        value.move< std::string > (that.value);
        break;

      case 345: // op
      case 346: // op_before_init
        value.move< std::unique_ptr<Operator> > (that.value);
        break;

      case 354: // run_time_string
        value.move< std::unique_ptr<RunTimeString> > (that.value);
        break;

      case 351: // var
        value.move< std::unique_ptr<Variable> > (that.value);
        break;

      case 352: // act
      case 353: // setvar_action
        value.move< std::unique_ptr<actions::Action> > (that.value);
        break;

      case 348: // variables
      case 349: // variables_pre_process
      case 350: // variables_may_be_quoted
        value.move< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > (that.value);
        break;

      case 343: // actions
      case 344: // actions_may_quoted
        value.move< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

  seclang_parser::stack_symbol_type&
  seclang_parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.type_get ())
    {
      case 144: // "Accuracy"
      case 145: // "Allow"
      case 146: // "Append"
      case 147: // "AuditLog"
      case 148: // "Block"
      case 149: // "Capture"
      case 150: // "Chain"
      case 151: // "ACTION_CTL_AUDIT_ENGINE"
      case 152: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case 153: // "ACTION_CTL_BDY_JSON"
      case 154: // "ACTION_CTL_BDY_XML"
      case 155: // "ACTION_CTL_BDY_URLENCODED"
      case 156: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case 157: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case 158: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case 159: // "ACTION_CTL_RULE_REMOVE_BY_TAG"
      case 160: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case 161: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case 162: // "Deny"
      case 163: // "DeprecateVar"
      case 164: // "Drop"
      case 165: // "Exec"
      case 166: // "ExpireVar"
      case 167: // "Id"
      case 168: // "InitCol"
      case 169: // "Log"
      case 170: // "LogData"
      case 171: // "Maturity"
      case 172: // "Msg"
      case 173: // "MultiMatch"
      case 174: // "NoAuditLog"
      case 175: // "NoLog"
      case 176: // "Pass"
      case 177: // "Pause"
      case 178: // "Phase"
      case 179: // "Prepend"
      case 180: // "Proxy"
      case 181: // "Redirect"
      case 182: // "Rev"
      case 183: // "SanitiseArg"
      case 184: // "SanitiseMatched"
      case 185: // "SanitiseMatchedBytes"
      case 186: // "SanitiseRequestHeader"
      case 187: // "SanitiseResponseHeader"
      case 188: // "SetEnv"
      case 189: // "SetRsc"
      case 190: // "SetSid"
      case 191: // "SetUID"
      case 192: // "Severity"
      case 193: // "Skip"
      case 194: // "SkipAfter"
      case 195: // "Status"
      case 196: // "Tag"
      case 197: // "ACTION_TRANSFORMATION_BASE_64_ENCODE"
      case 198: // "ACTION_TRANSFORMATION_BASE_64_DECODE"
      case 199: // "ACTION_TRANSFORMATION_BASE_64_DECODE_EXT"
      case 200: // "ACTION_TRANSFORMATION_CMD_LINE"
      case 201: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case 202: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case 203: // "ACTION_TRANSFORMATION_ESCAPE_SEQ_DECODE"
      case 204: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case 205: // "ACTION_TRANSFORMATION_HEX_DECODE"
      case 206: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case 207: // "ACTION_TRANSFORMATION_JS_DECODE"
      case 208: // "ACTION_TRANSFORMATION_LENGTH"
      case 209: // "ACTION_TRANSFORMATION_LOWERCASE"
      case 210: // "ACTION_TRANSFORMATION_MD5"
      case 211: // "ACTION_TRANSFORMATION_NONE"
      case 212: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case 213: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case 214: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case 215: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case 216: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case 217: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case 218: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case 219: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case 220: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case 221: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case 222: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case 223: // "ACTION_TRANSFORMATION_SHA1"
      case 224: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case 225: // "ACTION_TRANSFORMATION_TRIM"
      case 226: // "ACTION_TRANSFORMATION_TRIM_LEFT"
      case 227: // "ACTION_TRANSFORMATION_TRIM_RIGHT"
      case 228: // "ACTION_TRANSFORMATION_UPPERCASE"
      case 229: // "ACTION_TRANSFORMATION_URL_ENCODE"
      case 230: // "ACTION_TRANSFORMATION_URL_DECODE"
      case 231: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case 232: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case 233: // "Ver"
      case 234: // "xmlns"
      case 235: // "CONFIG_COMPONENT_SIG"
      case 236: // "CONFIG_CONN_ENGINE"
      case 237: // "CONFIG_SEC_ARGUMENT_SEPARATOR"
      case 238: // "CONFIG_SEC_WEB_APP_ID"
      case 239: // "CONFIG_SEC_SERVER_SIG"
      case 240: // "CONFIG_DIR_AUDIT_DIR"
      case 241: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case 242: // "CONFIG_DIR_AUDIT_ENG"
      case 243: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case 244: // "CONFIG_DIR_AUDIT_LOG"
      case 245: // "CONFIG_DIR_AUDIT_LOG2"
      case 246: // "CONFIG_DIR_AUDIT_LOG_P"
      case 247: // "CONFIG_DIR_AUDIT_STS"
      case 248: // "CONFIG_DIR_AUDIT_TPE"
      case 249: // "CONFIG_DIR_DEBUG_LOG"
      case 250: // "CONFIG_DIR_DEBUG_LVL"
      case 251: // "CONFIG_SEC_CACHE_TRANSFORMATIONS"
      case 252: // "CONFIG_SEC_DISABLE_BACKEND_COMPRESS"
      case 253: // "CONFIG_SEC_HASH_ENGINE"
      case 254: // "CONFIG_SEC_HASH_KEY"
      case 255: // "CONFIG_SEC_HASH_PARAM"
      case 256: // "CONFIG_SEC_HASH_METHOD_RX"
      case 257: // "CONFIG_SEC_HASH_METHOD_PM"
      case 258: // "CONFIG_SEC_CHROOT_DIR"
      case 259: // "CONFIG_DIR_GEO_DB"
      case 260: // "CONFIG_DIR_GSB_DB"
      case 261: // "CONFIG_SEC_GUARDIAN_LOG"
      case 262: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case 263: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case 264: // "CONFIG_SEC_CONN_R_STATE_LIMIT"
      case 265: // "CONFIG_SEC_CONN_W_STATE_LIMIT"
      case 266: // "CONFIG_SEC_SENSOR_ID"
      case 267: // "CONFIG_DIR_REQ_BODY"
      case 268: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case 269: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case 270: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case 271: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case 272: // "CONFIG_DIR_RES_BODY"
      case 273: // "CONFIG_DIR_RES_BODY_LIMIT"
      case 274: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case 275: // "CONFIG_SEC_RULE_INHERITANCE"
      case 276: // "CONFIG_SEC_RULE_PERF_TIME"
      case 277: // "CONFIG_DIR_RULE_ENG"
      case 278: // "CONFIG_DIR_SEC_ACTION"
      case 279: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case 280: // "CONFIG_DIR_SEC_MARKER"
      case 281: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case 282: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case 283: // "CONFIG_SEC_HTTP_BLKEY"
      case 284: // "CONFIG_SEC_INTERCEPT_ON_ERROR"
      case 285: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case 286: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case 287: // "CONFIG_SEC_RULE_REMOVE_BY_MSG"
      case 288: // "CONFIG_SEC_RULE_REMOVE_BY_TAG"
      case 289: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG"
      case 290: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG"
      case 291: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID"
      case 292: // "CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID"
      case 293: // "CONFIG_UPDLOAD_KEEP_FILES"
      case 294: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case 295: // "CONFIG_UPLOAD_DIR"
      case 296: // "CONFIG_UPLOAD_FILE_LIMIT"
      case 297: // "CONFIG_UPLOAD_FILE_MODE"
      case 298: // "CONFIG_VALUE_ABORT"
      case 299: // "CONFIG_VALUE_DETC"
      case 300: // "CONFIG_VALUE_HTTPS"
      case 301: // "CONFIG_VALUE_OFF"
      case 302: // "CONFIG_VALUE_ON"
      case 303: // "CONFIG_VALUE_PARALLEL"
      case 304: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case 305: // "CONFIG_VALUE_REJECT"
      case 306: // "CONFIG_VALUE_RELEVANT_ONLY"
      case 307: // "CONFIG_VALUE_SERIAL"
      case 308: // "CONFIG_VALUE_WARN"
      case 309: // "CONFIG_XML_EXTERNAL_ENTITY"
      case 310: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case 311: // "CONGIG_DIR_SEC_ARG_SEP"
      case 312: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case 313: // "CONFIG_SEC_COOKIEV0_SEPARATOR"
      case 314: // "CONGIG_DIR_SEC_DATA_DIR"
      case 315: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case 316: // "CONFIG_SEC_STREAM_IN_BODY_INSPECTION"
      case 317: // "CONFIG_SEC_STREAM_OUT_BODY_INSPECTION"
      case 318: // "CONGIG_DIR_SEC_TMP_DIR"
      case 319: // "DIRECTIVE"
      case 320: // "DIRECTIVE_SECRULESCRIPT"
      case 321: // "FREE_TEXT_QUOTE_MACRO_EXPANSION"
      case 322: // "QUOTATION_MARK"
      case 323: // "RUN_TIME_VAR_BLD"
      case 324: // "RUN_TIME_VAR_DUR"
      case 325: // "RUN_TIME_VAR_HSV"
      case 326: // "RUN_TIME_VAR_REMOTE_USER"
      case 327: // "RUN_TIME_VAR_TIME"
      case 328: // "RUN_TIME_VAR_TIME_DAY"
      case 329: // "RUN_TIME_VAR_TIME_EPOCH"
      case 330: // "RUN_TIME_VAR_TIME_HOUR"
      case 331: // "RUN_TIME_VAR_TIME_MIN"
      case 332: // "RUN_TIME_VAR_TIME_MON"
      case 333: // "RUN_TIME_VAR_TIME_SEC"
      case 334: // "RUN_TIME_VAR_TIME_WDAY"
      case 335: // "RUN_TIME_VAR_TIME_YEAR"
      case 336: // "VARIABLE"
      case 337: // "Dictionary element"
      case 338: // "Dictionary element, selected by regexp"
        value.copy< std::string > (that.value);
        break;

      case 345: // op
      case 346: // op_before_init
        value.copy< std::unique_ptr<Operator> > (that.value);
        break;

      case 354: // run_time_string
        value.copy< std::unique_ptr<RunTimeString> > (that.value);
        break;

      case 351: // var
        value.copy< std::unique_ptr<Variable> > (that.value);
        break;

      case 352: // act
      case 353: // setvar_action
        value.copy< std::unique_ptr<actions::Action> > (that.value);
        break;

      case 348: // variables
      case 349: // variables_pre_process
      case 350: // variables_may_be_quoted
        value.copy< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > (that.value);
        break;

      case 343: // actions
      case 344: // actions_may_quoted
        value.copy< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }


  template <typename Base>
  void
  seclang_parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  seclang_parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  void
  seclang_parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  void
  seclang_parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  void
  seclang_parser::yypop_ (unsigned n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  seclang_parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  seclang_parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  seclang_parser::debug_level_type
  seclang_parser::debug_level () const
  {
    return yydebug_;
  }

  void
  seclang_parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  seclang_parser::state_type
  seclang_parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  bool
  seclang_parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  seclang_parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  seclang_parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse\n";


    // User initialization code.
    #line 353 "/home/zimmerle/core-trustwave/ModSecurity/src/parser/seclang-parser.yy" // lalr1.cc:737
{
  // Initialize the initial location.
  yyla.location.begin.filename = yyla.location.end.filename = &driver.file;
}

#line 1095 "seclang-parser.cc" // lalr1.cc:737

    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << '\n';

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            symbol_type yylookahead (yylex (driver));
            yyla.move (yylookahead);
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case 144: // "Accuracy"
      case 145: // "Allow"
      case 146: // "Append"
      case 147: // "AuditLog"
      case 148: // "Block"
      case 149: // "Capture"
      case 150: // "Chain"
      case 151: // "ACTION_CTL_AUDIT_ENGINE"
      case 152: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case 153: // "ACTION_CTL_BDY_JSON"
      case 154: // "ACTION_CTL_BDY_XML"
      case 155: // "ACTION_CTL_BDY_URLENCODED"
      case 156: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case 157: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case 158: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case 159: // "ACTION_CTL_RULE_REMOVE_BY_TAG"
      case 160: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case 161: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case 162: // "Deny"
      case 163: // "DeprecateVar"
      case 164: // "Drop"
      case 165: // "Exec"
      case 166: // "ExpireVar"
      case 167: // "Id"
      case 168: // "InitCol"
      case 169: // "Log"
      case 170: // "LogData"
      case 171: // "Maturity"
      case 172: // "Msg"
      case 173: // "MultiMatch"
      case 174: // "NoAuditLog"
      case 175: // "NoLog"
      case 176: // "Pass"
      case 177: // "Pause"
      case 178: // "Phase"
      case 179: // "Prepend"
      case 180: // "Proxy"
      case 181: // "Redirect"
      case 182: // "Rev"
      case 183: // "SanitiseArg"
      case 184: // "SanitiseMatched"
      case 185: // "SanitiseMatchedBytes"
      case 186: // "SanitiseRequestHeader"
      case 187: // "SanitiseResponseHeader"
      case 188: // "SetEnv"
      case 189: // "SetRsc"
      case 190: // "SetSid"
      case 191: // "SetUID"
      case 192: // "Severity"
      case 193: // "Skip"
      case 194: // "SkipAfter"
      case 195: // "Status"
      case 196: // "Tag"
      case 197: // "ACTION_TRANSFORMATION_BASE_64_ENCODE"
      case 198: // "ACTION_TRANSFORMATION_BASE_64_DECODE"
      case 199: // "ACTION_TRANSFORMATION_BASE_64_DECODE_EXT"
      case 200: // "ACTION_TRANSFORMATION_CMD_LINE"
      case 201: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case 202: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case 203: // "ACTION_TRANSFORMATION_ESCAPE_SEQ_DECODE"
      case 204: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case 205: // "ACTION_TRANSFORMATION_HEX_DECODE"
      case 206: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case 207: // "ACTION_TRANSFORMATION_JS_DECODE"
      case 208: // "ACTION_TRANSFORMATION_LENGTH"
      case 209: // "ACTION_TRANSFORMATION_LOWERCASE"
      case 210: // "ACTION_TRANSFORMATION_MD5"
      case 211: // "ACTION_TRANSFORMATION_NONE"
      case 212: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case 213: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case 214: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case 215: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case 216: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case 217: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case 218: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case 219: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case 220: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case 221: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case 222: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case 223: // "ACTION_TRANSFORMATION_SHA1"
      case 224: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case 225: // "ACTION_TRANSFORMATION_TRIM"
      case 226: // "ACTION_TRANSFORMATION_TRIM_LEFT"
      case 227: // "ACTION_TRANSFORMATION_TRIM_RIGHT"
      case 228: // "ACTION_TRANSFORMATION_UPPERCASE"
      case 229: // "ACTION_TRANSFORMATION_URL_ENCODE"
      case 230: // "ACTION_TRANSFORMATION_URL_DECODE"
      case 231: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case 232: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case 233: // "Ver"
      case 234: // "xmlns"
      case 235: // "CONFIG_COMPONENT_SIG"
      case 236: // "CONFIG_CONN_ENGINE"
      case 237: // "CONFIG_SEC_ARGUMENT_SEPARATOR"
      case 238: // "CONFIG_SEC_WEB_APP_ID"
      case 239: // "CONFIG_SEC_SERVER_SIG"
      case 240: // "CONFIG_DIR_AUDIT_DIR"
      case 241: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case 242: // "CONFIG_DIR_AUDIT_ENG"
      case 243: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case 244: // "CONFIG_DIR_AUDIT_LOG"
      case 245: // "CONFIG_DIR_AUDIT_LOG2"
      case 246: // "CONFIG_DIR_AUDIT_LOG_P"
      case 247: // "CONFIG_DIR_AUDIT_STS"
      case 248: // "CONFIG_DIR_AUDIT_TPE"
      case 249: // "CONFIG_DIR_DEBUG_LOG"
      case 250: // "CONFIG_DIR_DEBUG_LVL"
      case 251: // "CONFIG_SEC_CACHE_TRANSFORMATIONS"
      case 252: // "CONFIG_SEC_DISABLE_BACKEND_COMPRESS"
      case 253: // "CONFIG_SEC_HASH_ENGINE"
      case 254: // "CONFIG_SEC_HASH_KEY"
      case 255: // "CONFIG_SEC_HASH_PARAM"
      case 256: // "CONFIG_SEC_HASH_METHOD_RX"
      case 257: // "CONFIG_SEC_HASH_METHOD_PM"
      case 258: // "CONFIG_SEC_CHROOT_DIR"
      case 259: // "CONFIG_DIR_GEO_DB"
      case 260: // "CONFIG_DIR_GSB_DB"
      case 261: // "CONFIG_SEC_GUARDIAN_LOG"
      case 262: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case 263: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case 264: // "CONFIG_SEC_CONN_R_STATE_LIMIT"
      case 265: // "CONFIG_SEC_CONN_W_STATE_LIMIT"
      case 266: // "CONFIG_SEC_SENSOR_ID"
      case 267: // "CONFIG_DIR_REQ_BODY"
      case 268: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case 269: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case 270: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case 271: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case 272: // "CONFIG_DIR_RES_BODY"
      case 273: // "CONFIG_DIR_RES_BODY_LIMIT"
      case 274: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case 275: // "CONFIG_SEC_RULE_INHERITANCE"
      case 276: // "CONFIG_SEC_RULE_PERF_TIME"
      case 277: // "CONFIG_DIR_RULE_ENG"
      case 278: // "CONFIG_DIR_SEC_ACTION"
      case 279: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case 280: // "CONFIG_DIR_SEC_MARKER"
      case 281: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case 282: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case 283: // "CONFIG_SEC_HTTP_BLKEY"
      case 284: // "CONFIG_SEC_INTERCEPT_ON_ERROR"
      case 285: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case 286: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case 287: // "CONFIG_SEC_RULE_REMOVE_BY_MSG"
      case 288: // "CONFIG_SEC_RULE_REMOVE_BY_TAG"
      case 289: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG"
      case 290: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG"
      case 291: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID"
      case 292: // "CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID"
      case 293: // "CONFIG_UPDLOAD_KEEP_FILES"
      case 294: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case 295: // "CONFIG_UPLOAD_DIR"
      case 296: // "CONFIG_UPLOAD_FILE_LIMIT"
      case 297: // "CONFIG_UPLOAD_FILE_MODE"
      case 298: // "CONFIG_VALUE_ABORT"
      case 299: // "CONFIG_VALUE_DETC"
      case 300: // "CONFIG_VALUE_HTTPS"
      case 301: // "CONFIG_VALUE_OFF"
      case 302: // "CONFIG_VALUE_ON"
      case 303: // "CONFIG_VALUE_PARALLEL"
      case 304: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case 305: // "CONFIG_VALUE_REJECT"
      case 306: // "CONFIG_VALUE_RELEVANT_ONLY"
      case 307: // "CONFIG_VALUE_SERIAL"
      case 308: // "CONFIG_VALUE_WARN"
      case 309: // "CONFIG_XML_EXTERNAL_ENTITY"
      case 310: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case 311: // "CONGIG_DIR_SEC_ARG_SEP"
      case 312: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case 313: // "CONFIG_SEC_COOKIEV0_SEPARATOR"
      case 314: // "CONGIG_DIR_SEC_DATA_DIR"
      case 315: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case 316: // "CONFIG_SEC_STREAM_IN_BODY_INSPECTION"
      case 317: // "CONFIG_SEC_STREAM_OUT_BODY_INSPECTION"
      case 318: // "CONGIG_DIR_SEC_TMP_DIR"
      case 319: // "DIRECTIVE"
      case 320: // "DIRECTIVE_SECRULESCRIPT"
      case 321: // "FREE_TEXT_QUOTE_MACRO_EXPANSION"
      case 322: // "QUOTATION_MARK"
      case 323: // "RUN_TIME_VAR_BLD"
      case 324: // "RUN_TIME_VAR_DUR"
      case 325: // "RUN_TIME_VAR_HSV"
      case 326: // "RUN_TIME_VAR_REMOTE_USER"
      case 327: // "RUN_TIME_VAR_TIME"
      case 328: // "RUN_TIME_VAR_TIME_DAY"
      case 329: // "RUN_TIME_VAR_TIME_EPOCH"
      case 330: // "RUN_TIME_VAR_TIME_HOUR"
      case 331: // "RUN_TIME_VAR_TIME_MIN"
      case 332: // "RUN_TIME_VAR_TIME_MON"
      case 333: // "RUN_TIME_VAR_TIME_SEC"
      case 334: // "RUN_TIME_VAR_TIME_WDAY"
      case 335: // "RUN_TIME_VAR_TIME_YEAR"
      case 336: // "VARIABLE"
      case 337: // "Dictionary element"
      case 338: // "Dictionary element, selected by regexp"
        yylhs.value.build< std::string > ();
        break;

      case 345: // op
      case 346: // op_before_init
        yylhs.value.build< std::unique_ptr<Operator> > ();
        break;

      case 354: // run_time_string
        yylhs.value.build< std::unique_ptr<RunTimeString> > ();
        break;

      case 351: // var
        yylhs.value.build< std::unique_ptr<Variable> > ();
        break;

      case 352: // act
      case 353: // setvar_action
        yylhs.value.build< std::unique_ptr<actions::Action> > ();
        break;

      case 348: // variables
      case 349: // variables_pre_process
      case 350: // variables_may_be_quoted
        yylhs.value.build< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ();
        break;

      case 343: // actions
      case 344: // actions_may_quoted
        yylhs.value.build< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 2:
#line 742 "seclang-parser.yy" // lalr1.cc:856
    {
        return 0;
      }
#line 1435 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 6:
#line 755 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_auditLog->setStorageDirMode(strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 8));
      }
#line 1443 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 7:
#line 761 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_auditLog->setStorageDir(yystack_[0].value.as< std::string > ());
      }
#line 1451 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 8:
#line 767 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_auditLog->setStatus(modsecurity::audit_log::AuditLog::RelevantOnlyAuditLogStatus);
      }
#line 1459 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 9:
#line 771 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_auditLog->setStatus(modsecurity::audit_log::AuditLog::OffAuditLogStatus);
      }
#line 1467 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 10:
#line 775 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_auditLog->setStatus(modsecurity::audit_log::AuditLog::OnAuditLogStatus);
      }
#line 1475 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 11:
#line 781 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_auditLog->setFileMode(strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 8));
      }
#line 1483 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 12:
#line 787 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_auditLog->setFilePath2(yystack_[0].value.as< std::string > ());
      }
#line 1491 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 13:
#line 793 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_auditLog->setParts(yystack_[0].value.as< std::string > ());
      }
#line 1499 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 14:
#line 799 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_auditLog->setFilePath1(yystack_[0].value.as< std::string > ());
      }
#line 1507 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 15:
#line 804 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_auditLog->setFormat(modsecurity::audit_log::AuditLog::JSONAuditLogFormat);
      }
#line 1515 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 16:
#line 809 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_auditLog->setFormat(modsecurity::audit_log::AuditLog::NativeAuditLogFormat);
      }
#line 1523 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 17:
#line 815 "seclang-parser.yy" // lalr1.cc:856
    {
        std::string relevant_status(yystack_[0].value.as< std::string > ());
        driver.m_auditLog->setRelevantStatus(relevant_status);
      }
#line 1532 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 18:
#line 822 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_auditLog->setType(modsecurity::audit_log::AuditLog::SerialAuditLogType);
      }
#line 1540 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 19:
#line 826 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_auditLog->setType(modsecurity::audit_log::AuditLog::ParallelAuditLogType);
      }
#line 1548 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 20:
#line 830 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_auditLog->setType(modsecurity::audit_log::AuditLog::HttpsAuditLogType);
      }
#line 1556 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 21:
#line 836 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_uploadKeepFiles = modsecurity::RulesProperties::TrueConfigBoolean;
      }
#line 1564 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 22:
#line 840 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_uploadKeepFiles = modsecurity::RulesProperties::FalseConfigBoolean;
      }
#line 1572 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 23:
#line 844 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.error(yystack_[2].location, "SecUploadKeepFiles RelevantOnly is not currently supported. Accepted values are On or Off");
        YYERROR;
      }
#line 1581 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 24:
#line 849 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_uploadFileLimit.m_set = true;
        driver.m_uploadFileLimit.m_value = strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 10);
      }
#line 1590 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 25:
#line 854 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_uploadFileMode.m_set = true;
        driver.m_uploadFileMode.m_value = strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 8);
      }
#line 1599 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 26:
#line 859 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_uploadDirectory.m_set = true;
        driver.m_uploadDirectory.m_value = yystack_[0].value.as< std::string > ();
      }
#line 1608 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 27:
#line 864 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_tmpSaveUploadedFiles = modsecurity::RulesProperties::TrueConfigBoolean;
      }
#line 1616 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 28:
#line 868 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_tmpSaveUploadedFiles = modsecurity::RulesProperties::FalseConfigBoolean;
      }
#line 1624 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 29:
#line 875 "seclang-parser.yy" // lalr1.cc:856
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[1].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1632 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 30:
#line 879 "seclang-parser.yy" // lalr1.cc:856
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1640 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 31:
#line 886 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_INIT(yystack_[0].value.as< std::unique_ptr<actions::Action> > (), yystack_[3].location)
        yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ()->push_back(std::move(yystack_[0].value.as< std::unique_ptr<actions::Action> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1650 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 32:
#line 892 "seclang-parser.yy" // lalr1.cc:856
    {
        std::unique_ptr<std::vector<std::unique_ptr<actions::Action>>> b(new std::vector<std::unique_ptr<actions::Action>>());
        ACTION_INIT(yystack_[0].value.as< std::unique_ptr<actions::Action> > (), yystack_[1].location)
        b->push_back(std::move(yystack_[0].value.as< std::unique_ptr<actions::Action> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(b);
      }
#line 1661 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 33:
#line 902 "seclang-parser.yy" // lalr1.cc:856
    {
        yylhs.value.as< std::unique_ptr<Operator> > () = std::move(yystack_[0].value.as< std::unique_ptr<Operator> > ());
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(driver.ref.back(), &error) == false) {
            driver.error(yystack_[1].location, error);
            YYERROR;
        }
      }
#line 1674 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 34:
#line 911 "seclang-parser.yy" // lalr1.cc:856
    {
        yylhs.value.as< std::unique_ptr<Operator> > () = std::move(yystack_[0].value.as< std::unique_ptr<Operator> > ());
        yylhs.value.as< std::unique_ptr<Operator> > ()->m_negation = true;
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(driver.ref.back(), &error) == false) {
            driver.error(yystack_[2].location, error);
            YYERROR;
        }
      }
#line 1688 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 35:
#line 921 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rx(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(driver.ref.back(), &error) == false) {
            driver.error(yystack_[1].location, error);
            YYERROR;
        }
      }
#line 1701 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 36:
#line 930 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rx(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
        yylhs.value.as< std::unique_ptr<Operator> > ()->m_negation = true;
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(driver.ref.back(), &error) == false) {
            driver.error(yystack_[2].location, error);
            YYERROR;
        }
      }
#line 1715 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 37:
#line 943 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::UnconditionalMatch());
      }
#line 1723 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 38:
#line 947 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::DetectSQLi());
      }
#line 1731 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 39:
#line 951 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::DetectXSS());
      }
#line 1739 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 40:
#line 955 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateUrlEncoding());
      }
#line 1747 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 41:
#line 959 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateUtf8Encoding());
      }
#line 1755 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 42:
#line 963 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::InspectFile(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1763 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 43:
#line 967 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::FuzzyHash(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1771 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 44:
#line 971 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateByteRange(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1779 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 45:
#line 975 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateDTD(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1787 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 46:
#line 979 "seclang-parser.yy" // lalr1.cc:856
    {
        /* $$ = new operators::ValidateHash($1); */
        OPERATOR_NOT_SUPPORTED("ValidateHash", yystack_[2].location);
      }
#line 1796 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 47:
#line 984 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateSchema(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1804 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 48:
#line 988 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::VerifyCC(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1812 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 49:
#line 992 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::VerifyCPF(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1820 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 50:
#line 996 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::VerifySSN(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1828 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 51:
#line 1000 "seclang-parser.yy" // lalr1.cc:856
    {
        /* $$ = new operators::GsbLookup($1); */
        OPERATOR_NOT_SUPPORTED("GsbLookup", yystack_[2].location);
      }
#line 1837 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 52:
#line 1005 "seclang-parser.yy" // lalr1.cc:856
    {
        /* $$ = new operators::Rsub($1); */
        OPERATOR_NOT_SUPPORTED("Rsub", yystack_[2].location);
      }
#line 1846 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 53:
#line 1010 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Within(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1854 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 54:
#line 1014 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ContainsWord(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1862 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 55:
#line 1018 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Contains(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1870 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 56:
#line 1022 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::EndsWith(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1878 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 57:
#line 1026 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Eq(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1886 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 58:
#line 1030 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Ge(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1894 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 59:
#line 1034 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Gt(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1902 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 60:
#line 1038 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::IpMatchF(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1910 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 61:
#line 1042 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::IpMatch(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1918 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 62:
#line 1046 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Le(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1926 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 63:
#line 1050 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Lt(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1934 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 64:
#line 1054 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::PmFromFile(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1942 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 65:
#line 1058 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Pm(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1950 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 66:
#line 1062 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rbl(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1958 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 67:
#line 1066 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rx(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1966 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 68:
#line 1070 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::StrEq(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1974 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 69:
#line 1074 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::StrMatch(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1982 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 70:
#line 1078 "seclang-parser.yy" // lalr1.cc:856
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::BeginsWith(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 1990 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 71:
#line 1082 "seclang-parser.yy" // lalr1.cc:856
    {
#if defined(WITH_GEOIP) or defined(WITH_MAXMIND)
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::GeoLookup());
#else
        std::stringstream ss;
            ss << "This version of ModSecurity was not compiled with GeoIP or MaxMind support.";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
#endif  // WITH_GEOIP
      }
#line 2005 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 73:
#line 1097 "seclang-parser.yy" // lalr1.cc:856
    {
        std::vector<actions::Action *> *a = new std::vector<actions::Action *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            a->push_back(i.release());
        }
        Variables::Variables *v = new Variables::Variables();
        for (auto &i : *yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ().get()) {
            v->push_back(i.release());
        }

        Operator *op = yystack_[1].value.as< std::unique_ptr<Operator> > ().release();
        Rule *rule = new Rule(
            /* op */ op,
            /* variables */ v,
            /* actions */ a,
            /* file name */ driver.ref.back(),
            /* line number */ yystack_[4].location.end.line
            );
        if (driver.addSecRule(rule) == false) {
            delete rule;
            YYERROR;
        }
      }
#line 2033 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 74:
#line 1121 "seclang-parser.yy" // lalr1.cc:856
    {
        Variables::Variables *v = new Variables::Variables();
        for (auto &i : *yystack_[1].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ().get()) {
            v->push_back(i.release());
        }

        Rule *rule = new Rule(
            /* op */ yystack_[0].value.as< std::unique_ptr<Operator> > ().release(),
            /* variables */ v,
            /* actions */ NULL,
            /* file name */ driver.ref.back(),
            /* line number */ yystack_[3].location.end.line
            );
        if (driver.addSecRule(rule) == false) {
            delete rule;
            YYERROR;
        }
      }
#line 2056 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 75:
#line 1140 "seclang-parser.yy" // lalr1.cc:856
    {
        std::vector<actions::Action *> *a = new std::vector<actions::Action *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            a->push_back(i.release());
        }
        Rule *rule = new Rule(
            /* op */ NULL,
            /* variables */ NULL,
            /* actions */ a,
            /* file name */ driver.ref.back(),
            /* line number */ yystack_[2].location.end.line
            );
        driver.addSecAction(rule);
      }
#line 2075 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 76:
#line 1155 "seclang-parser.yy" // lalr1.cc:856
    {
        std::string err;
        std::vector<actions::Action *> *a = new std::vector<actions::Action *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            a->push_back(i.release());
        }
        RuleScript *r = new RuleScript(
            /* path to script */ yystack_[1].value.as< std::string > (),
            /* actions */ a,
            /* file name */ driver.ref.back(),
            /* line number */ yystack_[2].location.end.line
            );

        if (r->init(&err) == false) {
            driver.error(yystack_[2].location, "Failed to load script: " + err);
            delete r;
            YYERROR;
        }
        if (driver.addSecRuleScript(r) == false) {
            delete r;
            YYERROR;
        }
      }
#line 2103 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 77:
#line 1179 "seclang-parser.yy" // lalr1.cc:856
    {
        bool hasDisruptive = false;
        std::vector<actions::Action *> *actions = new std::vector<actions::Action *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            actions->push_back(i.release());
        }
        std::vector<actions::Action *> checkedActions;
        int definedPhase = -1;
        int secRuleDefinedPhase = -1;
        for (actions::Action *a : *actions) {
            actions::Phase *phase = dynamic_cast<actions::Phase *>(a);
            if (a->isDisruptive() == true && dynamic_cast<actions::disruptive::Block *>(a) == NULL) {
                hasDisruptive = true;
            }
            if (phase != NULL) {
                definedPhase = phase->m_phase;
                secRuleDefinedPhase = phase->m_secRulesPhase;
                delete phase;
            } else if (a->action_kind == actions::Action::RunTimeOnlyIfMatchKind ||
                a->action_kind == actions::Action::RunTimeBeforeMatchAttemptKind) {
                actions::transformations::None *none = dynamic_cast<actions::transformations::None *>(a);
                if (none != NULL) {
                    driver.error(yystack_[2].location, "The transformation none is not suitable to be part of the SecDefaultActions");
                    YYERROR;
                }
                checkedActions.push_back(a);
            } else {
                driver.error(yystack_[2].location, "The action '" + a->m_name + "' is not suitable to be part of the SecDefaultActions");
                YYERROR;
            }
        }
        if (definedPhase == -1) {
            definedPhase = modsecurity::Phases::RequestHeadersPhase;
        }

        if (hasDisruptive == false) {
            driver.error(yystack_[2].location, "SecDefaultAction must specify a disruptive action.");
            YYERROR;
        }

        if (!driver.m_defaultActions[definedPhase].empty()) {
            std::stringstream ss;
            ss << "SecDefaultActions can only be placed once per phase and configuration context. Phase ";
            ss << secRuleDefinedPhase;
            ss << " was informed already.";
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }

        for (actions::Action *a : checkedActions) {
            driver.m_defaultActions[definedPhase].push_back(a);
        }

        delete actions;
      }
#line 2163 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 78:
#line 1235 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.addSecMarker(modsecurity::utils::string::removeBracketsIfNeeded(yystack_[0].value.as< std::string > ()));
      }
#line 2171 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 79:
#line 1239 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_secRuleEngine = modsecurity::Rules::DisabledRuleEngine;
      }
#line 2179 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 80:
#line 1243 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_secRuleEngine = modsecurity::Rules::EnabledRuleEngine;
      }
#line 2187 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 81:
#line 1247 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_secRuleEngine = modsecurity::Rules::DetectionOnlyRuleEngine;
      }
#line 2195 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 82:
#line 1251 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_secRequestBodyAccess = modsecurity::RulesProperties::TrueConfigBoolean;
      }
#line 2203 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 83:
#line 1255 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_secRequestBodyAccess = modsecurity::RulesProperties::FalseConfigBoolean;
      }
#line 2211 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 84:
#line 1259 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_secResponseBodyAccess = modsecurity::RulesProperties::TrueConfigBoolean;
      }
#line 2219 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 85:
#line 1263 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_secResponseBodyAccess = modsecurity::RulesProperties::FalseConfigBoolean;
      }
#line 2227 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 86:
#line 1267 "seclang-parser.yy" // lalr1.cc:856
    {
        if (yystack_[0].value.as< std::string > ().length() != 1) {
          driver.error(yystack_[1].location, "Argument separator should be set to a single character.");
          YYERROR;
        }
        driver.m_secArgumentSeparator.m_value = yystack_[0].value.as< std::string > ();
        driver.m_secArgumentSeparator.m_set = true;
      }
#line 2240 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 87:
#line 1276 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_components.push_back(yystack_[0].value.as< std::string > ());
      }
#line 2248 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 88:
#line 1280 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.error(yystack_[2].location, "SecConnEngine is not yet supported.");
        YYERROR;
      }
#line 2257 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 89:
#line 1285 "seclang-parser.yy" // lalr1.cc:856
    {
      }
#line 2264 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 90:
#line 1288 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_secWebAppId.m_value = yystack_[0].value.as< std::string > ();
        driver.m_secWebAppId.m_set = true;
      }
#line 2273 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 91:
#line 1293 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.error(yystack_[1].location, "SecServerSignature is not supported.");
        YYERROR;
      }
#line 2282 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 92:
#line 1298 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.error(yystack_[1].location, "SecCacheTransformations is not supported.");
        YYERROR;
      }
#line 2291 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 93:
#line 1303 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.error(yystack_[2].location, "SecDisableBackendCompression is not supported.");
        YYERROR;
      }
#line 2300 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 94:
#line 1308 "seclang-parser.yy" // lalr1.cc:856
    {
      }
#line 2307 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 95:
#line 1311 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.error(yystack_[2].location, "SecContentInjection is not yet supported.");
        YYERROR;
      }
#line 2316 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 96:
#line 1316 "seclang-parser.yy" // lalr1.cc:856
    {
      }
#line 2323 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 97:
#line 1319 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.error(yystack_[1].location, "SecChrootDir is not supported.");
        YYERROR;
      }
#line 2332 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 98:
#line 1324 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.error(yystack_[2].location, "SecHashEngine is not yet supported.");
        YYERROR;
      }
#line 2341 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 99:
#line 1329 "seclang-parser.yy" // lalr1.cc:856
    {
      }
#line 2348 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 100:
#line 1332 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.error(yystack_[1].location, "SecHashKey is not yet supported.");
        YYERROR;
      }
#line 2357 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 101:
#line 1337 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.error(yystack_[1].location, "SecHashParam is not yet supported.");
        YYERROR;
      }
#line 2366 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 102:
#line 1342 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.error(yystack_[1].location, "SecHashMethodRx is not yet supported.");
        YYERROR;
      }
#line 2375 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 103:
#line 1347 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.error(yystack_[1].location, "SecHashMethodPm is not yet supported.");
        YYERROR;
      }
#line 2384 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 104:
#line 1352 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.error(yystack_[1].location, "SecGsbLookupDb is not supported.");
        YYERROR;
      }
#line 2393 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 105:
#line 1357 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.error(yystack_[1].location, "SecGuardianLog is not supported.");
        YYERROR;
      }
#line 2402 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 106:
#line 1362 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.error(yystack_[2].location, "SecInterceptOnError is not yet supported.");
        YYERROR;
      }
#line 2411 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 107:
#line 1367 "seclang-parser.yy" // lalr1.cc:856
    {
      }
#line 2418 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 108:
#line 1370 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.error(yystack_[1].location, "SecConnReadStateLimit is not yet supported.");
        YYERROR;
      }
#line 2427 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 109:
#line 1375 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.error(yystack_[1].location, "SecConnWriteStateLimit is not yet supported.");
        YYERROR;
      }
#line 2436 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 110:
#line 1380 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.error(yystack_[1].location, "SecSensorId is not yet supported.");
        YYERROR;
      }
#line 2445 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 111:
#line 1385 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.error(yystack_[2].location, "SecRuleInheritance is not yet supported.");
        YYERROR;
      }
#line 2454 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 112:
#line 1390 "seclang-parser.yy" // lalr1.cc:856
    {
      }
#line 2461 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 113:
#line 1393 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.error(yystack_[1].location, "SecRulePerfTime is not yet supported.");
        YYERROR;
      }
#line 2470 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 114:
#line 1398 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.error(yystack_[1].location, "SecStreamInBodyInspection is not supported.");
        YYERROR;
      }
#line 2479 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 115:
#line 1403 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.error(yystack_[1].location, "SecStreamOutBodyInspection is not supported.");
        YYERROR;
      }
#line 2488 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 116:
#line 1408 "seclang-parser.yy" // lalr1.cc:856
    {
        std::string error;
        if (driver.m_exceptions.load(yystack_[0].value.as< std::string > (), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleRemoveById: failed to load:";
            ss << yystack_[0].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2505 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 117:
#line 1421 "seclang-parser.yy" // lalr1.cc:856
    {
        std::string error;
        if (driver.m_exceptions.loadRemoveRuleByTag(yystack_[0].value.as< std::string > (), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleRemoveByTag: failed to load:";
            ss << yystack_[0].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2522 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 118:
#line 1434 "seclang-parser.yy" // lalr1.cc:856
    {
        std::string error;
        if (driver.m_exceptions.loadRemoveRuleByMsg(yystack_[0].value.as< std::string > (), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleRemoveByMsg: failed to load:";
            ss << yystack_[0].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2539 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 119:
#line 1447 "seclang-parser.yy" // lalr1.cc:856
    {
        std::string error;
        if (driver.m_exceptions.loadUpdateTargetByTag(yystack_[1].value.as< std::string > (), std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleUpdateTargetByTag: failed to load:";
            ss << yystack_[1].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }
      }
#line 2556 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 120:
#line 1460 "seclang-parser.yy" // lalr1.cc:856
    {
        std::string error;
        if (driver.m_exceptions.loadUpdateTargetByMsg(yystack_[1].value.as< std::string > (), std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleUpdateTargetByMsg: failed to load:";
            ss << yystack_[1].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }
      }
#line 2573 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 121:
#line 1473 "seclang-parser.yy" // lalr1.cc:856
    {
        std::string error;
        double ruleId;
        try {
            ruleId = std::stod(yystack_[1].value.as< std::string > ());
        } catch (...) {
            std::stringstream ss;
            ss << "SecRuleUpdateTargetById: failed to load:";
            ss << "The input \"" + yystack_[1].value.as< std::string > () + "\" does not ";
            ss << "seems to be a valid rule id.";
            ss << ". ";
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }

        if (driver.m_exceptions.loadUpdateTargetById(ruleId, std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleUpdateTargetById: failed to load:";
            ss << yystack_[1].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }
      }
#line 2603 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 122:
#line 1499 "seclang-parser.yy" // lalr1.cc:856
    {
        std::string error;
        double ruleId;
        try {
            ruleId = std::stod(yystack_[1].value.as< std::string > ());
        } catch (...) {
            std::stringstream ss;
            ss << "SecRuleUpdateActionById: failed to load:";
            ss << "The input \"" + yystack_[1].value.as< std::string > () + "\" does not ";
            ss << "seems to be a valid rule id.";
            ss << ". ";
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }


        std::vector<actions::Action *> *a = new std::vector<actions::Action *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            a->push_back(i.release());
        }

        driver.error(yystack_[2].location, "SecRuleUpdateActionById is not yet supported");
        YYERROR;
      }
#line 2632 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 123:
#line 1525 "seclang-parser.yy" // lalr1.cc:856
    {
        if (driver.m_debugLog != NULL) {
          driver.m_debugLog->setDebugLogLevel(atoi(yystack_[0].value.as< std::string > ().c_str()));
        } else {
            std::stringstream ss;
            ss << "Internal error, there is no DebugLog ";
            ss << "object associated with the driver class";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2648 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 124:
#line 1537 "seclang-parser.yy" // lalr1.cc:856
    {
        if (driver.m_debugLog != NULL) {
            std::string error;
            driver.m_debugLog->setDebugLogFile(yystack_[0].value.as< std::string > (), &error);
            if (error.size() > 0) {
                std::stringstream ss;
                ss << "Failed to start DebugLog: " << error;
                driver.error(yystack_[1].location, ss.str());
                YYERROR;
            }
        } else {
            std::stringstream ss;
            ss << "Internal error, there is no DebugLog ";
            ss << "object associated with the driver class";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2671 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 125:
#line 1557 "seclang-parser.yy" // lalr1.cc:856
    {
#if defined(WITH_GEOIP) or defined(WITH_MAXMIND)
        std::string err;
        std::string file = modsecurity::utils::find_resource(yystack_[0].value.as< std::string > (),
            driver.ref.back(), &err);
        if (file.empty()) {
            std::stringstream ss;
            ss << "Failed to load locate the GeoDB file from: " << yystack_[0].value.as< std::string > () << " ";
            ss << err;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
        if (GeoLookup::getInstance().setDataBase(file, &err) == false) {
            std::stringstream ss;
            ss << "Failed to load the GeoDB from: ";
            ss << file << ". " << err;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
#else
        std::stringstream ss;
        ss << "This version of ModSecurity was not compiled with GeoIP or MaxMind support.";
        driver.error(yystack_[1].location, ss.str());
        YYERROR;
#endif  // WITH_GEOIP
      }
#line 2702 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 126:
#line 1585 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_requestBodyLimit.m_set = true;
        driver.m_requestBodyLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2711 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 127:
#line 1590 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_requestBodyNoFilesLimit.m_set = true;
        driver.m_requestBodyNoFilesLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2720 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 128:
#line 1595 "seclang-parser.yy" // lalr1.cc:856
    {
        std::stringstream ss;
        ss << "As of ModSecurity version 3.0, SecRequestBodyInMemoryLimit is no longer ";
        ss << "supported. Instead, you can use your web server configurations to control ";
        ss << "those values. ModSecurity will follow the web server decision.";
        driver.error(yystack_[1].location, ss.str());
        YYERROR;
      }
#line 2733 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 129:
#line 1604 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_responseBodyLimit.m_set = true;
        driver.m_responseBodyLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2742 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 130:
#line 1609 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_requestBodyLimitAction = modsecurity::Rules::BodyLimitAction::ProcessPartialBodyLimitAction;
      }
#line 2750 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 131:
#line 1613 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_requestBodyLimitAction = modsecurity::Rules::BodyLimitAction::RejectBodyLimitAction;
      }
#line 2758 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 132:
#line 1617 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_responseBodyLimitAction = modsecurity::Rules::BodyLimitAction::ProcessPartialBodyLimitAction;
      }
#line 2766 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 133:
#line 1621 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_responseBodyLimitAction = modsecurity::Rules::BodyLimitAction::RejectBodyLimitAction;
      }
#line 2774 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 134:
#line 1625 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_remoteRulesActionOnFailed = Rules::OnFailedRemoteRulesAction::AbortOnFailedRemoteRulesAction;
      }
#line 2782 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 135:
#line 1629 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_remoteRulesActionOnFailed = Rules::OnFailedRemoteRulesAction::WarnOnFailedRemoteRulesAction;
      }
#line 2790 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 138:
#line 1643 "seclang-parser.yy" // lalr1.cc:856
    {
        std::istringstream buf(yystack_[0].value.as< std::string > ());
        std::istream_iterator<std::string> beg(buf), end;
        std::set<std::string> tokens(beg, end);
        driver.m_responseBodyTypeToBeInspected.m_set = true;
        for (std::set<std::string>::iterator it=tokens.begin();
            it!=tokens.end(); ++it)
        {
            driver.m_responseBodyTypeToBeInspected.m_value.insert(*it);
        }
      }
#line 2806 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 139:
#line 1655 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_responseBodyTypeToBeInspected.m_set = true;
        driver.m_responseBodyTypeToBeInspected.m_clear = true;
        driver.m_responseBodyTypeToBeInspected.m_value.clear();
      }
#line 2816 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 140:
#line 1661 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_secXMLExternalEntity = modsecurity::RulesProperties::FalseConfigBoolean;
      }
#line 2824 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 141:
#line 1665 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_secXMLExternalEntity = modsecurity::RulesProperties::TrueConfigBoolean;
      }
#line 2832 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 142:
#line 1669 "seclang-parser.yy" // lalr1.cc:856
    {
/* Parser error disabled to avoid breaking default installations with modsecurity.conf-recommended
        std::stringstream ss;
        ss << "As of ModSecurity version 3.0, SecTmpDir is no longer supported.";
        ss << " Instead, you can use your web server configurations to control when";
        ss << "and where to swap. ModSecurity will follow the web server decision.";
        driver.error(@0, ss.str());
        YYERROR;
*/
      }
#line 2847 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 145:
#line 1690 "seclang-parser.yy" // lalr1.cc:856
    {
        if (atoi(yystack_[0].value.as< std::string > ().c_str()) == 1) {
          driver.error(yystack_[1].location, "SecCookieFormat 1 is not yet supported.");
          YYERROR;
        }
      }
#line 2858 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 146:
#line 1697 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.error(yystack_[1].location, "SecCookieV0Separator is not yet supported.");
        YYERROR;
      }
#line 2867 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 149:
#line 1712 "seclang-parser.yy" // lalr1.cc:856
    {
/* Parser error disabled to avoid breaking default CRS installations with crs-setup.conf-recommended
        driver.error(@0, "SecCollectionTimeout is not yet supported.");
        YYERROR;
*/
      }
#line 2878 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 150:
#line 1719 "seclang-parser.yy" // lalr1.cc:856
    {
        driver.m_httpblKey.m_set = true;
        driver.m_httpblKey.m_value = yystack_[0].value.as< std::string > ();
      }
#line 2887 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 151:
#line 1727 "seclang-parser.yy" // lalr1.cc:856
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable> > > originalList = std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> newList(new std::vector<std::unique_ptr<Variable>>());
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> newNewList(new std::vector<std::unique_ptr<Variable>>());
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> exclusionVars(new std::vector<std::unique_ptr<Variable>>());
        while (!originalList->empty()) {
            std::unique_ptr<Variable> var = std::move(originalList->back());
            originalList->pop_back();
            if (dynamic_cast<VariableModificatorExclusion*>(var.get())) {
                exclusionVars->push_back(std::move(var));
            } else {
                newList->push_back(std::move(var));
            }
        }

        while (!newList->empty()) {
            bool doNotAdd = false;
            std::unique_ptr<Variable> var = std::move(newList->back());
            newList->pop_back();
            for (auto &i : *exclusionVars) {
                if (*var == *i) {
                    doNotAdd = true;
                }
                if (i->belongsToCollection(var.get())) {
                    var->addsKeyExclusion(i.get());
                }
            }
            if (!doNotAdd) {
                newNewList->push_back(std::move(var));
            }
        }
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(newNewList);
      }
#line 2925 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 152:
#line 1764 "seclang-parser.yy" // lalr1.cc:856
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2933 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 153:
#line 1768 "seclang-parser.yy" // lalr1.cc:856
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[1].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2941 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 154:
#line 1775 "seclang-parser.yy" // lalr1.cc:856
    {
        yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2950 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 155:
#line 1780 "seclang-parser.yy" // lalr1.cc:856
    {
        std::unique_ptr<Variable> c(new VariableModificatorExclusion(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2960 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 156:
#line 1786 "seclang-parser.yy" // lalr1.cc:856
    {
        std::unique_ptr<Variable> c(new VariableModificatorCount(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2970 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 157:
#line 1792 "seclang-parser.yy" // lalr1.cc:856
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        b->push_back(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 2980 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 158:
#line 1798 "seclang-parser.yy" // lalr1.cc:856
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        std::unique_ptr<Variable> c(new VariableModificatorExclusion(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        b->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 2991 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 159:
#line 1805 "seclang-parser.yy" // lalr1.cc:856
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        std::unique_ptr<Variable> c(new VariableModificatorCount(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        b->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 3002 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 160:
#line 1815 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Args_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3010 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 161:
#line 1819 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Args_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3018 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 162:
#line 1823 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Args_NoDictElement());
      }
#line 3026 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 163:
#line 1827 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsPost_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3034 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 164:
#line 1831 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsPost_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3042 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 165:
#line 1835 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsPost_NoDictElement());
      }
#line 3050 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 166:
#line 1839 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsGet_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3058 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 167:
#line 1843 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsGet_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3066 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 168:
#line 1847 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsGet_NoDictElement());
      }
#line 3074 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 169:
#line 1851 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesSizes_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3082 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 170:
#line 1855 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesSizes_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3090 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 171:
#line 1859 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesSizes_NoDictElement());
      }
#line 3098 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 172:
#line 1863 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3106 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 173:
#line 1867 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3114 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 174:
#line 1871 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesNames_NoDictElement());
      }
#line 3122 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 175:
#line 1875 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpContent_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3130 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 176:
#line 1879 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpContent_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3138 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 177:
#line 1883 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpContent_NoDictElement());
      }
#line 3146 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 178:
#line 1887 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartFileName_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3154 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 179:
#line 1891 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartFileName_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3162 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 180:
#line 1895 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartFileName_NoDictElement());
      }
#line 3170 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 181:
#line 1899 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartName_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3178 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 182:
#line 1903 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartName_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3186 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 183:
#line 1907 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartName_NoDictElement());
      }
#line 3194 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 184:
#line 1911 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVarsNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3202 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 185:
#line 1915 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVarsNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3210 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 186:
#line 1919 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVarsNames_NoDictElement());
      }
#line 3218 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 187:
#line 1923 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVars_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3226 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 188:
#line 1927 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVars_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3234 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 189:
#line 1931 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVars_NoDictElement());
      }
#line 3242 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 190:
#line 1935 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Files_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3250 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 191:
#line 1939 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Files_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3258 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 192:
#line 1943 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Files_NoDictElement());
      }
#line 3266 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 193:
#line 1947 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookies_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3274 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 194:
#line 1951 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookies_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3282 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 195:
#line 1955 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookies_NoDictElement());
      }
#line 3290 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 196:
#line 1959 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestHeaders_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3298 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 197:
#line 1963 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestHeaders_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3306 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 198:
#line 1967 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestHeaders_NoDictElement());
      }
#line 3314 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 199:
#line 1971 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseHeaders_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3322 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 200:
#line 1975 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseHeaders_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3330 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 201:
#line 1979 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseHeaders_NoDictElement());
      }
#line 3338 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 202:
#line 1983 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Geo_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3346 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 203:
#line 1987 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Geo_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3354 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 204:
#line 1991 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Geo_NoDictElement());
      }
#line 3362 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 205:
#line 1995 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookiesNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3370 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 206:
#line 1999 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookiesNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3378 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 207:
#line 2003 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookiesNames_NoDictElement());
      }
#line 3386 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 208:
#line 2007 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Rule_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3394 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 209:
#line 2011 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Rule_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3402 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 210:
#line 2015 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Rule_NoDictElement());
      }
#line 3410 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 211:
#line 2019 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Env("ENV:" + yystack_[0].value.as< std::string > ()));
      }
#line 3418 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 212:
#line 2023 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Env("ENV:" + yystack_[0].value.as< std::string > ()));
      }
#line 3426 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 213:
#line 2027 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Env("ENV"));
      }
#line 3434 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 214:
#line 2031 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::XML("XML:" + yystack_[0].value.as< std::string > ()));
      }
#line 3442 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 215:
#line 2035 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::XML("XML:" + yystack_[0].value.as< std::string > ()));
      }
#line 3450 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 216:
#line 2039 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::XML_NoDictElement());
      }
#line 3458 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 217:
#line 2043 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3466 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 218:
#line 2047 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3474 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 219:
#line 2051 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpNames_NoDictElement());
      }
#line 3482 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 220:
#line 2055 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Resource_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3490 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 221:
#line 2059 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Resource_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3498 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 222:
#line 2063 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Resource_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3506 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 223:
#line 2067 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Resource_NoDictElement());
      }
#line 3514 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 224:
#line 2071 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Ip_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3522 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 225:
#line 2075 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Ip_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3530 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 226:
#line 2079 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Ip_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3538 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 227:
#line 2083 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Ip_NoDictElement());
      }
#line 3546 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 228:
#line 2087 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Global_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3554 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 229:
#line 2091 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Global_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3562 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 230:
#line 2095 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Global_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3570 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 231:
#line 2099 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Global_NoDictElement());
      }
#line 3578 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 232:
#line 2103 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::User_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3586 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 233:
#line 2107 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::User_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3594 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 234:
#line 2111 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::User_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3602 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 235:
#line 2115 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::User_NoDictElement());
      }
#line 3610 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 236:
#line 2119 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Tx_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3618 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 237:
#line 2123 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Tx_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3626 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 238:
#line 2127 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Tx_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3634 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 239:
#line 2131 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Tx_NoDictElement());
      }
#line 3642 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 240:
#line 2135 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Session_DynamicElement(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 3650 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 241:
#line 2139 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Session_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3658 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 242:
#line 2143 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Session_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3666 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 243:
#line 2147 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Session_NoDictElement());
      }
#line 3674 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 244:
#line 2151 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3682 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 245:
#line 2155 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3690 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 246:
#line 2159 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsNames_NoDictElement());
      }
#line 3698 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 247:
#line 2163 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsGetNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3706 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 248:
#line 2167 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsGetNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3714 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 249:
#line 2171 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsGetNames_NoDictElement());
      }
#line 3722 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 250:
#line 2176 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsPostNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3730 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 251:
#line 2180 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsPostNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3738 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 252:
#line 2184 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsPostNames_NoDictElement());
      }
#line 3746 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 253:
#line 2189 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestHeadersNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3754 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 254:
#line 2193 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestHeadersNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3762 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 255:
#line 2197 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestHeadersNames_NoDictElement());
      }
#line 3770 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 256:
#line 2202 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseContentType());
      }
#line 3778 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 257:
#line 2207 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseHeadersNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 3786 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 258:
#line 2211 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseHeadersNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 3794 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 259:
#line 2215 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseHeadersNames_NoDictElement());
      }
#line 3802 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 260:
#line 2219 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsCombinedSize());
      }
#line 3810 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 261:
#line 2223 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::AuthType());
      }
#line 3818 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 262:
#line 2227 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesCombinedSize());
      }
#line 3826 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 263:
#line 2231 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FullRequest());
      }
#line 3834 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 264:
#line 2235 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FullRequestLength());
      }
#line 3842 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 265:
#line 2239 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::InboundDataError());
      }
#line 3850 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 266:
#line 2243 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVar());
      }
#line 3858 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 267:
#line 2247 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVarName());
      }
#line 3866 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 268:
#line 2251 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartBoundaryQuoted());
      }
#line 3874 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 269:
#line 2255 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartBoundaryWhiteSpace());
      }
#line 3882 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 270:
#line 2259 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartCrlfLFLines());
      }
#line 3890 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 271:
#line 2263 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartDateAfter());
      }
#line 3898 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 272:
#line 2267 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartDateBefore());
      }
#line 3906 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 273:
#line 2271 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartFileLimitExceeded());
      }
#line 3914 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 274:
#line 2275 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartHeaderFolding());
      }
#line 3922 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 275:
#line 2279 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartInvalidHeaderFolding());
      }
#line 3930 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 276:
#line 2283 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartInvalidPart());
      }
#line 3938 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 277:
#line 2287 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartInvalidQuoting());
      }
#line 3946 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 278:
#line 2291 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartLFLine());
      }
#line 3954 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 279:
#line 2295 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartMissingSemicolon());
      }
#line 3962 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 280:
#line 2299 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartMissingSemicolon());
      }
#line 3970 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 281:
#line 2303 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartStrictError());
      }
#line 3978 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 282:
#line 2307 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartUnmatchedBoundary());
      }
#line 3986 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 283:
#line 2311 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::OutboundDataError());
      }
#line 3994 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 284:
#line 2315 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::PathInfo());
      }
#line 4002 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 285:
#line 2319 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::QueryString());
      }
#line 4010 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 286:
#line 2323 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RemoteAddr());
      }
#line 4018 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 287:
#line 2327 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RemoteHost());
      }
#line 4026 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 288:
#line 2331 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RemotePort());
      }
#line 4034 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 289:
#line 2335 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ReqbodyError());
      }
#line 4042 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 290:
#line 2339 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ReqbodyErrorMsg());
      }
#line 4050 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 291:
#line 2343 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ReqbodyProcessor());
      }
#line 4058 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 292:
#line 2347 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ReqbodyProcessorError());
      }
#line 4066 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 293:
#line 2351 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ReqbodyProcessorErrorMsg());
      }
#line 4074 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 294:
#line 2355 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestBasename());
      }
#line 4082 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 295:
#line 2359 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestBody());
      }
#line 4090 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 296:
#line 2363 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestBodyLength());
      }
#line 4098 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 297:
#line 2367 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestFilename());
      }
#line 4106 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 298:
#line 2371 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestLine());
      }
#line 4114 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 299:
#line 2375 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestMethod());
      }
#line 4122 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 300:
#line 2379 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestProtocol());
      }
#line 4130 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 301:
#line 2383 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestURI());
      }
#line 4138 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 302:
#line 2387 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestURIRaw());
      }
#line 4146 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 303:
#line 2391 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseBody());
      }
#line 4154 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 304:
#line 2395 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseContentLength());
      }
#line 4162 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 305:
#line 2399 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseProtocol());
      }
#line 4170 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 306:
#line 2403 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseStatus());
      }
#line 4178 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 307:
#line 2407 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ServerAddr());
      }
#line 4186 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 308:
#line 2411 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ServerName());
      }
#line 4194 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 309:
#line 2415 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ServerPort());
      }
#line 4202 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 310:
#line 2419 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::SessionID());
      }
#line 4210 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 311:
#line 2423 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::UniqueID());
      }
#line 4218 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 312:
#line 2427 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::UrlEncodedError());
      }
#line 4226 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 313:
#line 2431 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::UserID());
      }
#line 4234 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 314:
#line 2435 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Status());
      }
#line 4242 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 315:
#line 2439 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Status());
      }
#line 4250 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 316:
#line 2443 "seclang-parser.yy" // lalr1.cc:856
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::WebAppId());
      }
#line 4258 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 317:
#line 2447 "seclang-parser.yy" // lalr1.cc:856
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new Duration(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4269 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 318:
#line 2455 "seclang-parser.yy" // lalr1.cc:856
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new ModsecBuild(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4280 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 319:
#line 2462 "seclang-parser.yy" // lalr1.cc:856
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new HighestSeverity(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4291 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 320:
#line 2469 "seclang-parser.yy" // lalr1.cc:856
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new RemoteUser(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4302 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 321:
#line 2476 "seclang-parser.yy" // lalr1.cc:856
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new Time(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4313 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 322:
#line 2483 "seclang-parser.yy" // lalr1.cc:856
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeDay(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4324 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 323:
#line 2490 "seclang-parser.yy" // lalr1.cc:856
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeEpoch(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4335 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 324:
#line 2497 "seclang-parser.yy" // lalr1.cc:856
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeHour(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4346 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 325:
#line 2504 "seclang-parser.yy" // lalr1.cc:856
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeMin(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4357 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 326:
#line 2511 "seclang-parser.yy" // lalr1.cc:856
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeMon(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4368 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 327:
#line 2518 "seclang-parser.yy" // lalr1.cc:856
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
            std::unique_ptr<Variable> c(new TimeSec(name));
            yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4379 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 328:
#line 2525 "seclang-parser.yy" // lalr1.cc:856
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeWDay(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4390 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 329:
#line 2532 "seclang-parser.yy" // lalr1.cc:856
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeYear(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 4401 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 330:
#line 2542 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Accuracy(yystack_[0].value.as< std::string > ()));
      }
#line 4409 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 331:
#line 2546 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Allow(yystack_[0].value.as< std::string > ()));
      }
#line 4417 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 332:
#line 2550 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_NOT_SUPPORTED("Append", yystack_[1].location);
      }
#line 4425 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 333:
#line 2554 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::AuditLog(yystack_[0].value.as< std::string > ()));
      }
#line 4433 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 334:
#line 2558 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Block(yystack_[0].value.as< std::string > ()));
      }
#line 4441 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 335:
#line 2562 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Capture(yystack_[0].value.as< std::string > ()));
      }
#line 4449 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 336:
#line 2566 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Chain(yystack_[0].value.as< std::string > ()));
      }
#line 4457 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 337:
#line 2570 "seclang-parser.yy" // lalr1.cc:856
    {
        //ACTION_NOT_SUPPORTED("CtlAuditEngine", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 4466 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 338:
#line 2575 "seclang-parser.yy" // lalr1.cc:856
    {
        //ACTION_NOT_SUPPORTED("CtlAuditEngine", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 4475 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 339:
#line 2580 "seclang-parser.yy" // lalr1.cc:856
    {
        //ACTION_NOT_SUPPORTED("CtlAuditEngine", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 4484 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 340:
#line 2585 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::AuditLogParts(yystack_[0].value.as< std::string > ()));
      }
#line 4492 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 341:
#line 2589 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyProcessorJSON(yystack_[0].value.as< std::string > ()));
      }
#line 4500 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 342:
#line 2593 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyProcessorXML(yystack_[0].value.as< std::string > ()));
      }
#line 4508 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 343:
#line 2597 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyProcessorURLENCODED(yystack_[0].value.as< std::string > ()));
      }
#line 4516 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 344:
#line 2601 "seclang-parser.yy" // lalr1.cc:856
    {
        //ACTION_NOT_SUPPORTED("CtlForceReequestBody", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 4525 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 345:
#line 2606 "seclang-parser.yy" // lalr1.cc:856
    {
        //ACTION_NOT_SUPPORTED("CtlForceReequestBody", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 4534 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 346:
#line 2611 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyAccess(yystack_[1].value.as< std::string > () + "true"));
      }
#line 4542 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 347:
#line 2615 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyAccess(yystack_[1].value.as< std::string > () + "false"));
      }
#line 4550 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 348:
#line 2619 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleEngine("ctl:RuleEngine=on"));
      }
#line 4558 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 349:
#line 2623 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleEngine("ctl:RuleEngine=off"));
      }
#line 4566 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 350:
#line 2627 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleEngine("ctl:RuleEngine=detectiononly"));
      }
#line 4574 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 351:
#line 2631 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveById(yystack_[0].value.as< std::string > ()));
      }
#line 4582 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 352:
#line 2635 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveByTag(yystack_[0].value.as< std::string > ()));
      }
#line 4590 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 353:
#line 2639 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveTargetById(yystack_[0].value.as< std::string > ()));
      }
#line 4598 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 354:
#line 2643 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveTargetByTag(yystack_[0].value.as< std::string > ()));
      }
#line 4606 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 355:
#line 2647 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Deny(yystack_[0].value.as< std::string > ()));
      }
#line 4614 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 356:
#line 2651 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_NOT_SUPPORTED("DeprecateVar", yystack_[1].location);
      }
#line 4622 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 357:
#line 2655 "seclang-parser.yy" // lalr1.cc:856
    {
        //ACTION_NOT_SUPPORTED("Drop", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[0].value.as< std::string > ()));
      }
#line 4631 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 358:
#line 2660 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Exec(yystack_[0].value.as< std::string > ()));
      }
#line 4639 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 359:
#line 2664 "seclang-parser.yy" // lalr1.cc:856
    {
        //ACTION_NOT_SUPPORTED("ExpireVar", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[0].value.as< std::string > ()));
      }
#line 4648 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 360:
#line 2669 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::RuleId(yystack_[0].value.as< std::string > ()));
      }
#line 4656 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 361:
#line 2673 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::InitCol(yystack_[1].value.as< std::string > (), std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4664 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 362:
#line 2677 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::LogData(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4672 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 363:
#line 2681 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Log(yystack_[0].value.as< std::string > ()));
      }
#line 4680 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 364:
#line 2685 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Maturity(yystack_[0].value.as< std::string > ()));
      }
#line 4688 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 365:
#line 2689 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Msg(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4696 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 366:
#line 2693 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::MultiMatch(yystack_[0].value.as< std::string > ()));
      }
#line 4704 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 367:
#line 2697 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::NoAuditLog(yystack_[0].value.as< std::string > ()));
      }
#line 4712 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 368:
#line 2701 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::NoLog(yystack_[0].value.as< std::string > ()));
      }
#line 4720 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 369:
#line 2705 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Pass(yystack_[0].value.as< std::string > ()));
      }
#line 4728 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 370:
#line 2709 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_NOT_SUPPORTED("Pause", yystack_[1].location);
      }
#line 4736 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 371:
#line 2713 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Phase(yystack_[0].value.as< std::string > ()));
      }
#line 4744 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 372:
#line 2717 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_NOT_SUPPORTED("Prepend", yystack_[1].location);
      }
#line 4752 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 373:
#line 2721 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_NOT_SUPPORTED("Proxy", yystack_[1].location);
      }
#line 4760 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 374:
#line 2725 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Redirect(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4768 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 375:
#line 2729 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Rev(yystack_[0].value.as< std::string > ()));
      }
#line 4776 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 376:
#line 2733 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_NOT_SUPPORTED("SanitiseArg", yystack_[1].location);
      }
#line 4784 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 377:
#line 2737 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_NOT_SUPPORTED("SanitiseMatched", yystack_[1].location);
      }
#line 4792 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 378:
#line 2741 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_NOT_SUPPORTED("SanitiseMatchedBytes", yystack_[1].location);
      }
#line 4800 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 379:
#line 2745 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_NOT_SUPPORTED("SanitiseRequestHeader", yystack_[1].location);
      }
#line 4808 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 380:
#line 2749 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_NOT_SUPPORTED("SanitiseResponseHeader", yystack_[1].location);
      }
#line 4816 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 381:
#line 2753 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_NOT_SUPPORTED("SetEnv", yystack_[1].location);
      }
#line 4824 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 382:
#line 2757 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetRSC(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4832 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 383:
#line 2761 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetSID(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4840 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 384:
#line 2765 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetUID(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4848 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 385:
#line 2769 "seclang-parser.yy" // lalr1.cc:856
    {
        yylhs.value.as< std::unique_ptr<actions::Action> > () = std::move(yystack_[0].value.as< std::unique_ptr<actions::Action> > ());
      }
#line 4856 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 386:
#line 2773 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Severity(yystack_[0].value.as< std::string > ()));
      }
#line 4864 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 387:
#line 2777 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Skip(yystack_[0].value.as< std::string > ()));
      }
#line 4872 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 388:
#line 2781 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SkipAfter(yystack_[0].value.as< std::string > ()));
      }
#line 4880 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 389:
#line 2785 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::data::Status(yystack_[0].value.as< std::string > ()));
      }
#line 4888 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 390:
#line 2789 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Tag(std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 4896 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 391:
#line 2793 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Ver(yystack_[0].value.as< std::string > ()));
      }
#line 4904 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 392:
#line 2797 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::XmlNS(yystack_[0].value.as< std::string > ()));
      }
#line 4912 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 393:
#line 2801 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ParityZero7bit(yystack_[0].value.as< std::string > ()));
      }
#line 4920 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 394:
#line 2805 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ParityOdd7bit(yystack_[0].value.as< std::string > ()));
      }
#line 4928 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 395:
#line 2809 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ParityEven7bit(yystack_[0].value.as< std::string > ()));
      }
#line 4936 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 396:
#line 2813 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::SqlHexDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4944 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 397:
#line 2817 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Base64Encode(yystack_[0].value.as< std::string > ()));
      }
#line 4952 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 398:
#line 2821 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Base64Decode(yystack_[0].value.as< std::string > ()));
      }
#line 4960 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 399:
#line 2825 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Base64DecodeExt(yystack_[0].value.as< std::string > ()));
      }
#line 4968 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 400:
#line 2829 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::CmdLine(yystack_[0].value.as< std::string > ()));
      }
#line 4976 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 401:
#line 2833 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Sha1(yystack_[0].value.as< std::string > ()));
      }
#line 4984 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 402:
#line 2837 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Md5(yystack_[0].value.as< std::string > ()));
      }
#line 4992 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 403:
#line 2841 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::EscapeSeqDecode(yystack_[0].value.as< std::string > ()));
      }
#line 5000 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 404:
#line 2845 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::HexEncode(yystack_[0].value.as< std::string > ()));
      }
#line 5008 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 405:
#line 2849 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::HexDecode(yystack_[0].value.as< std::string > ()));
      }
#line 5016 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 406:
#line 2853 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::LowerCase(yystack_[0].value.as< std::string > ()));
      }
#line 5024 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 407:
#line 2857 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UpperCase(yystack_[0].value.as< std::string > ()));
      }
#line 5032 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 408:
#line 2861 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UrlDecodeUni(yystack_[0].value.as< std::string > ()));
      }
#line 5040 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 409:
#line 2865 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UrlDecode(yystack_[0].value.as< std::string > ()));
      }
#line 5048 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 410:
#line 2869 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UrlEncode(yystack_[0].value.as< std::string > ()));
      }
#line 5056 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 411:
#line 2873 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::None(yystack_[0].value.as< std::string > ()));
      }
#line 5064 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 412:
#line 2877 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::CompressWhitespace(yystack_[0].value.as< std::string > ()));
      }
#line 5072 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 413:
#line 2881 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveWhitespace(yystack_[0].value.as< std::string > ()));
      }
#line 5080 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 414:
#line 2885 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ReplaceNulls(yystack_[0].value.as< std::string > ()));
      }
#line 5088 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 415:
#line 2889 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveNulls(yystack_[0].value.as< std::string > ()));
      }
#line 5096 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 416:
#line 2893 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::HtmlEntityDecode(yystack_[0].value.as< std::string > ()));
      }
#line 5104 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 417:
#line 2897 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::JsDecode(yystack_[0].value.as< std::string > ()));
      }
#line 5112 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 418:
#line 2901 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::CssDecode(yystack_[0].value.as< std::string > ()));
      }
#line 5120 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 419:
#line 2905 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Trim(yystack_[0].value.as< std::string > ()));
      }
#line 5128 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 420:
#line 2909 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::TrimLeft(yystack_[0].value.as< std::string > ()));
      }
#line 5136 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 421:
#line 2913 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::TrimRight(yystack_[0].value.as< std::string > ()));
      }
#line 5144 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 422:
#line 2917 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::NormalisePathWin(yystack_[0].value.as< std::string > ()));
      }
#line 5152 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 423:
#line 2921 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::NormalisePath(yystack_[0].value.as< std::string > ()));
      }
#line 5160 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 424:
#line 2925 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Length(yystack_[0].value.as< std::string > ()));
      }
#line 5168 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 425:
#line 2929 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Utf8ToUnicode(yystack_[0].value.as< std::string > ()));
      }
#line 5176 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 426:
#line 2933 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveCommentsChar(yystack_[0].value.as< std::string > ()));
      }
#line 5184 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 427:
#line 2937 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveComments(yystack_[0].value.as< std::string > ()));
      }
#line 5192 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 428:
#line 2941 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ReplaceComments(yystack_[0].value.as< std::string > ()));
      }
#line 5200 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 429:
#line 2948 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::unsetOperation, std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
      }
#line 5208 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 430:
#line 2952 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::setToOneOperation, std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
      }
#line 5216 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 431:
#line 2956 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::setOperation, std::move(yystack_[2].value.as< std::unique_ptr<Variable> > ()), std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 5224 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 432:
#line 2960 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::sumAndSetOperation, std::move(yystack_[2].value.as< std::unique_ptr<Variable> > ()), std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 5232 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 433:
#line 2964 "seclang-parser.yy" // lalr1.cc:856
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::substractAndSetOperation, std::move(yystack_[2].value.as< std::unique_ptr<Variable> > ()), std::move(yystack_[0].value.as< std::unique_ptr<RunTimeString> > ())));
      }
#line 5240 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 434:
#line 2971 "seclang-parser.yy" // lalr1.cc:856
    {
        yystack_[1].value.as< std::unique_ptr<RunTimeString> > ()->appendText(yystack_[0].value.as< std::string > ());
        yylhs.value.as< std::unique_ptr<RunTimeString> > () = std::move(yystack_[1].value.as< std::unique_ptr<RunTimeString> > ());
      }
#line 5249 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 435:
#line 2976 "seclang-parser.yy" // lalr1.cc:856
    {
        yystack_[1].value.as< std::unique_ptr<RunTimeString> > ()->appendVar(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ()));
        yylhs.value.as< std::unique_ptr<RunTimeString> > () = std::move(yystack_[1].value.as< std::unique_ptr<RunTimeString> > ());
      }
#line 5258 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 436:
#line 2981 "seclang-parser.yy" // lalr1.cc:856
    {
        std::unique_ptr<RunTimeString> r(new RunTimeString());
        r->appendText(yystack_[0].value.as< std::string > ());
        yylhs.value.as< std::unique_ptr<RunTimeString> > () = std::move(r);
      }
#line 5268 "seclang-parser.cc" // lalr1.cc:856
    break;

  case 437:
#line 2987 "seclang-parser.yy" // lalr1.cc:856
    {
        std::unique_ptr<RunTimeString> r(new RunTimeString());
        r->appendVar(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ()));
        yylhs.value.as< std::unique_ptr<RunTimeString> > () = std::move(r);
      }
#line 5278 "seclang-parser.cc" // lalr1.cc:856
    break;


#line 5282 "seclang-parser.cc" // lalr1.cc:856
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  seclang_parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  // Generate an error message.
  std::string
  seclang_parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short int seclang_parser::yypact_ninf_ = -400;

  const signed char seclang_parser::yytable_ninf_ = -1;

  const short int
  seclang_parser::yypact_[] =
  {
    2729,  -400,  -286,  -400,  -101,  -400,  -246,  -400,  -400,  -400,
    -400,  -400,  -280,  -400,  -400,  -400,  -400,  -400,  -276,  -400,
    -400,  -400,  -150,  -148,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,  -400,  -400,  -143,  -400,  -400,
    -144,  -400,  -139,  -400,  -140,  -129,  -400,  -257,   -86,   -86,
    -400,  -400,  -400,  -400,  -127,  -290,  -400,  -400,  -400,  1468,
    1468,  1468,   -86,  -269,  -125,  -400,  -400,  -400,  -123,  -400,
    -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  1468,   -86,
    2887,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  -400,  2302,  -253,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  -263,  -400,  -400,  -400,  -400,  -121,  -119,  -400,
    -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  2432,
    -400,  2432,  -400,  2432,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  2432,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
    2432,  2432,  2432,  -400,  -400,  -400,  -400,  2432,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,  -400,  3086,  -400,     0,  -400,
    -400,  -400,  -400,  -400,  -400,  2628,  2628,  -153,  -151,  -149,
    -147,  -145,  -142,  -138,  -135,  -133,  -131,  -128,  -126,  -124,
    -122,  -120,  -118,  -400,  -116,  -114,  -112,  -110,  -400,  -400,
    -108,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,  -400,  -106,  -400,  -400,  -400,
    -400,  -400,   452,  -400,  -400,  -400,  -104,  -400,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,   541,
     630,   959,  1048,  1137,  -100,   -98,  1559,  -400,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,     1,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  -400,  1976,  -400,  -400,  -400,  -400,  2628,   -50,
    -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  -400,  2521,  2521,  2521,  2521,  2521,  2521,  2521,
    2521,    11,  3086,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,  -400,
    -400,  2521,  -400,  -400,  -400,  -400,  2521,  -400,  -400,  2521,
    -400,  -400,  2521,  -400,  -400,  2521,  -400,  -400,  2521,  -400,
    -400,  -400,  -400,     6,  1650,  2106,  2432,  2432,  2432,  -400,
    -400,  2432,  2432,  2432,  -400,  2432,  2432,  2432,  2432,  2432,
    2432,  2432,  2432,  2432,  2432,  2432,  2432,  2432,  2432,  2432,
    -400,  2432,  2432,  2432,  2432,  -400,  -400,  2432,  2432,  2432,
    2432,   -86,  -400,  2521,  -400,  2432,  2432,  2432,  -400,  -400,
    -400,  -400,  -400,  2628,  2628,  -400,  -400,  2521,  2521,  2521,
    2521,  2521,  2521,  2521,  2521,  2521,  2521,  2521,  2521,  2521,
    2521,  2521,  2521,  2521,  2521,  2521,  2521,  2521,  2521,  2521,
    2521,  2521,  2521,  2521,  2521,  2521,  2521,  -400,  2521,  2521,
    2521,  -400,  -400
  };

  const unsigned short int
  seclang_parser::yydefact_[] =
  {
       0,     2,     0,   139,     0,    87,     0,    86,    90,    91,
       7,     6,     0,    11,    14,    12,    13,    17,     0,   124,
     123,    92,     0,     0,   100,   101,   102,   103,    97,   125,
     104,   105,   137,   136,   108,   109,   110,     0,   128,   126,
       0,   127,     0,   129,     0,     0,   113,     0,     0,     0,
      78,   148,   149,   150,     0,     0,   116,   118,   117,     0,
       0,     0,     0,     0,     0,    26,    24,    25,     0,   138,
     144,   145,   146,   143,   147,   114,   115,   142,     0,     0,
       0,     4,    72,     5,    96,    95,    15,    16,    89,    88,
       9,    10,     8,    20,    19,    18,    94,    93,    99,    98,
      83,    82,   130,   131,    85,    84,   132,   133,   112,   111,
      81,    79,    80,     0,     0,   330,   331,   332,   333,   334,
     335,   336,     0,   340,   341,   342,   343,     0,     0,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,     0,
     363,     0,   364,     0,   366,   367,   368,   369,   370,   371,
     372,   373,     0,   375,   376,   377,   378,   379,   380,   381,
       0,     0,     0,   386,   387,   388,   389,     0,   397,   398,
     399,   400,   412,   418,   403,   404,   405,   416,   417,   424,
     406,   402,   411,   423,   422,   395,   394,   393,   427,   426,
     415,   413,   428,   414,   401,   396,   419,   420,   421,   407,
     410,   409,   408,   425,   391,   392,     0,    75,    30,    32,
      77,   107,   106,   134,   135,     0,     0,   162,   165,   168,
     171,   174,   177,   180,   183,   186,   189,   192,   195,   198,
     201,   204,   207,   260,   249,   210,   246,   252,   261,   262,
     219,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   290,   289,   293,
     292,   291,   294,   296,   295,   297,   255,   298,   299,   300,
     302,   301,   223,   303,   304,   256,   259,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   316,   314,   315,   227,
     231,   239,   243,   235,   213,   216,     0,   318,   317,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     119,   152,   157,   120,   121,   122,    22,    21,    23,    28,
      27,   140,   141,     0,   151,    76,     1,     3,     0,   430,
     385,   350,   349,   348,   338,   337,   339,   345,   344,   347,
     346,   436,   437,   361,   362,   365,   374,   382,   383,   384,
     390,     0,     0,   159,   158,   160,   161,   163,   164,   166,
     167,   169,   170,   172,   173,   175,   176,   178,   179,   181,
     182,   184,   185,   187,   188,   190,   191,   193,   194,   196,
     197,   199,   200,   202,   203,   205,   206,   247,   248,   208,
     209,   244,   245,   250,   251,   217,   218,   253,   254,   221,
     222,   220,   257,   258,   225,   226,   224,   229,   230,   228,
     237,   238,   236,   241,   242,   240,   233,   234,   232,   211,
     212,   214,   215,     0,     0,     0,     0,     0,     0,    38,
      39,     0,     0,     0,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,     0,     0,     0,     0,    40,    41,     0,     0,     0,
       0,    74,    33,    35,   429,     0,     0,     0,   434,   435,
      29,    31,   153,     0,     0,   154,    34,    36,    70,    55,
      54,    56,    57,    43,    58,    51,    59,    42,    60,    61,
      62,    63,    64,    65,    66,    52,    67,    68,    69,    44,
      45,    46,    47,    48,    49,    50,    53,    73,   431,   432,
     433,   156,   155
  };

  const short int
  seclang_parser::yypgoto_[] =
  {
    -400,  -400,   -70,  -400,   -45,  -181,  -400,  -399,  -400,  -400,
     -55,  -259,   -59,  -309,  -400,  -132
  };

  const short int
  seclang_parser::yydefgoto_[] =
  {
      -1,    80,    81,    82,   207,   208,   471,   472,    83,   333,
     320,   321,   352,   209,   340,   353
  };

  const unsigned short int
  seclang_parser::yytable_[] =
  {
     322,   322,   322,   362,   210,   323,   324,   434,   213,   354,
     337,   355,   434,   113,   362,    84,    85,   325,   214,   322,
     356,    90,    91,   334,    93,   361,    92,    94,   357,   358,
     359,    95,   326,   327,   335,   360,   486,   328,   344,   345,
      86,    87,   110,   346,   111,   112,   341,   433,   342,   343,
     475,   476,   477,   481,   339,    88,    89,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,     0,
     411,    96,    97,    98,    99,     0,   363,   364,   100,   101,
     102,   103,   104,   105,   106,   107,     0,   416,   419,   422,
     425,   428,   108,   109,   211,   212,   329,   330,   331,   332,
     347,   348,   349,   350,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,     0,   375,   376,     0,     0,   377,
     378,   473,   379,   380,   381,   382,   383,   384,     0,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   412,   413,     0,   206,   429,   430,   431,
     432,     0,     0,     0,     0,     0,     0,   322,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   474,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   479,   479,   479,   479,   479,   479,
     479,   479,     0,   487,   488,   489,   490,     0,     0,   491,
     492,   493,     0,   494,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   482,   509,
     510,   511,   512,   480,     0,   513,   514,   515,   516,     0,
       0,     0,     0,   518,   519,   520,     0,     0,     0,     0,
       0,     0,   479,     0,     0,     0,     0,   479,     0,     0,
     479,     0,     0,   479,     0,     0,   479,     0,     0,   479,
       0,     0,     0,     0,     0,   485,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   479,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   521,   522,   517,     0,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,     0,   479,
     479,   479,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   351,     0,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,     0,   409,
     410,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   351,     0,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,     0,   414,   415,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   351,     0,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,     0,   417,   418,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     351,     0,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,     0,   420,   421,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   351,
       0,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,     0,   423,   424,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   351,     0,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,     0,   426,   427,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   483,   484,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   300,   301,   302,   303,   304,   305,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,     0,     0,     0,     0,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,     0,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,     0,     0,     0,     0,     0,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,     0,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   351,     0,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,     0,     0,     0,     0,   338,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   351,     0,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
       0,     0,     0,     0,     0,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,     0,     0,     1,
       0,     0,     0,     2,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   351,     0,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   478,     0,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   336,     0,     0,
       0,     2,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,     4,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205
  };

  const short int
  seclang_parser::yycheck_[] =
  {
      59,    60,    61,     3,    49,    60,    61,     6,   298,   141,
      80,   143,     6,    99,     3,   301,   302,    62,   308,    78,
     152,   301,   302,    78,   300,   206,   306,   303,   160,   161,
     162,   307,   301,   302,    79,   167,   435,   306,   301,   302,
     141,   142,   299,   306,   301,   302,   299,   306,   301,   302,
     100,   101,   102,   362,   113,   301,   302,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,    -1,
     282,   301,   302,   301,   302,    -1,   215,   216,   301,   302,
     304,   305,   301,   302,   304,   305,    -1,   299,   300,   301,
     302,   303,   301,   302,   301,   302,   301,   302,   301,   302,
     301,   302,   301,   302,   337,   338,   337,   338,   337,   338,
     337,   338,   337,   338,    -1,   337,   338,    -1,    -1,   337,
     338,   333,   337,   338,   337,   338,   337,   338,    -1,   337,
     338,   337,   338,   337,   338,   337,   338,   337,   338,   337,
     338,   337,   338,   337,   338,   337,   338,   337,   338,   337,
     338,   337,   338,   337,   338,    -1,   322,   337,   338,   337,
     338,    -1,    -1,    -1,    -1,    -1,    -1,   306,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   338,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   353,   354,   355,   356,   357,   358,
     359,   360,    -1,   435,   436,   437,   438,    -1,    -1,   441,
     442,   443,    -1,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   322,   461,
     462,   463,   464,   322,    -1,   467,   468,   469,   470,    -1,
      -1,    -1,    -1,   475,   476,   477,    -1,    -1,    -1,    -1,
      -1,    -1,   411,    -1,    -1,    -1,    -1,   416,    -1,    -1,
     419,    -1,    -1,   422,    -1,    -1,   425,    -1,    -1,   428,
      -1,    -1,    -1,    -1,    -1,   434,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   473,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   483,   484,   471,    -1,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,   514,   515,   516,    -1,   518,
     519,   520,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   321,    -1,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,    -1,   337,
     338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   321,    -1,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,    -1,   337,   338,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   321,    -1,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,    -1,   337,   338,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     321,    -1,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,    -1,   337,   338,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   321,
      -1,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,    -1,   337,   338,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   321,    -1,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,    -1,   337,   338,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,    -1,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,    -1,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   321,    -1,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   321,    -1,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    -1,    -1,     0,
      -1,    -1,    -1,     4,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   321,    -1,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   321,    -1,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,    -1,    -1,
      -1,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   140,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234
  };

  const unsigned short int
  seclang_parser::yystos_[] =
  {
       0,     0,     4,     5,   140,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     340,   341,   342,   347,   301,   302,   141,   142,   301,   302,
     301,   302,   306,   300,   303,   307,   301,   302,   301,   302,
     301,   302,   304,   305,   301,   302,   304,   305,   301,   302,
     299,   301,   302,    99,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   322,   343,   344,   352,
     343,   301,   302,   298,   308,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     349,   350,   351,   349,   349,   343,   301,   302,   306,   301,
     302,   301,   302,   348,   349,   343,     0,   341,   103,   351,
     353,   299,   301,   302,   301,   302,   306,   301,   302,   301,
     302,   321,   351,   354,   354,   354,   354,   354,   354,   354,
     354,   344,     3,   351,   351,   337,   338,   337,   338,   337,
     338,   337,   338,   337,   338,   337,   338,   337,   338,   337,
     338,   337,   338,   337,   338,   337,   338,   337,   338,   337,
     338,   337,   338,   337,   338,   337,   338,   337,   338,   337,
     338,   337,   338,   337,   338,   337,   338,   337,   338,   337,
     338,   354,   337,   338,   337,   338,   354,   337,   338,   354,
     337,   338,   354,   337,   338,   354,   337,   338,   354,   337,
     338,   337,   338,   350,     6,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   345,   346,   354,   351,   100,   101,   102,   321,   351,
     322,   352,   322,     8,     9,   351,   346,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   343,   354,   354,
     354,   351,   351
  };

  const unsigned short int
  seclang_parser::yyr1_[] =
  {
       0,   339,   340,   340,   340,   341,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   343,
     343,   344,   344,   345,   345,   345,   345,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   348,   349,   349,   350,   350,   350,   350,   350,   350,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   353,
     353,   353,   353,   353,   354,   354,   354,   354
  };

  const unsigned char
  seclang_parser::yyr2_[] =
  {
       0,     2,     1,     2,     1,     1,     1,     1,     2,     2,
       2,     1,     1,     1,     1,     2,     2,     1,     2,     2,
       2,     2,     2,     2,     1,     1,     1,     2,     2,     3,
       1,     3,     1,     1,     2,     1,     2,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     4,     3,     2,     2,     2,     1,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     2,     2,
       1,     1,     1,     2,     2,     2,     2,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     4,     4,     1,     2,     2,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     2,     1,     2,     2,     2,     1,     2,     2,
       2,     1,     2,     2,     2,     1,     2,     2,     2,     1,
       2,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     3,     3,     3,     2,     2,     1,     1
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const seclang_parser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "\",\"",
  "\"CONFIG_CONTENT_INJECTION\"", "\"CONGIG_DIR_RESPONSE_BODY_MP_CLEAR\"",
  "PIPE", "NEW_LINE", "VAR_COUNT", "VAR_EXCLUSION", "VARIABLE_ARGS",
  "VARIABLE_ARGS_POST", "VARIABLE_ARGS_GET", "VARIABLE_FILES_SIZES",
  "VARIABLE_FILES_NAMES", "VARIABLE_FILES_TMP_CONTENT",
  "VARIABLE_MULTIPART_FILENAME", "VARIABLE_MULTIPART_NAME",
  "VARIABLE_MATCHED_VARS_NAMES", "VARIABLE_MATCHED_VARS", "VARIABLE_FILES",
  "VARIABLE_REQUEST_COOKIES", "VARIABLE_REQUEST_HEADERS",
  "VARIABLE_RESPONSE_HEADERS", "VARIABLE_GEO",
  "VARIABLE_REQUEST_COOKIES_NAMES", "VARIABLE_ARGS_COMBINED_SIZE",
  "VARIABLE_ARGS_GET_NAMES", "VARIABLE_RULE", "\"Variable ARGS_NAMES\"",
  "VARIABLE_ARGS_POST_NAMES", "\"AUTH_TYPE\"", "\"FILES_COMBINED_SIZE\"",
  "\"FILES_TMPNAMES\"", "\"FULL_REQUEST\"", "\"FULL_REQUEST_LENGTH\"",
  "\"INBOUND_DATA_ERROR\"", "\"MATCHED_VAR\"", "\"MATCHED_VAR_NAME\"",
  "VARIABLE_MULTIPART_BOUNDARY_QUOTED",
  "VARIABLE_MULTIPART_BOUNDARY_WHITESPACE", "\"MULTIPART_CRLF_LF_LINES\"",
  "\"MULTIPART_DATA_AFTER\"", "VARIABLE_MULTIPART_DATA_BEFORE",
  "\"MULTIPART_FILE_LIMIT_EXCEEDED\"", "\"MULTIPART_HEADER_FOLDING\"",
  "\"MULTIPART_INVALID_HEADER_FOLDING\"",
  "VARIABLE_MULTIPART_INVALID_PART", "\"MULTIPART_INVALID_QUOTING\"",
  "VARIABLE_MULTIPART_LF_LINE", "VARIABLE_MULTIPART_MISSING_SEMICOLON",
  "VARIABLE_MULTIPART_SEMICOLON_MISSING", "\"MULTIPART_STRICT_ERROR\"",
  "\"MULTIPART_UNMATCHED_BOUNDARY\"", "\"OUTBOUND_DATA_ERROR\"",
  "\"PATH_INFO\"", "\"QUERY_STRING\"", "\"REMOTE_ADDR\"",
  "\"REMOTE_HOST\"", "\"REMOTE_PORT\"", "\"REQBODY_ERROR_MSG\"",
  "\"REQBODY_ERROR\"", "\"REQBODY_PROCESSOR_ERROR_MSG\"",
  "\"REQBODY_PROCESSOR_ERROR\"", "\"REQBODY_PROCESSOR\"",
  "\"REQUEST_BASENAME\"", "\"REQUEST_BODY_LENGTH\"", "\"REQUEST_BODY\"",
  "\"REQUEST_FILENAME\"", "VARIABLE_REQUEST_HEADERS_NAMES",
  "\"REQUEST_LINE\"", "\"REQUEST_METHOD\"", "\"REQUEST_PROTOCOL\"",
  "\"REQUEST_URI_RAW\"", "\"REQUEST_URI\"", "\"RESOURCE\"",
  "\"RESPONSE_BODY\"", "\"RESPONSE_CONTENT_LENGTH\"",
  "VARIABLE_RESPONSE_CONTENT_TYPE", "VARIABLE_RESPONSE_HEADERS_NAMES",
  "\"RESPONSE_PROTOCOL\"", "\"RESPONSE_STATUS\"", "\"SERVER_ADDR\"",
  "\"SERVER_NAME\"", "\"SERVER_PORT\"", "\"SESSIONID\"", "\"UNIQUE_ID\"",
  "\"URLENCODED_ERROR\"", "\"USERID\"", "\"WEBAPPID\"",
  "\"VARIABLE_STATUS\"", "\"VARIABLE_STATUS_LINE\"", "\"VARIABLE_IP\"",
  "\"VARIABLE_GLOBAL\"", "\"VARIABLE_TX\"", "\"VARIABLE_SESSION\"",
  "\"VARIABLE_USER\"", "\"RUN_TIME_VAR_ENV\"", "\"RUN_TIME_VAR_XML\"",
  "\"SetVar\"", "SETVAR_OPERATION_EQUALS", "SETVAR_OPERATION_EQUALS_PLUS",
  "SETVAR_OPERATION_EQUALS_MINUS", "\"NOT\"", "\"OPERATOR_BEGINS_WITH\"",
  "\"OPERATOR_CONTAINS\"", "\"OPERATOR_CONTAINS_WORD\"",
  "\"OPERATOR_DETECT_SQLI\"", "\"OPERATOR_DETECT_XSS\"",
  "\"OPERATOR_ENDS_WITH\"", "\"OPERATOR_EQ\"", "\"OPERATOR_FUZZY_HASH\"",
  "\"OPERATOR_GEOLOOKUP\"", "\"OPERATOR_GE\"", "\"OPERATOR_GSB_LOOKUP\"",
  "\"OPERATOR_GT\"", "\"OPERATOR_INSPECT_FILE\"",
  "\"OPERATOR_IP_MATCH_FROM_FILE\"", "\"OPERATOR_IP_MATCH\"",
  "\"OPERATOR_LE\"", "\"OPERATOR_LT\"", "\"OPERATOR_PM_FROM_FILE\"",
  "\"OPERATOR_PM\"", "\"OPERATOR_RBL\"", "\"OPERATOR_RSUB\"",
  "\"Operator RX (content only)\"", "\"OPERATOR_RX\"",
  "\"OPERATOR_STR_EQ\"", "\"OPERATOR_STR_MATCH\"",
  "\"OPERATOR_UNCONDITIONAL_MATCH\"", "\"OPERATOR_VALIDATE_BYTE_RANGE\"",
  "\"OPERATOR_VALIDATE_DTD\"", "\"OPERATOR_VALIDATE_HASH\"",
  "\"OPERATOR_VALIDATE_SCHEMA\"", "\"OPERATOR_VALIDATE_URL_ENCODING\"",
  "\"OPERATOR_VALIDATE_UTF8_ENCODING\"", "\"OPERATOR_VERIFY_CC\"",
  "\"OPERATOR_VERIFY_CPF\"", "\"OPERATOR_VERIFY_SSN\"",
  "\"OPERATOR_WITHIN\"", "CONFIG_DIR_AUDIT_LOG_FMT", "JSON", "NATIVE",
  "\"ACTION_CTL_RULE_ENGINE\"", "\"Accuracy\"", "\"Allow\"", "\"Append\"",
  "\"AuditLog\"", "\"Block\"", "\"Capture\"", "\"Chain\"",
  "\"ACTION_CTL_AUDIT_ENGINE\"", "\"ACTION_CTL_AUDIT_LOG_PARTS\"",
  "\"ACTION_CTL_BDY_JSON\"", "\"ACTION_CTL_BDY_XML\"",
  "\"ACTION_CTL_BDY_URLENCODED\"", "\"ACTION_CTL_FORCE_REQ_BODY_VAR\"",
  "\"ACTION_CTL_REQUEST_BODY_ACCESS\"", "\"ACTION_CTL_RULE_REMOVE_BY_ID\"",
  "\"ACTION_CTL_RULE_REMOVE_BY_TAG\"",
  "\"ACTION_CTL_RULE_REMOVE_TARGET_BY_ID\"",
  "\"ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG\"", "\"Deny\"",
  "\"DeprecateVar\"", "\"Drop\"", "\"Exec\"", "\"ExpireVar\"", "\"Id\"",
  "\"InitCol\"", "\"Log\"", "\"LogData\"", "\"Maturity\"", "\"Msg\"",
  "\"MultiMatch\"", "\"NoAuditLog\"", "\"NoLog\"", "\"Pass\"", "\"Pause\"",
  "\"Phase\"", "\"Prepend\"", "\"Proxy\"", "\"Redirect\"", "\"Rev\"",
  "\"SanitiseArg\"", "\"SanitiseMatched\"", "\"SanitiseMatchedBytes\"",
  "\"SanitiseRequestHeader\"", "\"SanitiseResponseHeader\"", "\"SetEnv\"",
  "\"SetRsc\"", "\"SetSid\"", "\"SetUID\"", "\"Severity\"", "\"Skip\"",
  "\"SkipAfter\"", "\"Status\"", "\"Tag\"",
  "\"ACTION_TRANSFORMATION_BASE_64_ENCODE\"",
  "\"ACTION_TRANSFORMATION_BASE_64_DECODE\"",
  "\"ACTION_TRANSFORMATION_BASE_64_DECODE_EXT\"",
  "\"ACTION_TRANSFORMATION_CMD_LINE\"",
  "\"ACTION_TRANSFORMATION_COMPRESS_WHITESPACE\"",
  "\"ACTION_TRANSFORMATION_CSS_DECODE\"",
  "\"ACTION_TRANSFORMATION_ESCAPE_SEQ_DECODE\"",
  "\"ACTION_TRANSFORMATION_HEX_ENCODE\"",
  "\"ACTION_TRANSFORMATION_HEX_DECODE\"",
  "\"ACTION_TRANSFORMATION_HTML_ENTITY_DECODE\"",
  "\"ACTION_TRANSFORMATION_JS_DECODE\"",
  "\"ACTION_TRANSFORMATION_LENGTH\"",
  "\"ACTION_TRANSFORMATION_LOWERCASE\"", "\"ACTION_TRANSFORMATION_MD5\"",
  "\"ACTION_TRANSFORMATION_NONE\"",
  "\"ACTION_TRANSFORMATION_NORMALISE_PATH\"",
  "\"ACTION_TRANSFORMATION_NORMALISE_PATH_WIN\"",
  "\"ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT\"",
  "\"ACTION_TRANSFORMATION_PARITY_ODD_7_BIT\"",
  "\"ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT\"",
  "\"ACTION_TRANSFORMATION_REMOVE_COMMENTS\"",
  "\"ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR\"",
  "\"ACTION_TRANSFORMATION_REMOVE_NULLS\"",
  "\"ACTION_TRANSFORMATION_REMOVE_WHITESPACE\"",
  "\"ACTION_TRANSFORMATION_REPLACE_COMMENTS\"",
  "\"ACTION_TRANSFORMATION_REPLACE_NULLS\"",
  "\"ACTION_TRANSFORMATION_SHA1\"",
  "\"ACTION_TRANSFORMATION_SQL_HEX_DECODE\"",
  "\"ACTION_TRANSFORMATION_TRIM\"", "\"ACTION_TRANSFORMATION_TRIM_LEFT\"",
  "\"ACTION_TRANSFORMATION_TRIM_RIGHT\"",
  "\"ACTION_TRANSFORMATION_UPPERCASE\"",
  "\"ACTION_TRANSFORMATION_URL_ENCODE\"",
  "\"ACTION_TRANSFORMATION_URL_DECODE\"",
  "\"ACTION_TRANSFORMATION_URL_DECODE_UNI\"",
  "\"ACTION_TRANSFORMATION_UTF8_TO_UNICODE\"", "\"Ver\"", "\"xmlns\"",
  "\"CONFIG_COMPONENT_SIG\"", "\"CONFIG_CONN_ENGINE\"",
  "\"CONFIG_SEC_ARGUMENT_SEPARATOR\"", "\"CONFIG_SEC_WEB_APP_ID\"",
  "\"CONFIG_SEC_SERVER_SIG\"", "\"CONFIG_DIR_AUDIT_DIR\"",
  "\"CONFIG_DIR_AUDIT_DIR_MOD\"", "\"CONFIG_DIR_AUDIT_ENG\"",
  "\"CONFIG_DIR_AUDIT_FLE_MOD\"", "\"CONFIG_DIR_AUDIT_LOG\"",
  "\"CONFIG_DIR_AUDIT_LOG2\"", "\"CONFIG_DIR_AUDIT_LOG_P\"",
  "\"CONFIG_DIR_AUDIT_STS\"", "\"CONFIG_DIR_AUDIT_TPE\"",
  "\"CONFIG_DIR_DEBUG_LOG\"", "\"CONFIG_DIR_DEBUG_LVL\"",
  "\"CONFIG_SEC_CACHE_TRANSFORMATIONS\"",
  "\"CONFIG_SEC_DISABLE_BACKEND_COMPRESS\"", "\"CONFIG_SEC_HASH_ENGINE\"",
  "\"CONFIG_SEC_HASH_KEY\"", "\"CONFIG_SEC_HASH_PARAM\"",
  "\"CONFIG_SEC_HASH_METHOD_RX\"", "\"CONFIG_SEC_HASH_METHOD_PM\"",
  "\"CONFIG_SEC_CHROOT_DIR\"", "\"CONFIG_DIR_GEO_DB\"",
  "\"CONFIG_DIR_GSB_DB\"", "\"CONFIG_SEC_GUARDIAN_LOG\"",
  "\"CONFIG_DIR_PCRE_MATCH_LIMIT\"",
  "\"CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION\"",
  "\"CONFIG_SEC_CONN_R_STATE_LIMIT\"", "\"CONFIG_SEC_CONN_W_STATE_LIMIT\"",
  "\"CONFIG_SEC_SENSOR_ID\"", "\"CONFIG_DIR_REQ_BODY\"",
  "\"CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT\"",
  "\"CONFIG_DIR_REQ_BODY_LIMIT\"", "\"CONFIG_DIR_REQ_BODY_LIMIT_ACTION\"",
  "\"CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT\"", "\"CONFIG_DIR_RES_BODY\"",
  "\"CONFIG_DIR_RES_BODY_LIMIT\"", "\"CONFIG_DIR_RES_BODY_LIMIT_ACTION\"",
  "\"CONFIG_SEC_RULE_INHERITANCE\"", "\"CONFIG_SEC_RULE_PERF_TIME\"",
  "\"CONFIG_DIR_RULE_ENG\"", "\"CONFIG_DIR_SEC_ACTION\"",
  "\"CONFIG_DIR_SEC_DEFAULT_ACTION\"", "\"CONFIG_DIR_SEC_MARKER\"",
  "\"CONFIG_DIR_UNICODE_MAP_FILE\"", "\"CONFIG_SEC_COLLECTION_TIMEOUT\"",
  "\"CONFIG_SEC_HTTP_BLKEY\"", "\"CONFIG_SEC_INTERCEPT_ON_ERROR\"",
  "\"CONFIG_SEC_REMOTE_RULES_FAIL_ACTION\"",
  "\"CONFIG_SEC_RULE_REMOVE_BY_ID\"", "\"CONFIG_SEC_RULE_REMOVE_BY_MSG\"",
  "\"CONFIG_SEC_RULE_REMOVE_BY_TAG\"",
  "\"CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG\"",
  "\"CONFIG_SEC_RULE_UPDATE_TARGET_BY_MSG\"",
  "\"CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID\"",
  "\"CONFIG_SEC_RULE_UPDATE_ACTION_BY_ID\"",
  "\"CONFIG_UPDLOAD_KEEP_FILES\"", "\"CONFIG_UPDLOAD_SAVE_TMP_FILES\"",
  "\"CONFIG_UPLOAD_DIR\"", "\"CONFIG_UPLOAD_FILE_LIMIT\"",
  "\"CONFIG_UPLOAD_FILE_MODE\"", "\"CONFIG_VALUE_ABORT\"",
  "\"CONFIG_VALUE_DETC\"", "\"CONFIG_VALUE_HTTPS\"",
  "\"CONFIG_VALUE_OFF\"", "\"CONFIG_VALUE_ON\"",
  "\"CONFIG_VALUE_PARALLEL\"", "\"CONFIG_VALUE_PROCESS_PARTIAL\"",
  "\"CONFIG_VALUE_REJECT\"", "\"CONFIG_VALUE_RELEVANT_ONLY\"",
  "\"CONFIG_VALUE_SERIAL\"", "\"CONFIG_VALUE_WARN\"",
  "\"CONFIG_XML_EXTERNAL_ENTITY\"", "\"CONGIG_DIR_RESPONSE_BODY_MP\"",
  "\"CONGIG_DIR_SEC_ARG_SEP\"", "\"CONGIG_DIR_SEC_COOKIE_FORMAT\"",
  "\"CONFIG_SEC_COOKIEV0_SEPARATOR\"", "\"CONGIG_DIR_SEC_DATA_DIR\"",
  "\"CONGIG_DIR_SEC_STATUS_ENGINE\"",
  "\"CONFIG_SEC_STREAM_IN_BODY_INSPECTION\"",
  "\"CONFIG_SEC_STREAM_OUT_BODY_INSPECTION\"",
  "\"CONGIG_DIR_SEC_TMP_DIR\"", "\"DIRECTIVE\"",
  "\"DIRECTIVE_SECRULESCRIPT\"", "\"FREE_TEXT_QUOTE_MACRO_EXPANSION\"",
  "\"QUOTATION_MARK\"", "\"RUN_TIME_VAR_BLD\"", "\"RUN_TIME_VAR_DUR\"",
  "\"RUN_TIME_VAR_HSV\"", "\"RUN_TIME_VAR_REMOTE_USER\"",
  "\"RUN_TIME_VAR_TIME\"", "\"RUN_TIME_VAR_TIME_DAY\"",
  "\"RUN_TIME_VAR_TIME_EPOCH\"", "\"RUN_TIME_VAR_TIME_HOUR\"",
  "\"RUN_TIME_VAR_TIME_MIN\"", "\"RUN_TIME_VAR_TIME_MON\"",
  "\"RUN_TIME_VAR_TIME_SEC\"", "\"RUN_TIME_VAR_TIME_WDAY\"",
  "\"RUN_TIME_VAR_TIME_YEAR\"", "\"VARIABLE\"", "\"Dictionary element\"",
  "\"Dictionary element, selected by regexp\"", "$accept", "input", "line",
  "audit_log", "actions", "actions_may_quoted", "op", "op_before_init",
  "expression", "variables", "variables_pre_process",
  "variables_may_be_quoted", "var", "act", "setvar_action",
  "run_time_string", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
  seclang_parser::yyrline_[] =
  {
       0,   741,   741,   745,   746,   749,   754,   760,   766,   770,
     774,   780,   786,   792,   798,   803,   808,   814,   821,   825,
     829,   835,   839,   843,   848,   853,   858,   863,   867,   874,
     878,   885,   891,   901,   910,   920,   929,   942,   946,   950,
     954,   958,   962,   966,   970,   974,   978,   983,   987,   991,
     995,   999,  1004,  1009,  1013,  1017,  1021,  1025,  1029,  1033,
    1037,  1041,  1045,  1049,  1053,  1057,  1061,  1065,  1069,  1073,
    1077,  1081,  1095,  1096,  1120,  1139,  1154,  1178,  1234,  1238,
    1242,  1246,  1250,  1254,  1258,  1262,  1266,  1275,  1279,  1284,
    1287,  1292,  1297,  1302,  1307,  1310,  1315,  1318,  1323,  1328,
    1331,  1336,  1341,  1346,  1351,  1356,  1361,  1366,  1369,  1374,
    1379,  1384,  1389,  1392,  1397,  1402,  1407,  1420,  1433,  1446,
    1459,  1472,  1498,  1524,  1536,  1556,  1584,  1589,  1594,  1603,
    1608,  1612,  1616,  1620,  1624,  1628,  1632,  1637,  1642,  1654,
    1660,  1664,  1668,  1679,  1688,  1689,  1696,  1701,  1706,  1711,
    1718,  1726,  1763,  1767,  1774,  1779,  1785,  1791,  1797,  1804,
    1814,  1818,  1822,  1826,  1830,  1834,  1838,  1842,  1846,  1850,
    1854,  1858,  1862,  1866,  1870,  1874,  1878,  1882,  1886,  1890,
    1894,  1898,  1902,  1906,  1910,  1914,  1918,  1922,  1926,  1930,
    1934,  1938,  1942,  1946,  1950,  1954,  1958,  1962,  1966,  1970,
    1974,  1978,  1982,  1986,  1990,  1994,  1998,  2002,  2006,  2010,
    2014,  2018,  2022,  2026,  2030,  2034,  2038,  2042,  2046,  2050,
    2054,  2058,  2062,  2066,  2070,  2074,  2078,  2082,  2086,  2090,
    2094,  2098,  2102,  2106,  2110,  2114,  2118,  2122,  2126,  2130,
    2134,  2138,  2142,  2146,  2150,  2154,  2158,  2162,  2166,  2170,
    2175,  2179,  2183,  2188,  2192,  2196,  2201,  2206,  2210,  2214,
    2218,  2222,  2226,  2230,  2234,  2238,  2242,  2246,  2250,  2254,
    2258,  2262,  2266,  2270,  2274,  2278,  2282,  2286,  2290,  2294,
    2298,  2302,  2306,  2310,  2314,  2318,  2322,  2326,  2330,  2334,
    2338,  2342,  2346,  2350,  2354,  2358,  2362,  2366,  2370,  2374,
    2378,  2382,  2386,  2390,  2394,  2398,  2402,  2406,  2410,  2414,
    2418,  2422,  2426,  2430,  2434,  2438,  2442,  2446,  2454,  2461,
    2468,  2475,  2482,  2489,  2496,  2503,  2510,  2517,  2524,  2531,
    2541,  2545,  2549,  2553,  2557,  2561,  2565,  2569,  2574,  2579,
    2584,  2588,  2592,  2596,  2600,  2605,  2610,  2614,  2618,  2622,
    2626,  2630,  2634,  2638,  2642,  2646,  2650,  2654,  2659,  2663,
    2668,  2672,  2676,  2680,  2684,  2688,  2692,  2696,  2700,  2704,
    2708,  2712,  2716,  2720,  2724,  2728,  2732,  2736,  2740,  2744,
    2748,  2752,  2756,  2760,  2764,  2768,  2772,  2776,  2780,  2784,
    2788,  2792,  2796,  2800,  2804,  2808,  2812,  2816,  2820,  2824,
    2828,  2832,  2836,  2840,  2844,  2848,  2852,  2856,  2860,  2864,
    2868,  2872,  2876,  2880,  2884,  2888,  2892,  2896,  2900,  2904,
    2908,  2912,  2916,  2920,  2924,  2928,  2932,  2936,  2940,  2947,
    2951,  2955,  2959,  2963,  2970,  2975,  2980,  2986
  };

  // Print the state stack on the debug stream.
  void
  seclang_parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << '\n';
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  seclang_parser::yy_reduce_print_ (int yyrule)
  {
    unsigned yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG



} // yy
#line 6763 "seclang-parser.cc" // lalr1.cc:1163
#line 2993 "seclang-parser.yy" // lalr1.cc:1164


void yy::seclang_parser::error (const location_type& l, const std::string& m) {
    driver.error (l, m);
}
