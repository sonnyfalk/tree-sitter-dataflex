#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 99
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  sym_identifier = 1,
  aux_sym_function_header_token1 = 2,
  aux_sym_function_header_token2 = 3,
  aux_sym_function_footer_token1 = 4,
  aux_sym_procedure_header_token1 = 5,
  aux_sym_procedure_footer_token1 = 6,
  aux_sym_object_header_token1 = 7,
  aux_sym_object_header_token2 = 8,
  aux_sym_object_header_token3 = 9,
  aux_sym_object_footer_token1 = 10,
  aux_sym_object_footer_token2 = 11,
  aux_sym__deferred_object_token1 = 12,
  aux_sym__deferred_object_token2 = 13,
  aux_sym_move_statement_token1 = 14,
  aux_sym_move_statement_token2 = 15,
  sym_number_literal = 16,
  sym_string_literal = 17,
  sym__eol = 18,
  sym_line_comment = 19,
  anon_sym_SLASH_STAR = 20,
  aux_sym_comment_token1 = 21,
  anon_sym_SLASH = 22,
  sym_source_file = 23,
  sym__top_level_code = 24,
  sym_function_definition = 25,
  sym_function_header = 26,
  aux_sym__parameter_list = 27,
  sym_parameter = 28,
  sym__function_body = 29,
  sym_function_footer = 30,
  sym_procedure_definition = 31,
  sym_procedure_header = 32,
  sym__procedure_body = 33,
  sym_procedure_footer = 34,
  sym_object_definition = 35,
  sym_object_header = 36,
  aux_sym__object_body = 37,
  sym_object_footer = 38,
  sym__deferred_object = 39,
  aux_sym__statement_list = 40,
  sym__statement = 41,
  sym_move_statement = 42,
  sym_unknown_command_statement = 43,
  sym__expression = 44,
  sym__literal = 45,
  sym_comment = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_unknown_command_statement_repeat1 = 48,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym_function_header_token1] = "keyword",
  [aux_sym_function_header_token2] = "keyword",
  [aux_sym_function_footer_token1] = "keyword",
  [aux_sym_procedure_header_token1] = "keyword",
  [aux_sym_procedure_footer_token1] = "keyword",
  [aux_sym_object_header_token1] = "keyword",
  [aux_sym_object_header_token2] = "keyword",
  [aux_sym_object_header_token3] = "keyword",
  [aux_sym_object_footer_token1] = "keyword",
  [aux_sym_object_footer_token2] = "keyword",
  [aux_sym__deferred_object_token1] = "keyword",
  [aux_sym__deferred_object_token2] = "keyword",
  [aux_sym_move_statement_token1] = "keyword",
  [aux_sym_move_statement_token2] = "keyword",
  [sym_number_literal] = "number_literal",
  [sym_string_literal] = "string_literal",
  [sym__eol] = "_eol",
  [sym_line_comment] = "line_comment",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH] = "/",
  [sym_source_file] = "source_file",
  [sym__top_level_code] = "_top_level_code",
  [sym_function_definition] = "function_definition",
  [sym_function_header] = "function_header",
  [aux_sym__parameter_list] = "_parameter_list",
  [sym_parameter] = "parameter",
  [sym__function_body] = "_function_body",
  [sym_function_footer] = "function_footer",
  [sym_procedure_definition] = "procedure_definition",
  [sym_procedure_header] = "procedure_header",
  [sym__procedure_body] = "_procedure_body",
  [sym_procedure_footer] = "procedure_footer",
  [sym_object_definition] = "object_definition",
  [sym_object_header] = "object_header",
  [aux_sym__object_body] = "_object_body",
  [sym_object_footer] = "object_footer",
  [sym__deferred_object] = "_deferred_object",
  [aux_sym__statement_list] = "_statement_list",
  [sym__statement] = "_statement",
  [sym_move_statement] = "move_statement",
  [sym_unknown_command_statement] = "unknown_command_statement",
  [sym__expression] = "_expression",
  [sym__literal] = "_literal",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_unknown_command_statement_repeat1] = "unknown_command_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [aux_sym_function_header_token1] = aux_sym_function_header_token1,
  [aux_sym_function_header_token2] = aux_sym_function_header_token1,
  [aux_sym_function_footer_token1] = aux_sym_function_header_token1,
  [aux_sym_procedure_header_token1] = aux_sym_function_header_token1,
  [aux_sym_procedure_footer_token1] = aux_sym_function_header_token1,
  [aux_sym_object_header_token1] = aux_sym_function_header_token1,
  [aux_sym_object_header_token2] = aux_sym_function_header_token1,
  [aux_sym_object_header_token3] = aux_sym_function_header_token1,
  [aux_sym_object_footer_token1] = aux_sym_function_header_token1,
  [aux_sym_object_footer_token2] = aux_sym_function_header_token1,
  [aux_sym__deferred_object_token1] = aux_sym_function_header_token1,
  [aux_sym__deferred_object_token2] = aux_sym_function_header_token1,
  [aux_sym_move_statement_token1] = aux_sym_function_header_token1,
  [aux_sym_move_statement_token2] = aux_sym_function_header_token1,
  [sym_number_literal] = sym_number_literal,
  [sym_string_literal] = sym_string_literal,
  [sym__eol] = sym__eol,
  [sym_line_comment] = sym_line_comment,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_source_file] = sym_source_file,
  [sym__top_level_code] = sym__top_level_code,
  [sym_function_definition] = sym_function_definition,
  [sym_function_header] = sym_function_header,
  [aux_sym__parameter_list] = aux_sym__parameter_list,
  [sym_parameter] = sym_parameter,
  [sym__function_body] = sym__function_body,
  [sym_function_footer] = sym_function_footer,
  [sym_procedure_definition] = sym_procedure_definition,
  [sym_procedure_header] = sym_procedure_header,
  [sym__procedure_body] = sym__procedure_body,
  [sym_procedure_footer] = sym_procedure_footer,
  [sym_object_definition] = sym_object_definition,
  [sym_object_header] = sym_object_header,
  [aux_sym__object_body] = aux_sym__object_body,
  [sym_object_footer] = sym_object_footer,
  [sym__deferred_object] = sym__deferred_object,
  [aux_sym__statement_list] = aux_sym__statement_list,
  [sym__statement] = sym__statement,
  [sym_move_statement] = sym_move_statement,
  [sym_unknown_command_statement] = sym_unknown_command_statement,
  [sym__expression] = sym__expression,
  [sym__literal] = sym__literal,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_unknown_command_statement_repeat1] = aux_sym_unknown_command_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_function_header_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_function_header_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_function_footer_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_procedure_header_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_procedure_footer_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_object_header_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_object_header_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_object_header_token3] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_object_footer_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_object_footer_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__deferred_object_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__deferred_object_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_move_statement_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_move_statement_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_code] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_header] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__parameter_list] = {
    .visible = false,
    .named = false,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__function_body] = {
    .visible = false,
    .named = true,
  },
  [sym_function_footer] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure_header] = {
    .visible = true,
    .named = true,
  },
  [sym__procedure_body] = {
    .visible = false,
    .named = true,
  },
  [sym_procedure_footer] = {
    .visible = true,
    .named = true,
  },
  [sym_object_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_object_header] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__object_body] = {
    .visible = false,
    .named = false,
  },
  [sym_object_footer] = {
    .visible = true,
    .named = true,
  },
  [sym__deferred_object] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__statement_list] = {
    .visible = false,
    .named = false,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_move_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_unknown_command_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unknown_command_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_return_type = 2,
  field_type = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_return_type] = "return_type",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 1},
    {field_type, 0},
  [3] =
    {field_name, 1},
    {field_return_type, 3},
  [5] =
    {field_name, 1},
    {field_return_type, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 10,
  [12] = 9,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 27,
  [33] = 21,
  [34] = 23,
  [35] = 25,
  [36] = 29,
  [37] = 15,
  [38] = 38,
  [39] = 28,
  [40] = 30,
  [41] = 16,
  [42] = 26,
  [43] = 14,
  [44] = 22,
  [45] = 31,
  [46] = 24,
  [47] = 47,
  [48] = 48,
  [49] = 48,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 57,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 66,
  [69] = 69,
  [70] = 70,
  [71] = 69,
  [72] = 70,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 83,
  [93] = 73,
  [94] = 88,
  [95] = 86,
  [96] = 82,
  [97] = 97,
  [98] = 98,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ';') SKIP(7);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '|') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '|') ADVANCE(2);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(19);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '|') SKIP(0);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(4);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(4);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == ';') SKIP(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(6);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(7);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(8);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(9);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(10);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(11);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '|') SKIP(0);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(aux_sym_object_header_token3);
      END_STATE();
    case 3:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(16);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_object_header_token2);
      END_STATE();
    case 19:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 22:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(32);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_move_statement_token2);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(35);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__deferred_object_token2);
      END_STATE();
    case 28:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 35:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(43);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(44);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(46);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_move_statement_token1);
      END_STATE();
    case 38:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 46:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 49:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(62);
      END_STATE();
    case 54:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_object_header_token1);
      END_STATE();
    case 57:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 58:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(66);
      END_STATE();
    case 59:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 60:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 61:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 63:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 64:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 65:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_function_header_token2);
      END_STATE();
    case 67:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(75);
      END_STATE();
    case 69:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_function_header_token1);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 74:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(80);
      END_STATE();
    case 75:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(81);
      END_STATE();
    case 76:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 77:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 78:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_procedure_header_token1);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 81:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 82:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_object_footer_token1);
      END_STATE();
    case 84:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 85:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 87:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 88:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 89:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 90:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(94);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_function_footer_token1);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_object_footer_token2);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__deferred_object_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_procedure_footer_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_function_header_token1] = ACTIONS(1),
    [aux_sym_function_header_token2] = ACTIONS(1),
    [aux_sym_function_footer_token1] = ACTIONS(1),
    [aux_sym_procedure_header_token1] = ACTIONS(1),
    [aux_sym_procedure_footer_token1] = ACTIONS(1),
    [aux_sym_object_header_token1] = ACTIONS(1),
    [aux_sym_object_header_token2] = ACTIONS(1),
    [aux_sym_object_header_token3] = ACTIONS(1),
    [aux_sym_object_footer_token1] = ACTIONS(1),
    [aux_sym_object_footer_token2] = ACTIONS(1),
    [aux_sym__deferred_object_token1] = ACTIONS(1),
    [aux_sym__deferred_object_token2] = ACTIONS(1),
    [aux_sym_move_statement_token1] = ACTIONS(1),
    [aux_sym_move_statement_token2] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(90),
    [sym__top_level_code] = STATE(38),
    [sym_function_definition] = STATE(33),
    [sym_function_header] = STATE(10),
    [sym_procedure_definition] = STATE(33),
    [sym_procedure_header] = STATE(9),
    [sym_object_definition] = STATE(33),
    [sym_object_header] = STATE(2),
    [sym__deferred_object] = STATE(33),
    [sym__statement] = STATE(33),
    [sym_move_statement] = STATE(43),
    [sym_unknown_command_statement] = STATE(43),
    [sym__expression] = STATE(63),
    [sym__literal] = STATE(52),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_unknown_command_statement_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_header_token1] = ACTIONS(11),
    [aux_sym_procedure_header_token1] = ACTIONS(13),
    [aux_sym_object_header_token1] = ACTIONS(15),
    [aux_sym__deferred_object_token1] = ACTIONS(17),
    [aux_sym_move_statement_token1] = ACTIONS(19),
    [sym_number_literal] = ACTIONS(21),
    [sym_string_literal] = ACTIONS(21),
    [sym__eol] = ACTIONS(23),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [2] = {
    [sym__top_level_code] = STATE(19),
    [sym_function_definition] = STATE(21),
    [sym_function_header] = STATE(11),
    [sym_procedure_definition] = STATE(21),
    [sym_procedure_header] = STATE(12),
    [sym_object_definition] = STATE(21),
    [sym_object_header] = STATE(5),
    [aux_sym__object_body] = STATE(3),
    [sym_object_footer] = STATE(35),
    [sym__deferred_object] = STATE(21),
    [sym__statement] = STATE(21),
    [sym_move_statement] = STATE(14),
    [sym_unknown_command_statement] = STATE(14),
    [sym__expression] = STATE(63),
    [sym__literal] = STATE(52),
    [sym_comment] = STATE(2),
    [aux_sym_unknown_command_statement_repeat1] = STATE(48),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_header_token1] = ACTIONS(11),
    [aux_sym_procedure_header_token1] = ACTIONS(13),
    [aux_sym_object_header_token1] = ACTIONS(15),
    [aux_sym_object_footer_token1] = ACTIONS(25),
    [aux_sym_object_footer_token2] = ACTIONS(25),
    [aux_sym__deferred_object_token1] = ACTIONS(27),
    [aux_sym_move_statement_token1] = ACTIONS(29),
    [sym_number_literal] = ACTIONS(21),
    [sym_string_literal] = ACTIONS(21),
    [sym__eol] = ACTIONS(31),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [3] = {
    [sym__top_level_code] = STATE(19),
    [sym_function_definition] = STATE(21),
    [sym_function_header] = STATE(11),
    [sym_procedure_definition] = STATE(21),
    [sym_procedure_header] = STATE(12),
    [sym_object_definition] = STATE(21),
    [sym_object_header] = STATE(5),
    [aux_sym__object_body] = STATE(6),
    [sym_object_footer] = STATE(36),
    [sym__deferred_object] = STATE(21),
    [sym__statement] = STATE(21),
    [sym_move_statement] = STATE(14),
    [sym_unknown_command_statement] = STATE(14),
    [sym__expression] = STATE(63),
    [sym__literal] = STATE(52),
    [sym_comment] = STATE(3),
    [aux_sym_unknown_command_statement_repeat1] = STATE(48),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_header_token1] = ACTIONS(11),
    [aux_sym_procedure_header_token1] = ACTIONS(13),
    [aux_sym_object_header_token1] = ACTIONS(15),
    [aux_sym_object_footer_token1] = ACTIONS(25),
    [aux_sym_object_footer_token2] = ACTIONS(25),
    [aux_sym__deferred_object_token1] = ACTIONS(27),
    [aux_sym_move_statement_token1] = ACTIONS(29),
    [sym_number_literal] = ACTIONS(21),
    [sym_string_literal] = ACTIONS(21),
    [sym__eol] = ACTIONS(31),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [4] = {
    [sym__top_level_code] = STATE(19),
    [sym_function_definition] = STATE(21),
    [sym_function_header] = STATE(11),
    [sym_procedure_definition] = STATE(21),
    [sym_procedure_header] = STATE(12),
    [sym_object_definition] = STATE(21),
    [sym_object_header] = STATE(5),
    [aux_sym__object_body] = STATE(6),
    [sym_object_footer] = STATE(29),
    [sym__deferred_object] = STATE(21),
    [sym__statement] = STATE(21),
    [sym_move_statement] = STATE(14),
    [sym_unknown_command_statement] = STATE(14),
    [sym__expression] = STATE(63),
    [sym__literal] = STATE(52),
    [sym_comment] = STATE(4),
    [aux_sym_unknown_command_statement_repeat1] = STATE(48),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_header_token1] = ACTIONS(11),
    [aux_sym_procedure_header_token1] = ACTIONS(13),
    [aux_sym_object_header_token1] = ACTIONS(15),
    [aux_sym_object_footer_token1] = ACTIONS(33),
    [aux_sym_object_footer_token2] = ACTIONS(33),
    [aux_sym__deferred_object_token1] = ACTIONS(27),
    [aux_sym_move_statement_token1] = ACTIONS(29),
    [sym_number_literal] = ACTIONS(21),
    [sym_string_literal] = ACTIONS(21),
    [sym__eol] = ACTIONS(31),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [5] = {
    [sym__top_level_code] = STATE(19),
    [sym_function_definition] = STATE(21),
    [sym_function_header] = STATE(11),
    [sym_procedure_definition] = STATE(21),
    [sym_procedure_header] = STATE(12),
    [sym_object_definition] = STATE(21),
    [sym_object_header] = STATE(5),
    [aux_sym__object_body] = STATE(4),
    [sym_object_footer] = STATE(25),
    [sym__deferred_object] = STATE(21),
    [sym__statement] = STATE(21),
    [sym_move_statement] = STATE(14),
    [sym_unknown_command_statement] = STATE(14),
    [sym__expression] = STATE(63),
    [sym__literal] = STATE(52),
    [sym_comment] = STATE(5),
    [aux_sym_unknown_command_statement_repeat1] = STATE(48),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_header_token1] = ACTIONS(11),
    [aux_sym_procedure_header_token1] = ACTIONS(13),
    [aux_sym_object_header_token1] = ACTIONS(15),
    [aux_sym_object_footer_token1] = ACTIONS(33),
    [aux_sym_object_footer_token2] = ACTIONS(33),
    [aux_sym__deferred_object_token1] = ACTIONS(27),
    [aux_sym_move_statement_token1] = ACTIONS(29),
    [sym_number_literal] = ACTIONS(21),
    [sym_string_literal] = ACTIONS(21),
    [sym__eol] = ACTIONS(31),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [6] = {
    [sym__top_level_code] = STATE(19),
    [sym_function_definition] = STATE(21),
    [sym_function_header] = STATE(11),
    [sym_procedure_definition] = STATE(21),
    [sym_procedure_header] = STATE(12),
    [sym_object_definition] = STATE(21),
    [sym_object_header] = STATE(5),
    [aux_sym__object_body] = STATE(6),
    [sym__deferred_object] = STATE(21),
    [sym__statement] = STATE(21),
    [sym_move_statement] = STATE(14),
    [sym_unknown_command_statement] = STATE(14),
    [sym__expression] = STATE(63),
    [sym__literal] = STATE(52),
    [sym_comment] = STATE(6),
    [aux_sym_unknown_command_statement_repeat1] = STATE(48),
    [sym_identifier] = ACTIONS(35),
    [aux_sym_function_header_token1] = ACTIONS(38),
    [aux_sym_procedure_header_token1] = ACTIONS(41),
    [aux_sym_object_header_token1] = ACTIONS(44),
    [aux_sym_object_footer_token1] = ACTIONS(47),
    [aux_sym_object_footer_token2] = ACTIONS(47),
    [aux_sym__deferred_object_token1] = ACTIONS(49),
    [aux_sym_move_statement_token1] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(55),
    [sym_string_literal] = ACTIONS(55),
    [sym__eol] = ACTIONS(58),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [7] = {
    [sym__top_level_code] = STATE(38),
    [sym_function_definition] = STATE(33),
    [sym_function_header] = STATE(10),
    [sym_procedure_definition] = STATE(33),
    [sym_procedure_header] = STATE(9),
    [sym_object_definition] = STATE(33),
    [sym_object_header] = STATE(2),
    [sym__deferred_object] = STATE(33),
    [sym__statement] = STATE(33),
    [sym_move_statement] = STATE(43),
    [sym_unknown_command_statement] = STATE(43),
    [sym__expression] = STATE(63),
    [sym__literal] = STATE(52),
    [sym_comment] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_unknown_command_statement_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_header_token1] = ACTIONS(11),
    [aux_sym_procedure_header_token1] = ACTIONS(13),
    [aux_sym_object_header_token1] = ACTIONS(15),
    [aux_sym__deferred_object_token1] = ACTIONS(17),
    [aux_sym_move_statement_token1] = ACTIONS(19),
    [sym_number_literal] = ACTIONS(21),
    [sym_string_literal] = ACTIONS(21),
    [sym__eol] = ACTIONS(23),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [8] = {
    [sym__top_level_code] = STATE(38),
    [sym_function_definition] = STATE(33),
    [sym_function_header] = STATE(10),
    [sym_procedure_definition] = STATE(33),
    [sym_procedure_header] = STATE(9),
    [sym_object_definition] = STATE(33),
    [sym_object_header] = STATE(2),
    [sym__deferred_object] = STATE(33),
    [sym__statement] = STATE(33),
    [sym_move_statement] = STATE(43),
    [sym_unknown_command_statement] = STATE(43),
    [sym__expression] = STATE(63),
    [sym__literal] = STATE(52),
    [sym_comment] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_unknown_command_statement_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_identifier] = ACTIONS(65),
    [aux_sym_function_header_token1] = ACTIONS(68),
    [aux_sym_procedure_header_token1] = ACTIONS(71),
    [aux_sym_object_header_token1] = ACTIONS(74),
    [aux_sym__deferred_object_token1] = ACTIONS(77),
    [aux_sym_move_statement_token1] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(83),
    [sym_string_literal] = ACTIONS(83),
    [sym__eol] = ACTIONS(86),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(29), 1,
      aux_sym_move_statement_token1,
    ACTIONS(89), 1,
      aux_sym_procedure_footer_token1,
    STATE(9), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym__statement_list,
    STATE(42), 1,
      sym_procedure_footer,
    STATE(48), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(50), 1,
      sym__statement,
    STATE(52), 1,
      sym__literal,
    STATE(63), 1,
      sym__expression,
    STATE(72), 1,
      sym__procedure_body,
    ACTIONS(21), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(14), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [48] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(29), 1,
      aux_sym_move_statement_token1,
    ACTIONS(91), 1,
      aux_sym_function_footer_token1,
    STATE(10), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym__statement_list,
    STATE(46), 1,
      sym_function_footer,
    STATE(48), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(50), 1,
      sym__statement,
    STATE(52), 1,
      sym__literal,
    STATE(63), 1,
      sym__expression,
    STATE(71), 1,
      sym__function_body,
    ACTIONS(21), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(14), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [96] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(29), 1,
      aux_sym_move_statement_token1,
    ACTIONS(93), 1,
      aux_sym_function_footer_token1,
    STATE(11), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym__statement_list,
    STATE(24), 1,
      sym_function_footer,
    STATE(48), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(50), 1,
      sym__statement,
    STATE(52), 1,
      sym__literal,
    STATE(63), 1,
      sym__expression,
    STATE(69), 1,
      sym__function_body,
    ACTIONS(21), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(14), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [144] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(29), 1,
      aux_sym_move_statement_token1,
    ACTIONS(95), 1,
      aux_sym_procedure_footer_token1,
    STATE(12), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym__statement_list,
    STATE(26), 1,
      sym_procedure_footer,
    STATE(48), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(50), 1,
      sym__statement,
    STATE(52), 1,
      sym__literal,
    STATE(63), 1,
      sym__expression,
    STATE(70), 1,
      sym__procedure_body,
    ACTIONS(21), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(14), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [192] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(102), 1,
      aux_sym_move_statement_token1,
    STATE(48), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(50), 1,
      sym__statement,
    STATE(52), 1,
      sym__literal,
    STATE(63), 1,
      sym__expression,
    ACTIONS(100), 2,
      aux_sym_function_footer_token1,
      aux_sym_procedure_footer_token1,
    ACTIONS(105), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(13), 2,
      aux_sym__statement_list,
      sym_comment,
    STATE(14), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [233] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(14), 1,
      sym_comment,
    ACTIONS(110), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(108), 10,
      aux_sym_function_header_token1,
      aux_sym_function_footer_token1,
      aux_sym_procedure_header_token1,
      aux_sym_procedure_footer_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [260] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 1,
      sym_comment,
    ACTIONS(114), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(112), 10,
      aux_sym_function_header_token1,
      aux_sym_function_footer_token1,
      aux_sym_procedure_header_token1,
      aux_sym_procedure_footer_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [287] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      sym_comment,
    ACTIONS(118), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(116), 10,
      aux_sym_function_header_token1,
      aux_sym_function_footer_token1,
      aux_sym_procedure_header_token1,
      aux_sym_procedure_footer_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [314] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(29), 1,
      aux_sym_move_statement_token1,
    ACTIONS(120), 1,
      aux_sym_procedure_footer_token1,
    STATE(13), 1,
      aux_sym__statement_list,
    STATE(17), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(50), 1,
      sym__statement,
    STATE(52), 1,
      sym__literal,
    STATE(63), 1,
      sym__expression,
    ACTIONS(21), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(14), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [356] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(29), 1,
      aux_sym_move_statement_token1,
    ACTIONS(122), 1,
      aux_sym_function_footer_token1,
    STATE(13), 1,
      aux_sym__statement_list,
    STATE(18), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(50), 1,
      sym__statement,
    STATE(52), 1,
      sym__literal,
    STATE(63), 1,
      sym__expression,
    ACTIONS(21), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(14), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [398] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 1,
      sym_comment,
    ACTIONS(126), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(124), 8,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [423] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 1,
      sym_comment,
    ACTIONS(130), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(128), 8,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [448] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(21), 1,
      sym_comment,
    ACTIONS(134), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(132), 8,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [473] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 1,
      sym_comment,
    ACTIONS(138), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(136), 8,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [498] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
    ACTIONS(142), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(140), 8,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [523] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 1,
      sym_comment,
    ACTIONS(146), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(144), 8,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [548] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_comment,
    ACTIONS(150), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(148), 8,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [573] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(26), 1,
      sym_comment,
    ACTIONS(154), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(152), 8,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [598] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 1,
      sym_comment,
    ACTIONS(158), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(156), 8,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [623] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 1,
      sym_comment,
    ACTIONS(162), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(160), 8,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [648] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym_comment,
    ACTIONS(166), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(164), 8,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [673] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_comment,
    ACTIONS(170), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(168), 8,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [698] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_comment,
    ACTIONS(174), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(172), 8,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [723] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
      sym_comment,
    ACTIONS(158), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(156), 6,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [747] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 1,
      sym_comment,
    ACTIONS(134), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(132), 6,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [771] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 1,
      sym_comment,
    ACTIONS(142), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(140), 6,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [795] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
      sym_comment,
    ACTIONS(150), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(148), 6,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [819] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 1,
      sym_comment,
    ACTIONS(166), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(164), 6,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [843] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 1,
      sym_comment,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(112), 6,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [867] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 1,
      sym_comment,
    ACTIONS(176), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(178), 6,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [891] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(39), 1,
      sym_comment,
    ACTIONS(162), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(160), 6,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [915] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 1,
      sym_comment,
    ACTIONS(170), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(168), 6,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [939] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 1,
      sym_comment,
    ACTIONS(118), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(116), 6,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [963] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 1,
      sym_comment,
    ACTIONS(154), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(152), 6,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [987] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 1,
      sym_comment,
    ACTIONS(110), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(108), 6,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [1011] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(44), 1,
      sym_comment,
    ACTIONS(138), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(136), 6,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [1035] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 1,
      sym_comment,
    ACTIONS(174), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(172), 6,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [1059] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(46), 1,
      sym_comment,
    ACTIONS(146), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(144), 6,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym__deferred_object_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [1083] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(186), 1,
      sym__eol,
    STATE(52), 1,
      sym__literal,
    STATE(63), 1,
      sym__expression,
    ACTIONS(183), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(47), 2,
      sym_comment,
      aux_sym_unknown_command_statement_repeat1,
  [1110] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(190), 1,
      sym__eol,
    STATE(47), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(48), 1,
      sym_comment,
    STATE(52), 1,
      sym__literal,
    STATE(63), 1,
      sym__expression,
    ACTIONS(21), 2,
      sym_number_literal,
      sym_string_literal,
  [1139] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(192), 1,
      sym__eol,
    STATE(47), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(49), 1,
      sym_comment,
    STATE(52), 1,
      sym__literal,
    STATE(63), 1,
      sym__expression,
    ACTIONS(21), 2,
      sym_number_literal,
      sym_string_literal,
  [1168] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_comment,
    ACTIONS(196), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(194), 4,
      aux_sym_function_footer_token1,
      aux_sym_procedure_footer_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [1188] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 1,
      sym_comment,
    ACTIONS(200), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(198), 3,
      aux_sym_function_footer_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [1207] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(52), 1,
      sym_comment,
    ACTIONS(202), 2,
      aux_sym_move_statement_token2,
      sym_identifier,
    ACTIONS(204), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
  [1226] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(53), 1,
      sym_comment,
    ACTIONS(206), 2,
      aux_sym_move_statement_token2,
      sym_identifier,
    ACTIONS(208), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
  [1245] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(213), 1,
      aux_sym_function_header_token2,
    ACTIONS(215), 1,
      sym__eol,
    STATE(65), 1,
      sym_parameter,
    STATE(54), 2,
      aux_sym__parameter_list,
      sym_comment,
  [1268] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(55), 1,
      sym_comment,
    ACTIONS(219), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(217), 3,
      aux_sym_procedure_footer_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [1287] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      sym_comment,
    ACTIONS(223), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(221), 3,
      aux_sym_function_footer_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [1306] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      sym_identifier,
    STATE(52), 1,
      sym__literal,
    STATE(57), 1,
      sym_comment,
    STATE(82), 1,
      sym__expression,
    ACTIONS(21), 2,
      sym_number_literal,
      sym_string_literal,
  [1329] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      sym_identifier,
    STATE(52), 1,
      sym__literal,
    STATE(58), 1,
      sym_comment,
    STATE(96), 1,
      sym__expression,
    ACTIONS(21), 2,
      sym_number_literal,
      sym_string_literal,
  [1352] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(59), 1,
      sym_comment,
    ACTIONS(227), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(225), 3,
      aux_sym_procedure_footer_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [1371] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      aux_sym_function_header_token2,
    STATE(54), 1,
      aux_sym__parameter_list,
    STATE(60), 1,
      sym_comment,
    STATE(65), 1,
      sym_parameter,
  [1393] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(233), 1,
      aux_sym_function_header_token2,
    STATE(60), 1,
      aux_sym__parameter_list,
    STATE(61), 1,
      sym_comment,
    STATE(65), 1,
      sym_parameter,
  [1415] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(237), 1,
      sym__eol,
    STATE(62), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym__parameter_list,
    STATE(65), 1,
      sym_parameter,
  [1437] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(63), 1,
      sym_comment,
    ACTIONS(239), 4,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
  [1453] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(241), 1,
      sym__eol,
    STATE(54), 1,
      aux_sym__parameter_list,
    STATE(64), 1,
      sym_comment,
    STATE(65), 1,
      sym_parameter,
  [1475] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(245), 1,
      sym__eol,
    STATE(65), 1,
      sym_comment,
    ACTIONS(243), 2,
      aux_sym_function_header_token2,
      sym_identifier,
  [1492] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      aux_sym_object_header_token1,
    STATE(5), 1,
      sym_object_header,
    STATE(30), 1,
      sym_object_definition,
    STATE(66), 1,
      sym_comment,
  [1511] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(251), 1,
      sym__eol,
    STATE(67), 1,
      sym_comment,
    ACTIONS(249), 2,
      aux_sym_function_header_token2,
      sym_identifier,
  [1528] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      aux_sym_object_header_token1,
    STATE(2), 1,
      sym_object_header,
    STATE(40), 1,
      sym_object_definition,
    STATE(68), 1,
      sym_comment,
  [1547] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(253), 1,
      aux_sym_function_footer_token1,
    STATE(27), 1,
      sym_function_footer,
    STATE(69), 1,
      sym_comment,
  [1563] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(255), 1,
      aux_sym_procedure_footer_token1,
    STATE(28), 1,
      sym_procedure_footer,
    STATE(70), 1,
      sym_comment,
  [1579] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(257), 1,
      aux_sym_function_footer_token1,
    STATE(32), 1,
      sym_function_footer,
    STATE(71), 1,
      sym_comment,
  [1595] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(259), 1,
      aux_sym_procedure_footer_token1,
    STATE(39), 1,
      sym_procedure_footer,
    STATE(72), 1,
      sym_comment,
  [1611] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(261), 1,
      aux_sym__deferred_object_token2,
    STATE(73), 1,
      sym_comment,
  [1624] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(263), 1,
      sym__eol,
    STATE(74), 1,
      sym_comment,
  [1637] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(265), 1,
      sym_identifier,
    STATE(75), 1,
      sym_comment,
  [1650] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(76), 1,
      sym_comment,
  [1663] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(269), 1,
      sym_identifier,
    STATE(77), 1,
      sym_comment,
  [1676] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(271), 1,
      anon_sym_SLASH,
    STATE(78), 1,
      sym_comment,
  [1689] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(273), 1,
      sym_identifier,
    STATE(79), 1,
      sym_comment,
  [1702] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(275), 1,
      sym__eol,
    STATE(80), 1,
      sym_comment,
  [1715] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(277), 1,
      aux_sym_object_header_token2,
    STATE(81), 1,
      sym_comment,
  [1728] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(279), 1,
      aux_sym_move_statement_token2,
    STATE(82), 1,
      sym_comment,
  [1741] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(281), 1,
      sym__eol,
    STATE(83), 1,
      sym_comment,
  [1754] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(283), 1,
      sym_identifier,
    STATE(84), 1,
      sym_comment,
  [1767] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(285), 1,
      aux_sym_object_header_token3,
    STATE(85), 1,
      sym_comment,
  [1780] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(287), 1,
      sym_identifier,
    STATE(86), 1,
      sym_comment,
  [1793] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(289), 1,
      sym_identifier,
    STATE(87), 1,
      sym_comment,
  [1806] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(291), 1,
      sym_identifier,
    STATE(88), 1,
      sym_comment,
  [1819] = 4,
    ACTIONS(293), 1,
      sym_line_comment,
    ACTIONS(295), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(297), 1,
      aux_sym_comment_token1,
    STATE(89), 1,
      sym_comment,
  [1832] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    STATE(90), 1,
      sym_comment,
  [1845] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(301), 1,
      sym_identifier,
    STATE(91), 1,
      sym_comment,
  [1858] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(303), 1,
      sym__eol,
    STATE(92), 1,
      sym_comment,
  [1871] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(305), 1,
      aux_sym__deferred_object_token2,
    STATE(93), 1,
      sym_comment,
  [1884] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(307), 1,
      sym_identifier,
    STATE(94), 1,
      sym_comment,
  [1897] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(309), 1,
      sym_identifier,
    STATE(95), 1,
      sym_comment,
  [1910] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(311), 1,
      aux_sym_move_statement_token2,
    STATE(96), 1,
      sym_comment,
  [1923] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(313), 1,
      sym__eol,
    STATE(97), 1,
      sym_comment,
  [1936] = 1,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 48,
  [SMALL_STATE(11)] = 96,
  [SMALL_STATE(12)] = 144,
  [SMALL_STATE(13)] = 192,
  [SMALL_STATE(14)] = 233,
  [SMALL_STATE(15)] = 260,
  [SMALL_STATE(16)] = 287,
  [SMALL_STATE(17)] = 314,
  [SMALL_STATE(18)] = 356,
  [SMALL_STATE(19)] = 398,
  [SMALL_STATE(20)] = 423,
  [SMALL_STATE(21)] = 448,
  [SMALL_STATE(22)] = 473,
  [SMALL_STATE(23)] = 498,
  [SMALL_STATE(24)] = 523,
  [SMALL_STATE(25)] = 548,
  [SMALL_STATE(26)] = 573,
  [SMALL_STATE(27)] = 598,
  [SMALL_STATE(28)] = 623,
  [SMALL_STATE(29)] = 648,
  [SMALL_STATE(30)] = 673,
  [SMALL_STATE(31)] = 698,
  [SMALL_STATE(32)] = 723,
  [SMALL_STATE(33)] = 747,
  [SMALL_STATE(34)] = 771,
  [SMALL_STATE(35)] = 795,
  [SMALL_STATE(36)] = 819,
  [SMALL_STATE(37)] = 843,
  [SMALL_STATE(38)] = 867,
  [SMALL_STATE(39)] = 891,
  [SMALL_STATE(40)] = 915,
  [SMALL_STATE(41)] = 939,
  [SMALL_STATE(42)] = 963,
  [SMALL_STATE(43)] = 987,
  [SMALL_STATE(44)] = 1011,
  [SMALL_STATE(45)] = 1035,
  [SMALL_STATE(46)] = 1059,
  [SMALL_STATE(47)] = 1083,
  [SMALL_STATE(48)] = 1110,
  [SMALL_STATE(49)] = 1139,
  [SMALL_STATE(50)] = 1168,
  [SMALL_STATE(51)] = 1188,
  [SMALL_STATE(52)] = 1207,
  [SMALL_STATE(53)] = 1226,
  [SMALL_STATE(54)] = 1245,
  [SMALL_STATE(55)] = 1268,
  [SMALL_STATE(56)] = 1287,
  [SMALL_STATE(57)] = 1306,
  [SMALL_STATE(58)] = 1329,
  [SMALL_STATE(59)] = 1352,
  [SMALL_STATE(60)] = 1371,
  [SMALL_STATE(61)] = 1393,
  [SMALL_STATE(62)] = 1415,
  [SMALL_STATE(63)] = 1437,
  [SMALL_STATE(64)] = 1453,
  [SMALL_STATE(65)] = 1475,
  [SMALL_STATE(66)] = 1492,
  [SMALL_STATE(67)] = 1511,
  [SMALL_STATE(68)] = 1528,
  [SMALL_STATE(69)] = 1547,
  [SMALL_STATE(70)] = 1563,
  [SMALL_STATE(71)] = 1579,
  [SMALL_STATE(72)] = 1595,
  [SMALL_STATE(73)] = 1611,
  [SMALL_STATE(74)] = 1624,
  [SMALL_STATE(75)] = 1637,
  [SMALL_STATE(76)] = 1650,
  [SMALL_STATE(77)] = 1663,
  [SMALL_STATE(78)] = 1676,
  [SMALL_STATE(79)] = 1689,
  [SMALL_STATE(80)] = 1702,
  [SMALL_STATE(81)] = 1715,
  [SMALL_STATE(82)] = 1728,
  [SMALL_STATE(83)] = 1741,
  [SMALL_STATE(84)] = 1754,
  [SMALL_STATE(85)] = 1767,
  [SMALL_STATE(86)] = 1780,
  [SMALL_STATE(87)] = 1793,
  [SMALL_STATE(88)] = 1806,
  [SMALL_STATE(89)] = 1819,
  [SMALL_STATE(90)] = 1832,
  [SMALL_STATE(91)] = 1845,
  [SMALL_STATE(92)] = 1858,
  [SMALL_STATE(93)] = 1871,
  [SMALL_STATE(94)] = 1884,
  [SMALL_STATE(95)] = 1897,
  [SMALL_STATE(96)] = 1910,
  [SMALL_STATE(97)] = 1923,
  [SMALL_STATE(98)] = 1936,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_body, 2, 0, 0), SHIFT_REPEAT(52),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_body, 2, 0, 0), SHIFT_REPEAT(77),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_body, 2, 0, 0), SHIFT_REPEAT(84),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_body, 2, 0, 0), SHIFT_REPEAT(75),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__object_body, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_body, 2, 0, 0), SHIFT_REPEAT(95),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_body, 2, 0, 0), SHIFT_REPEAT(58),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_body, 2, 0, 0), SHIFT_REPEAT(53),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_body, 2, 0, 0), SHIFT_REPEAT(21),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list, 2, 0, 0), SHIFT_REPEAT(52),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list, 2, 0, 0),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list, 2, 0, 0), SHIFT_REPEAT(58),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list, 2, 0, 0), SHIFT_REPEAT(53),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown_command_statement, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown_command_statement, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_move_statement, 5, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move_statement, 5, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__procedure_body, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_body, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__object_body, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_body, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_header, 6, 0, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_header, 6, 0, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__top_level_code, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_code, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_footer, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_footer, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_footer, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_footer, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__deferred_object, 4, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__deferred_object, 4, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_footer, 1, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_footer, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unknown_command_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unknown_command_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unknown_command_statement_repeat1, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list, 1, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list, 1, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_header, 6, 0, 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 6, 0, 4),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, 0, 0),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__parameter_list, 2, 0, 0), SHIFT_REPEAT(91),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__parameter_list, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_list, 2, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_header, 4, 0, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_header, 4, 0, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_header, 5, 0, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 5, 0, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_header, 3, 0, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_header, 3, 0, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unknown_command_statement_repeat1, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__parameter_list, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_list, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 2, 0, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, 0, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [299] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_dataflex(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
