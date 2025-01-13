#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
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
  aux_sym_move_statement_token1 = 12,
  aux_sym_move_statement_token2 = 13,
  aux_sym_unknown_command_statement_token1 = 14,
  sym_number_literal = 15,
  sym_string_literal = 16,
  sym__eol = 17,
  sym_line_comment = 18,
  anon_sym_SLASH_STAR = 19,
  aux_sym_comment_token1 = 20,
  anon_sym_SLASH = 21,
  sym_source_file = 22,
  sym__top_level_code = 23,
  sym_function_definition = 24,
  sym_function_header = 25,
  aux_sym__parameter_list = 26,
  sym_parameter = 27,
  sym__function_body = 28,
  sym_function_footer = 29,
  sym_procedure_definition = 30,
  sym_procedure_header = 31,
  sym__procedure_body = 32,
  sym_procedure_footer = 33,
  sym_object_definition = 34,
  sym_object_header = 35,
  aux_sym__object_body = 36,
  sym_object_footer = 37,
  aux_sym__statement_list = 38,
  sym__statement = 39,
  sym_move_statement = 40,
  sym_unknown_command_statement = 41,
  sym__expression = 42,
  sym__literal = 43,
  sym_comment = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_unknown_command_statement_repeat1 = 46,
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
  [aux_sym_move_statement_token1] = "keyword",
  [aux_sym_move_statement_token2] = "keyword",
  [aux_sym_unknown_command_statement_token1] = "unknown_command_statement_token1",
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
  [aux_sym_move_statement_token1] = aux_sym_function_header_token1,
  [aux_sym_move_statement_token2] = aux_sym_function_header_token1,
  [aux_sym_unknown_command_statement_token1] = aux_sym_unknown_command_statement_token1,
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
  [aux_sym_move_statement_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_move_statement_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_unknown_command_statement_token1] = {
    .visible = false,
    .named = false,
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
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
  [32] = 30,
  [33] = 33,
  [34] = 27,
  [35] = 26,
  [36] = 31,
  [37] = 17,
  [38] = 18,
  [39] = 25,
  [40] = 16,
  [41] = 21,
  [42] = 22,
  [43] = 28,
  [44] = 23,
  [45] = 15,
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
  [57] = 53,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 67,
  [69] = 69,
  [70] = 69,
  [71] = 71,
  [72] = 72,
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
  [89] = 78,
  [90] = 75,
  [91] = 87,
  [92] = 80,
  [93] = 93,
  [94] = 94,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == '|') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_unknown_command_statement_token1);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(3);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(3);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(15);
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
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(4);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(5);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(6);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(7);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(8);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(9);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(10);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(aux_sym_object_header_token3);
      END_STATE();
    case 2:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_object_header_token2);
      END_STATE();
    case 15:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_move_statement_token2);
      END_STATE();
    case 20:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(35);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(36);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(38);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_move_statement_token1);
      END_STATE();
    case 31:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 35:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 38:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 39:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(47);
      END_STATE();
    case 40:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(52);
      END_STATE();
    case 45:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 46:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_object_header_token1);
      END_STATE();
    case 48:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(56);
      END_STATE();
    case 50:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 51:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 53:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_function_header_token2);
      END_STATE();
    case 57:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(63);
      END_STATE();
    case 58:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 59:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_function_header_token1);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 63:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 65:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 66:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_procedure_header_token1);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 69:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_object_footer_token1);
      END_STATE();
    case 71:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 72:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 73:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 74:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 75:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_function_footer_token1);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_object_footer_token2);
      END_STATE();
    case 79:
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
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 2},
  [94] = {(TSStateId)(-1)},
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
    [aux_sym_move_statement_token1] = ACTIONS(1),
    [aux_sym_move_statement_token2] = ACTIONS(1),
    [aux_sym_unknown_command_statement_token1] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(76),
    [sym__top_level_code] = STATE(33),
    [sym_function_definition] = STATE(42),
    [sym_function_header] = STATE(11),
    [sym_procedure_definition] = STATE(42),
    [sym_procedure_header] = STATE(9),
    [sym_object_definition] = STATE(42),
    [sym_object_header] = STATE(4),
    [sym__statement] = STATE(42),
    [sym_move_statement] = STATE(45),
    [sym_unknown_command_statement] = STATE(45),
    [sym__expression] = STATE(58),
    [sym__literal] = STATE(50),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_unknown_command_statement_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_header_token1] = ACTIONS(11),
    [aux_sym_procedure_header_token1] = ACTIONS(13),
    [aux_sym_object_header_token1] = ACTIONS(15),
    [aux_sym_move_statement_token1] = ACTIONS(17),
    [sym_number_literal] = ACTIONS(19),
    [sym_string_literal] = ACTIONS(19),
    [sym__eol] = ACTIONS(21),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [2] = {
    [sym__top_level_code] = STATE(29),
    [sym_function_definition] = STATE(22),
    [sym_function_header] = STATE(10),
    [sym_procedure_definition] = STATE(22),
    [sym_procedure_header] = STATE(12),
    [sym_object_definition] = STATE(22),
    [sym_object_header] = STATE(5),
    [aux_sym__object_body] = STATE(6),
    [sym_object_footer] = STATE(36),
    [sym__statement] = STATE(22),
    [sym_move_statement] = STATE(15),
    [sym_unknown_command_statement] = STATE(15),
    [sym__expression] = STATE(58),
    [sym__literal] = STATE(50),
    [sym_comment] = STATE(2),
    [aux_sym_unknown_command_statement_repeat1] = STATE(49),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_header_token1] = ACTIONS(11),
    [aux_sym_procedure_header_token1] = ACTIONS(13),
    [aux_sym_object_header_token1] = ACTIONS(15),
    [aux_sym_object_footer_token1] = ACTIONS(23),
    [aux_sym_object_footer_token2] = ACTIONS(23),
    [aux_sym_move_statement_token1] = ACTIONS(25),
    [sym_number_literal] = ACTIONS(19),
    [sym_string_literal] = ACTIONS(19),
    [sym__eol] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [3] = {
    [sym__top_level_code] = STATE(29),
    [sym_function_definition] = STATE(22),
    [sym_function_header] = STATE(10),
    [sym_procedure_definition] = STATE(22),
    [sym_procedure_header] = STATE(12),
    [sym_object_definition] = STATE(22),
    [sym_object_header] = STATE(5),
    [aux_sym__object_body] = STATE(6),
    [sym_object_footer] = STATE(31),
    [sym__statement] = STATE(22),
    [sym_move_statement] = STATE(15),
    [sym_unknown_command_statement] = STATE(15),
    [sym__expression] = STATE(58),
    [sym__literal] = STATE(50),
    [sym_comment] = STATE(3),
    [aux_sym_unknown_command_statement_repeat1] = STATE(49),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_header_token1] = ACTIONS(11),
    [aux_sym_procedure_header_token1] = ACTIONS(13),
    [aux_sym_object_header_token1] = ACTIONS(15),
    [aux_sym_object_footer_token1] = ACTIONS(29),
    [aux_sym_object_footer_token2] = ACTIONS(29),
    [aux_sym_move_statement_token1] = ACTIONS(25),
    [sym_number_literal] = ACTIONS(19),
    [sym_string_literal] = ACTIONS(19),
    [sym__eol] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [4] = {
    [sym__top_level_code] = STATE(29),
    [sym_function_definition] = STATE(22),
    [sym_function_header] = STATE(10),
    [sym_procedure_definition] = STATE(22),
    [sym_procedure_header] = STATE(12),
    [sym_object_definition] = STATE(22),
    [sym_object_header] = STATE(5),
    [aux_sym__object_body] = STATE(2),
    [sym_object_footer] = STATE(43),
    [sym__statement] = STATE(22),
    [sym_move_statement] = STATE(15),
    [sym_unknown_command_statement] = STATE(15),
    [sym__expression] = STATE(58),
    [sym__literal] = STATE(50),
    [sym_comment] = STATE(4),
    [aux_sym_unknown_command_statement_repeat1] = STATE(49),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_header_token1] = ACTIONS(11),
    [aux_sym_procedure_header_token1] = ACTIONS(13),
    [aux_sym_object_header_token1] = ACTIONS(15),
    [aux_sym_object_footer_token1] = ACTIONS(23),
    [aux_sym_object_footer_token2] = ACTIONS(23),
    [aux_sym_move_statement_token1] = ACTIONS(25),
    [sym_number_literal] = ACTIONS(19),
    [sym_string_literal] = ACTIONS(19),
    [sym__eol] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [5] = {
    [sym__top_level_code] = STATE(29),
    [sym_function_definition] = STATE(22),
    [sym_function_header] = STATE(10),
    [sym_procedure_definition] = STATE(22),
    [sym_procedure_header] = STATE(12),
    [sym_object_definition] = STATE(22),
    [sym_object_header] = STATE(5),
    [aux_sym__object_body] = STATE(3),
    [sym_object_footer] = STATE(28),
    [sym__statement] = STATE(22),
    [sym_move_statement] = STATE(15),
    [sym_unknown_command_statement] = STATE(15),
    [sym__expression] = STATE(58),
    [sym__literal] = STATE(50),
    [sym_comment] = STATE(5),
    [aux_sym_unknown_command_statement_repeat1] = STATE(49),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_header_token1] = ACTIONS(11),
    [aux_sym_procedure_header_token1] = ACTIONS(13),
    [aux_sym_object_header_token1] = ACTIONS(15),
    [aux_sym_object_footer_token1] = ACTIONS(29),
    [aux_sym_object_footer_token2] = ACTIONS(29),
    [aux_sym_move_statement_token1] = ACTIONS(25),
    [sym_number_literal] = ACTIONS(19),
    [sym_string_literal] = ACTIONS(19),
    [sym__eol] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [6] = {
    [sym__top_level_code] = STATE(29),
    [sym_function_definition] = STATE(22),
    [sym_function_header] = STATE(10),
    [sym_procedure_definition] = STATE(22),
    [sym_procedure_header] = STATE(12),
    [sym_object_definition] = STATE(22),
    [sym_object_header] = STATE(5),
    [aux_sym__object_body] = STATE(6),
    [sym__statement] = STATE(22),
    [sym_move_statement] = STATE(15),
    [sym_unknown_command_statement] = STATE(15),
    [sym__expression] = STATE(58),
    [sym__literal] = STATE(50),
    [sym_comment] = STATE(6),
    [aux_sym_unknown_command_statement_repeat1] = STATE(49),
    [sym_identifier] = ACTIONS(31),
    [aux_sym_function_header_token1] = ACTIONS(34),
    [aux_sym_procedure_header_token1] = ACTIONS(37),
    [aux_sym_object_header_token1] = ACTIONS(40),
    [aux_sym_object_footer_token1] = ACTIONS(43),
    [aux_sym_object_footer_token2] = ACTIONS(43),
    [aux_sym_move_statement_token1] = ACTIONS(45),
    [sym_number_literal] = ACTIONS(48),
    [sym_string_literal] = ACTIONS(48),
    [sym__eol] = ACTIONS(51),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [7] = {
    [sym__top_level_code] = STATE(33),
    [sym_function_definition] = STATE(42),
    [sym_function_header] = STATE(11),
    [sym_procedure_definition] = STATE(42),
    [sym_procedure_header] = STATE(9),
    [sym_object_definition] = STATE(42),
    [sym_object_header] = STATE(4),
    [sym__statement] = STATE(42),
    [sym_move_statement] = STATE(45),
    [sym_unknown_command_statement] = STATE(45),
    [sym__expression] = STATE(58),
    [sym__literal] = STATE(50),
    [sym_comment] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_unknown_command_statement_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_identifier] = ACTIONS(56),
    [aux_sym_function_header_token1] = ACTIONS(59),
    [aux_sym_procedure_header_token1] = ACTIONS(62),
    [aux_sym_object_header_token1] = ACTIONS(65),
    [aux_sym_move_statement_token1] = ACTIONS(68),
    [sym_number_literal] = ACTIONS(71),
    [sym_string_literal] = ACTIONS(71),
    [sym__eol] = ACTIONS(74),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [8] = {
    [sym__top_level_code] = STATE(33),
    [sym_function_definition] = STATE(42),
    [sym_function_header] = STATE(11),
    [sym_procedure_definition] = STATE(42),
    [sym_procedure_header] = STATE(9),
    [sym_object_definition] = STATE(42),
    [sym_object_header] = STATE(4),
    [sym__statement] = STATE(42),
    [sym_move_statement] = STATE(45),
    [sym_unknown_command_statement] = STATE(45),
    [sym__expression] = STATE(58),
    [sym__literal] = STATE(50),
    [sym_comment] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_unknown_command_statement_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_header_token1] = ACTIONS(11),
    [aux_sym_procedure_header_token1] = ACTIONS(13),
    [aux_sym_object_header_token1] = ACTIONS(15),
    [aux_sym_move_statement_token1] = ACTIONS(17),
    [sym_number_literal] = ACTIONS(19),
    [sym_string_literal] = ACTIONS(19),
    [sym__eol] = ACTIONS(21),
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
    ACTIONS(25), 1,
      aux_sym_move_statement_token1,
    ACTIONS(79), 1,
      aux_sym_procedure_footer_token1,
    STATE(9), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym__statement_list,
    STATE(39), 1,
      sym_procedure_footer,
    STATE(49), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(50), 1,
      sym__literal,
    STATE(52), 1,
      sym__statement,
    STATE(58), 1,
      sym__expression,
    STATE(70), 1,
      sym__procedure_body,
    ACTIONS(19), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(15), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [48] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_move_statement_token1,
    ACTIONS(81), 1,
      aux_sym_function_footer_token1,
    STATE(10), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym__statement_list,
    STATE(23), 1,
      sym_function_footer,
    STATE(49), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(50), 1,
      sym__literal,
    STATE(52), 1,
      sym__statement,
    STATE(58), 1,
      sym__expression,
    STATE(68), 1,
      sym__function_body,
    ACTIONS(19), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(15), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [96] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_move_statement_token1,
    ACTIONS(83), 1,
      aux_sym_function_footer_token1,
    STATE(11), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym__statement_list,
    STATE(44), 1,
      sym_function_footer,
    STATE(49), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(50), 1,
      sym__literal,
    STATE(52), 1,
      sym__statement,
    STATE(58), 1,
      sym__expression,
    STATE(67), 1,
      sym__function_body,
    ACTIONS(19), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(15), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [144] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_move_statement_token1,
    ACTIONS(85), 1,
      aux_sym_procedure_footer_token1,
    STATE(12), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym__statement_list,
    STATE(25), 1,
      sym_procedure_footer,
    STATE(49), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(50), 1,
      sym__literal,
    STATE(52), 1,
      sym__statement,
    STATE(58), 1,
      sym__expression,
    STATE(69), 1,
      sym__procedure_body,
    ACTIONS(19), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(15), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [192] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(92), 1,
      aux_sym_move_statement_token1,
    STATE(49), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(50), 1,
      sym__literal,
    STATE(52), 1,
      sym__statement,
    STATE(58), 1,
      sym__expression,
    ACTIONS(90), 2,
      aux_sym_function_footer_token1,
      aux_sym_procedure_footer_token1,
    ACTIONS(95), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(13), 2,
      aux_sym__statement_list,
      sym_comment,
    STATE(15), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [233] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_move_statement_token1,
    ACTIONS(98), 1,
      aux_sym_procedure_footer_token1,
    STATE(13), 1,
      aux_sym__statement_list,
    STATE(14), 1,
      sym_comment,
    STATE(49), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(50), 1,
      sym__literal,
    STATE(52), 1,
      sym__statement,
    STATE(58), 1,
      sym__expression,
    ACTIONS(19), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(15), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [275] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 1,
      sym_comment,
    ACTIONS(102), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(100), 9,
      aux_sym_function_header_token1,
      aux_sym_function_footer_token1,
      aux_sym_procedure_header_token1,
      aux_sym_procedure_footer_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym_move_statement_token1,
      sym_identifier,
  [301] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      sym_comment,
    ACTIONS(106), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(104), 9,
      aux_sym_function_header_token1,
      aux_sym_function_footer_token1,
      aux_sym_procedure_header_token1,
      aux_sym_procedure_footer_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym_move_statement_token1,
      sym_identifier,
  [327] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(17), 1,
      sym_comment,
    ACTIONS(110), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(108), 9,
      aux_sym_function_header_token1,
      aux_sym_function_footer_token1,
      aux_sym_procedure_header_token1,
      aux_sym_procedure_footer_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym_move_statement_token1,
      sym_identifier,
  [353] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(18), 1,
      sym_comment,
    ACTIONS(114), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(112), 9,
      aux_sym_function_header_token1,
      aux_sym_function_footer_token1,
      aux_sym_procedure_header_token1,
      aux_sym_procedure_footer_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym_move_statement_token1,
      sym_identifier,
  [379] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_move_statement_token1,
    ACTIONS(116), 1,
      aux_sym_function_footer_token1,
    STATE(13), 1,
      aux_sym__statement_list,
    STATE(19), 1,
      sym_comment,
    STATE(49), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(50), 1,
      sym__literal,
    STATE(52), 1,
      sym__statement,
    STATE(58), 1,
      sym__expression,
    ACTIONS(19), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(15), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [421] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 1,
      sym_comment,
    ACTIONS(120), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(118), 7,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym_move_statement_token1,
      sym_identifier,
  [445] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(21), 1,
      sym_comment,
    ACTIONS(124), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(122), 7,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym_move_statement_token1,
      sym_identifier,
  [469] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 1,
      sym_comment,
    ACTIONS(128), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(126), 7,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym_move_statement_token1,
      sym_identifier,
  [493] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
    ACTIONS(132), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(130), 7,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym_move_statement_token1,
      sym_identifier,
  [517] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 1,
      sym_comment,
    ACTIONS(136), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(134), 7,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym_move_statement_token1,
      sym_identifier,
  [541] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_comment,
    ACTIONS(140), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(138), 7,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym_move_statement_token1,
      sym_identifier,
  [565] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(26), 1,
      sym_comment,
    ACTIONS(144), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(142), 7,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym_move_statement_token1,
      sym_identifier,
  [589] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 1,
      sym_comment,
    ACTIONS(148), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(146), 7,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym_move_statement_token1,
      sym_identifier,
  [613] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 1,
      sym_comment,
    ACTIONS(152), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(150), 7,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym_move_statement_token1,
      sym_identifier,
  [637] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym_comment,
    ACTIONS(156), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(154), 7,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym_move_statement_token1,
      sym_identifier,
  [661] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_comment,
    ACTIONS(160), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(158), 7,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym_move_statement_token1,
      sym_identifier,
  [685] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_comment,
    ACTIONS(164), 3,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(162), 7,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_object_footer_token1,
      aux_sym_object_footer_token2,
      aux_sym_move_statement_token1,
      sym_identifier,
  [709] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
      sym_comment,
    ACTIONS(160), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(158), 5,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [732] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 1,
      sym_comment,
    ACTIONS(166), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(168), 5,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [755] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 1,
      sym_comment,
    ACTIONS(148), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(146), 5,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [778] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
      sym_comment,
    ACTIONS(144), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(142), 5,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [801] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 1,
      sym_comment,
    ACTIONS(164), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(162), 5,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [824] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 1,
      sym_comment,
    ACTIONS(110), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(108), 5,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [847] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 1,
      sym_comment,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(112), 5,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [870] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(39), 1,
      sym_comment,
    ACTIONS(140), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(138), 5,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [893] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 1,
      sym_comment,
    ACTIONS(106), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(104), 5,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [916] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 1,
      sym_comment,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(122), 5,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [939] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 1,
      sym_comment,
    ACTIONS(128), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(126), 5,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [962] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 1,
      sym_comment,
    ACTIONS(152), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(150), 5,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [985] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(44), 1,
      sym_comment,
    ACTIONS(132), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(130), 5,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [1008] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 1,
      sym_comment,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(100), 5,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [1031] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(46), 1,
      sym_comment,
    ACTIONS(136), 4,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
    ACTIONS(134), 5,
      aux_sym_function_header_token1,
      aux_sym_procedure_header_token1,
      aux_sym_object_header_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [1054] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(170), 1,
      sym_identifier,
    STATE(50), 1,
      sym__literal,
    STATE(58), 1,
      sym__expression,
    ACTIONS(173), 2,
      aux_sym_unknown_command_statement_token1,
      sym__eol,
    ACTIONS(175), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(47), 2,
      sym_comment,
      aux_sym_unknown_command_statement_repeat1,
  [1082] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(178), 1,
      sym_identifier,
    ACTIONS(180), 1,
      aux_sym_unknown_command_statement_token1,
    ACTIONS(182), 1,
      sym__eol,
    STATE(47), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(48), 1,
      sym_comment,
    STATE(50), 1,
      sym__literal,
    STATE(58), 1,
      sym__expression,
    ACTIONS(19), 2,
      sym_number_literal,
      sym_string_literal,
  [1114] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(178), 1,
      sym_identifier,
    ACTIONS(184), 1,
      aux_sym_unknown_command_statement_token1,
    ACTIONS(186), 1,
      sym__eol,
    STATE(47), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(49), 1,
      sym_comment,
    STATE(50), 1,
      sym__literal,
    STATE(58), 1,
      sym__expression,
    ACTIONS(19), 2,
      sym_number_literal,
      sym_string_literal,
  [1146] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_comment,
    ACTIONS(188), 2,
      aux_sym_move_statement_token2,
      sym_identifier,
    ACTIONS(190), 4,
      aux_sym_unknown_command_statement_token1,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
  [1166] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 1,
      sym_comment,
    ACTIONS(192), 2,
      aux_sym_move_statement_token2,
      sym_identifier,
    ACTIONS(194), 4,
      aux_sym_unknown_command_statement_token1,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
  [1186] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(52), 1,
      sym_comment,
    ACTIONS(198), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(196), 4,
      aux_sym_function_footer_token1,
      aux_sym_procedure_footer_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [1206] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(178), 1,
      sym_identifier,
    STATE(50), 1,
      sym__literal,
    STATE(53), 1,
      sym_comment,
    STATE(92), 1,
      sym__expression,
    ACTIONS(19), 2,
      sym_number_literal,
      sym_string_literal,
  [1229] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
      sym_comment,
    ACTIONS(202), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(200), 3,
      aux_sym_function_footer_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [1248] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(204), 1,
      sym_identifier,
    ACTIONS(207), 1,
      aux_sym_function_header_token2,
    ACTIONS(209), 1,
      sym__eol,
    STATE(66), 1,
      sym_parameter,
    STATE(55), 2,
      aux_sym__parameter_list,
      sym_comment,
  [1271] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(56), 1,
      sym_comment,
    ACTIONS(213), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(211), 3,
      aux_sym_procedure_footer_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [1290] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(178), 1,
      sym_identifier,
    STATE(50), 1,
      sym__literal,
    STATE(57), 1,
      sym_comment,
    STATE(80), 1,
      sym__expression,
    ACTIONS(19), 2,
      sym_number_literal,
      sym_string_literal,
  [1313] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(58), 1,
      sym_comment,
    ACTIONS(215), 5,
      aux_sym_unknown_command_statement_token1,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
      sym__eol,
  [1330] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(59), 1,
      sym_comment,
    ACTIONS(219), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(217), 3,
      aux_sym_function_footer_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [1349] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(60), 1,
      sym_comment,
    ACTIONS(223), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(221), 3,
      aux_sym_procedure_footer_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [1368] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(227), 1,
      aux_sym_function_header_token2,
    STATE(61), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym__parameter_list,
    STATE(66), 1,
      sym_parameter,
  [1390] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(229), 1,
      aux_sym_function_header_token2,
    STATE(55), 1,
      aux_sym__parameter_list,
    STATE(62), 1,
      sym_comment,
    STATE(66), 1,
      sym_parameter,
  [1412] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(233), 1,
      sym__eol,
    STATE(63), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym__parameter_list,
    STATE(66), 1,
      sym_parameter,
  [1434] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(235), 1,
      sym__eol,
    STATE(55), 1,
      aux_sym__parameter_list,
    STATE(64), 1,
      sym_comment,
    STATE(66), 1,
      sym_parameter,
  [1456] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(239), 1,
      sym__eol,
    STATE(65), 1,
      sym_comment,
    ACTIONS(237), 2,
      aux_sym_function_header_token2,
      sym_identifier,
  [1473] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      sym__eol,
    STATE(66), 1,
      sym_comment,
    ACTIONS(241), 2,
      aux_sym_function_header_token2,
      sym_identifier,
  [1490] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(245), 1,
      aux_sym_function_footer_token1,
    STATE(32), 1,
      sym_function_footer,
    STATE(67), 1,
      sym_comment,
  [1506] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      aux_sym_function_footer_token1,
    STATE(30), 1,
      sym_function_footer,
    STATE(68), 1,
      sym_comment,
  [1522] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(249), 1,
      aux_sym_procedure_footer_token1,
    STATE(27), 1,
      sym_procedure_footer,
    STATE(69), 1,
      sym_comment,
  [1538] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(251), 1,
      aux_sym_procedure_footer_token1,
    STATE(34), 1,
      sym_procedure_footer,
    STATE(70), 1,
      sym_comment,
  [1554] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(253), 1,
      sym_identifier,
    STATE(71), 1,
      sym_comment,
  [1567] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(255), 1,
      sym_identifier,
    STATE(72), 1,
      sym_comment,
  [1580] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(257), 1,
      sym_identifier,
    STATE(73), 1,
      sym_comment,
  [1593] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(259), 1,
      anon_sym_SLASH,
    STATE(74), 1,
      sym_comment,
  [1606] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(261), 1,
      sym__eol,
    STATE(75), 1,
      sym_comment,
  [1619] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      sym_comment,
  [1632] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(265), 1,
      sym_identifier,
    STATE(77), 1,
      sym_comment,
  [1645] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(267), 1,
      sym__eol,
    STATE(78), 1,
      sym_comment,
  [1658] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(269), 1,
      aux_sym_object_header_token2,
    STATE(79), 1,
      sym_comment,
  [1671] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(271), 1,
      aux_sym_move_statement_token2,
    STATE(80), 1,
      sym_comment,
  [1684] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(273), 1,
      sym_identifier,
    STATE(81), 1,
      sym_comment,
  [1697] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(275), 1,
      sym__eol,
    STATE(82), 1,
      sym_comment,
  [1710] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(277), 1,
      sym__eol,
    STATE(83), 1,
      sym_comment,
  [1723] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(279), 1,
      sym_identifier,
    STATE(84), 1,
      sym_comment,
  [1736] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(281), 1,
      sym__eol,
    STATE(85), 1,
      sym_comment,
  [1749] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(283), 1,
      aux_sym_object_header_token3,
    STATE(86), 1,
      sym_comment,
  [1762] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(285), 1,
      sym_identifier,
    STATE(87), 1,
      sym_comment,
  [1775] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(287), 1,
      sym_identifier,
    STATE(88), 1,
      sym_comment,
  [1788] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(289), 1,
      sym__eol,
    STATE(89), 1,
      sym_comment,
  [1801] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(291), 1,
      sym__eol,
    STATE(90), 1,
      sym_comment,
  [1814] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(293), 1,
      sym_identifier,
    STATE(91), 1,
      sym_comment,
  [1827] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(295), 1,
      aux_sym_move_statement_token2,
    STATE(92), 1,
      sym_comment,
  [1840] = 4,
    ACTIONS(297), 1,
      sym_line_comment,
    ACTIONS(299), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(301), 1,
      aux_sym_comment_token1,
    STATE(93), 1,
      sym_comment,
  [1853] = 1,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 48,
  [SMALL_STATE(11)] = 96,
  [SMALL_STATE(12)] = 144,
  [SMALL_STATE(13)] = 192,
  [SMALL_STATE(14)] = 233,
  [SMALL_STATE(15)] = 275,
  [SMALL_STATE(16)] = 301,
  [SMALL_STATE(17)] = 327,
  [SMALL_STATE(18)] = 353,
  [SMALL_STATE(19)] = 379,
  [SMALL_STATE(20)] = 421,
  [SMALL_STATE(21)] = 445,
  [SMALL_STATE(22)] = 469,
  [SMALL_STATE(23)] = 493,
  [SMALL_STATE(24)] = 517,
  [SMALL_STATE(25)] = 541,
  [SMALL_STATE(26)] = 565,
  [SMALL_STATE(27)] = 589,
  [SMALL_STATE(28)] = 613,
  [SMALL_STATE(29)] = 637,
  [SMALL_STATE(30)] = 661,
  [SMALL_STATE(31)] = 685,
  [SMALL_STATE(32)] = 709,
  [SMALL_STATE(33)] = 732,
  [SMALL_STATE(34)] = 755,
  [SMALL_STATE(35)] = 778,
  [SMALL_STATE(36)] = 801,
  [SMALL_STATE(37)] = 824,
  [SMALL_STATE(38)] = 847,
  [SMALL_STATE(39)] = 870,
  [SMALL_STATE(40)] = 893,
  [SMALL_STATE(41)] = 916,
  [SMALL_STATE(42)] = 939,
  [SMALL_STATE(43)] = 962,
  [SMALL_STATE(44)] = 985,
  [SMALL_STATE(45)] = 1008,
  [SMALL_STATE(46)] = 1031,
  [SMALL_STATE(47)] = 1054,
  [SMALL_STATE(48)] = 1082,
  [SMALL_STATE(49)] = 1114,
  [SMALL_STATE(50)] = 1146,
  [SMALL_STATE(51)] = 1166,
  [SMALL_STATE(52)] = 1186,
  [SMALL_STATE(53)] = 1206,
  [SMALL_STATE(54)] = 1229,
  [SMALL_STATE(55)] = 1248,
  [SMALL_STATE(56)] = 1271,
  [SMALL_STATE(57)] = 1290,
  [SMALL_STATE(58)] = 1313,
  [SMALL_STATE(59)] = 1330,
  [SMALL_STATE(60)] = 1349,
  [SMALL_STATE(61)] = 1368,
  [SMALL_STATE(62)] = 1390,
  [SMALL_STATE(63)] = 1412,
  [SMALL_STATE(64)] = 1434,
  [SMALL_STATE(65)] = 1456,
  [SMALL_STATE(66)] = 1473,
  [SMALL_STATE(67)] = 1490,
  [SMALL_STATE(68)] = 1506,
  [SMALL_STATE(69)] = 1522,
  [SMALL_STATE(70)] = 1538,
  [SMALL_STATE(71)] = 1554,
  [SMALL_STATE(72)] = 1567,
  [SMALL_STATE(73)] = 1580,
  [SMALL_STATE(74)] = 1593,
  [SMALL_STATE(75)] = 1606,
  [SMALL_STATE(76)] = 1619,
  [SMALL_STATE(77)] = 1632,
  [SMALL_STATE(78)] = 1645,
  [SMALL_STATE(79)] = 1658,
  [SMALL_STATE(80)] = 1671,
  [SMALL_STATE(81)] = 1684,
  [SMALL_STATE(82)] = 1697,
  [SMALL_STATE(83)] = 1710,
  [SMALL_STATE(84)] = 1723,
  [SMALL_STATE(85)] = 1736,
  [SMALL_STATE(86)] = 1749,
  [SMALL_STATE(87)] = 1762,
  [SMALL_STATE(88)] = 1775,
  [SMALL_STATE(89)] = 1788,
  [SMALL_STATE(90)] = 1801,
  [SMALL_STATE(91)] = 1814,
  [SMALL_STATE(92)] = 1827,
  [SMALL_STATE(93)] = 1840,
  [SMALL_STATE(94)] = 1853,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_body, 2, 0, 0), SHIFT_REPEAT(50),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_body, 2, 0, 0), SHIFT_REPEAT(72),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_body, 2, 0, 0), SHIFT_REPEAT(88),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_body, 2, 0, 0), SHIFT_REPEAT(73),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__object_body, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__object_body, 2, 0, 0), SHIFT_REPEAT(53),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_body, 2, 0, 0), SHIFT_REPEAT(51),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__object_body, 2, 0, 0), SHIFT_REPEAT(22),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list, 2, 0, 0), SHIFT_REPEAT(50),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list, 2, 0, 0),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list, 2, 0, 0), SHIFT_REPEAT(53),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list, 2, 0, 0), SHIFT_REPEAT(51),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__procedure_body, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown_command_statement, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown_command_statement, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown_command_statement, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown_command_statement, 3, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_move_statement, 5, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move_statement, 5, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_body, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_header, 6, 0, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_header, 6, 0, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_footer, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_footer, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__top_level_code, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_code, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_footer, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_footer, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_footer, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_footer, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__object_body, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__object_body, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 3, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unknown_command_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unknown_command_statement_repeat1, 2, 0, 0),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unknown_command_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list, 1, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list, 1, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_header, 6, 0, 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 6, 0, 4),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__parameter_list, 2, 0, 0), SHIFT_REPEAT(81),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__parameter_list, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_list, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_header, 4, 0, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_header, 4, 0, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unknown_command_statement_repeat1, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_header, 5, 0, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_header, 5, 0, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_header, 3, 0, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_header, 3, 0, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 2, 0, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, 0, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__parameter_list, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__parameter_list, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [263] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
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
