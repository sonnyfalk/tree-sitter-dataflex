#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_identifier = 1,
  aux_sym_function_definition_token1 = 2,
  aux_sym_function_definition_token2 = 3,
  aux_sym_procedure_definition_token1 = 4,
  aux_sym_procedure_definition_token2 = 5,
  aux_sym_object_definition_token1 = 6,
  aux_sym_object_definition_token2 = 7,
  aux_sym_object_declarator_token1 = 8,
  aux_sym_object_declarator_token2 = 9,
  aux_sym_object_declarator_token3 = 10,
  aux_sym_move_statement_token1 = 11,
  aux_sym_move_statement_token2 = 12,
  aux_sym_unknown_command_statement_token1 = 13,
  sym_number_literal = 14,
  sym_string_literal = 15,
  sym__eol = 16,
  sym_line_comment = 17,
  anon_sym_SLASH_STAR = 18,
  aux_sym_comment_token1 = 19,
  anon_sym_SLASH = 20,
  sym_source_file = 21,
  sym__top_level_code = 22,
  sym_function_definition = 23,
  sym_procedure_definition = 24,
  sym_object_definition = 25,
  sym_object_declarator = 26,
  aux_sym__statement_list = 27,
  sym__statement = 28,
  sym_move_statement = 29,
  sym_unknown_command_statement = 30,
  sym__expression = 31,
  sym__literal = 32,
  sym_comment = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym_unknown_command_statement_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym_function_definition_token1] = "keyword",
  [aux_sym_function_definition_token2] = "keyword",
  [aux_sym_procedure_definition_token1] = "keyword",
  [aux_sym_procedure_definition_token2] = "keyword",
  [aux_sym_object_definition_token1] = "keyword",
  [aux_sym_object_definition_token2] = "keyword",
  [aux_sym_object_declarator_token1] = "keyword",
  [aux_sym_object_declarator_token2] = "keyword",
  [aux_sym_object_declarator_token3] = "keyword",
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
  [sym_procedure_definition] = "procedure_definition",
  [sym_object_definition] = "object_definition",
  [sym_object_declarator] = "object_declarator",
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
  [aux_sym_function_definition_token1] = aux_sym_function_definition_token1,
  [aux_sym_function_definition_token2] = aux_sym_function_definition_token1,
  [aux_sym_procedure_definition_token1] = aux_sym_function_definition_token1,
  [aux_sym_procedure_definition_token2] = aux_sym_function_definition_token1,
  [aux_sym_object_definition_token1] = aux_sym_function_definition_token1,
  [aux_sym_object_definition_token2] = aux_sym_function_definition_token1,
  [aux_sym_object_declarator_token1] = aux_sym_function_definition_token1,
  [aux_sym_object_declarator_token2] = aux_sym_function_definition_token1,
  [aux_sym_object_declarator_token3] = aux_sym_function_definition_token1,
  [aux_sym_move_statement_token1] = aux_sym_function_definition_token1,
  [aux_sym_move_statement_token2] = aux_sym_function_definition_token1,
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
  [sym_procedure_definition] = sym_procedure_definition,
  [sym_object_definition] = sym_object_definition,
  [sym_object_declarator] = sym_object_declarator,
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
  [aux_sym_function_definition_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_function_definition_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_procedure_definition_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_procedure_definition_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_object_definition_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_object_definition_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_object_declarator_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_object_declarator_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_object_declarator_token3] = {
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
  [sym_procedure_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_object_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_object_declarator] = {
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
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
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
  [4] = 2,
  [5] = 5,
  [6] = 3,
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 11,
  [15] = 13,
  [16] = 12,
  [17] = 10,
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
  [31] = 24,
  [32] = 18,
  [33] = 29,
  [34] = 34,
  [35] = 27,
  [36] = 20,
  [37] = 26,
  [38] = 25,
  [39] = 30,
  [40] = 28,
  [41] = 34,
  [42] = 42,
  [43] = 21,
  [44] = 19,
  [45] = 23,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 48,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 52,
  [64] = 64,
  [65] = 54,
  [66] = 50,
  [67] = 49,
  [68] = 68,
  [69] = 69,
  [70] = 58,
  [71] = 56,
  [72] = 60,
  [73] = 73,
  [74] = 69,
  [75] = 73,
  [76] = 68,
  [77] = 77,
  [78] = 78,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(9);
      if (lookahead == '|') ADVANCE(14);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '/') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '/') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(21);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_unknown_command_statement_token1);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '|') ADVANCE(14);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(5);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(5);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '/') ADVANCE(18);
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
      ADVANCE_MAP(
        'A', 1,
        'a', 1,
        'C', 2,
        'c', 2,
        'E', 3,
        'e', 3,
        'F', 4,
        'f', 4,
        'I', 5,
        'i', 5,
        'M', 6,
        'm', 6,
        'O', 7,
        'o', 7,
        'P', 8,
        'p', 8,
        'T', 9,
        't', 9,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(aux_sym_object_declarator_token3);
      END_STATE();
    case 2:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_object_declarator_token2);
      END_STATE();
    case 14:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_move_statement_token2);
      END_STATE();
    case 18:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(32);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(34);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_move_statement_token1);
      END_STATE();
    case 28:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_object_declarator_token1);
      END_STATE();
    case 43:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 47:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 48:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 49:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(56);
      END_STATE();
    case 51:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      END_STATE();
    case 52:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_function_definition_token1);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 56:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 58:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 59:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_procedure_definition_token1);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 62:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_object_definition_token1);
      END_STATE();
    case 64:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 65:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 66:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 67:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 68:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_function_definition_token2);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_object_definition_token2);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_procedure_definition_token2);
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
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_function_definition_token1] = ACTIONS(1),
    [aux_sym_function_definition_token2] = ACTIONS(1),
    [aux_sym_procedure_definition_token1] = ACTIONS(1),
    [aux_sym_procedure_definition_token2] = ACTIONS(1),
    [aux_sym_object_definition_token1] = ACTIONS(1),
    [aux_sym_object_definition_token2] = ACTIONS(1),
    [aux_sym_object_declarator_token1] = ACTIONS(1),
    [aux_sym_object_declarator_token2] = ACTIONS(1),
    [aux_sym_object_declarator_token3] = ACTIONS(1),
    [aux_sym_move_statement_token1] = ACTIONS(1),
    [aux_sym_move_statement_token2] = ACTIONS(1),
    [aux_sym_unknown_command_statement_token1] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(61),
    [sym__top_level_code] = STATE(31),
    [sym_function_definition] = STATE(45),
    [sym_procedure_definition] = STATE(45),
    [sym_object_definition] = STATE(45),
    [sym_object_declarator] = STATE(2),
    [sym__statement] = STATE(45),
    [sym_move_statement] = STATE(32),
    [sym_unknown_command_statement] = STATE(32),
    [sym__expression] = STATE(47),
    [sym__literal] = STATE(50),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_unknown_command_statement_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_definition_token1] = ACTIONS(11),
    [aux_sym_procedure_definition_token1] = ACTIONS(13),
    [aux_sym_object_declarator_token1] = ACTIONS(15),
    [aux_sym_move_statement_token1] = ACTIONS(17),
    [sym_number_literal] = ACTIONS(19),
    [sym_string_literal] = ACTIONS(19),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [2] = {
    [sym__top_level_code] = STATE(24),
    [sym_function_definition] = STATE(23),
    [sym_procedure_definition] = STATE(23),
    [sym_object_definition] = STATE(23),
    [sym_object_declarator] = STATE(4),
    [sym__statement] = STATE(23),
    [sym_move_statement] = STATE(18),
    [sym_unknown_command_statement] = STATE(18),
    [sym__expression] = STATE(47),
    [sym__literal] = STATE(50),
    [sym_comment] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_unknown_command_statement_repeat1] = STATE(41),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_definition_token1] = ACTIONS(21),
    [aux_sym_procedure_definition_token1] = ACTIONS(23),
    [aux_sym_object_definition_token1] = ACTIONS(25),
    [aux_sym_object_definition_token2] = ACTIONS(25),
    [aux_sym_object_declarator_token1] = ACTIONS(15),
    [aux_sym_move_statement_token1] = ACTIONS(27),
    [sym_number_literal] = ACTIONS(19),
    [sym_string_literal] = ACTIONS(19),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [3] = {
    [sym__top_level_code] = STATE(24),
    [sym_function_definition] = STATE(23),
    [sym_procedure_definition] = STATE(23),
    [sym_object_definition] = STATE(23),
    [sym_object_declarator] = STATE(4),
    [sym__statement] = STATE(23),
    [sym_move_statement] = STATE(18),
    [sym_unknown_command_statement] = STATE(18),
    [sym__expression] = STATE(47),
    [sym__literal] = STATE(50),
    [sym_comment] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_unknown_command_statement_repeat1] = STATE(41),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_definition_token1] = ACTIONS(21),
    [aux_sym_procedure_definition_token1] = ACTIONS(23),
    [aux_sym_object_definition_token1] = ACTIONS(29),
    [aux_sym_object_definition_token2] = ACTIONS(29),
    [aux_sym_object_declarator_token1] = ACTIONS(15),
    [aux_sym_move_statement_token1] = ACTIONS(27),
    [sym_number_literal] = ACTIONS(19),
    [sym_string_literal] = ACTIONS(19),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [4] = {
    [sym__top_level_code] = STATE(24),
    [sym_function_definition] = STATE(23),
    [sym_procedure_definition] = STATE(23),
    [sym_object_definition] = STATE(23),
    [sym_object_declarator] = STATE(4),
    [sym__statement] = STATE(23),
    [sym_move_statement] = STATE(18),
    [sym_unknown_command_statement] = STATE(18),
    [sym__expression] = STATE(47),
    [sym__literal] = STATE(50),
    [sym_comment] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_unknown_command_statement_repeat1] = STATE(41),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_definition_token1] = ACTIONS(21),
    [aux_sym_procedure_definition_token1] = ACTIONS(23),
    [aux_sym_object_definition_token1] = ACTIONS(31),
    [aux_sym_object_definition_token2] = ACTIONS(31),
    [aux_sym_object_declarator_token1] = ACTIONS(15),
    [aux_sym_move_statement_token1] = ACTIONS(27),
    [sym_number_literal] = ACTIONS(19),
    [sym_string_literal] = ACTIONS(19),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [5] = {
    [sym__top_level_code] = STATE(24),
    [sym_function_definition] = STATE(23),
    [sym_procedure_definition] = STATE(23),
    [sym_object_definition] = STATE(23),
    [sym_object_declarator] = STATE(4),
    [sym__statement] = STATE(23),
    [sym_move_statement] = STATE(18),
    [sym_unknown_command_statement] = STATE(18),
    [sym__expression] = STATE(47),
    [sym__literal] = STATE(50),
    [sym_comment] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_unknown_command_statement_repeat1] = STATE(41),
    [sym_identifier] = ACTIONS(33),
    [aux_sym_function_definition_token1] = ACTIONS(36),
    [aux_sym_procedure_definition_token1] = ACTIONS(39),
    [aux_sym_object_definition_token1] = ACTIONS(42),
    [aux_sym_object_definition_token2] = ACTIONS(42),
    [aux_sym_object_declarator_token1] = ACTIONS(44),
    [aux_sym_move_statement_token1] = ACTIONS(47),
    [sym_number_literal] = ACTIONS(50),
    [sym_string_literal] = ACTIONS(50),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [6] = {
    [sym__top_level_code] = STATE(24),
    [sym_function_definition] = STATE(23),
    [sym_procedure_definition] = STATE(23),
    [sym_object_definition] = STATE(23),
    [sym_object_declarator] = STATE(4),
    [sym__statement] = STATE(23),
    [sym_move_statement] = STATE(18),
    [sym_unknown_command_statement] = STATE(18),
    [sym__expression] = STATE(47),
    [sym__literal] = STATE(50),
    [sym_comment] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_unknown_command_statement_repeat1] = STATE(41),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_definition_token1] = ACTIONS(21),
    [aux_sym_procedure_definition_token1] = ACTIONS(23),
    [aux_sym_object_definition_token1] = ACTIONS(53),
    [aux_sym_object_definition_token2] = ACTIONS(53),
    [aux_sym_object_declarator_token1] = ACTIONS(15),
    [aux_sym_move_statement_token1] = ACTIONS(27),
    [sym_number_literal] = ACTIONS(19),
    [sym_string_literal] = ACTIONS(19),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [7] = {
    [sym__top_level_code] = STATE(31),
    [sym_function_definition] = STATE(45),
    [sym_procedure_definition] = STATE(45),
    [sym_object_definition] = STATE(45),
    [sym_object_declarator] = STATE(2),
    [sym__statement] = STATE(45),
    [sym_move_statement] = STATE(32),
    [sym_unknown_command_statement] = STATE(32),
    [sym__expression] = STATE(47),
    [sym__literal] = STATE(50),
    [sym_comment] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_unknown_command_statement_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_identifier] = ACTIONS(33),
    [aux_sym_function_definition_token1] = ACTIONS(57),
    [aux_sym_procedure_definition_token1] = ACTIONS(60),
    [aux_sym_object_declarator_token1] = ACTIONS(44),
    [aux_sym_move_statement_token1] = ACTIONS(63),
    [sym_number_literal] = ACTIONS(50),
    [sym_string_literal] = ACTIONS(50),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [8] = {
    [sym__top_level_code] = STATE(31),
    [sym_function_definition] = STATE(45),
    [sym_procedure_definition] = STATE(45),
    [sym_object_definition] = STATE(45),
    [sym_object_declarator] = STATE(2),
    [sym__statement] = STATE(45),
    [sym_move_statement] = STATE(32),
    [sym_unknown_command_statement] = STATE(32),
    [sym__expression] = STATE(47),
    [sym__literal] = STATE(50),
    [sym_comment] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_unknown_command_statement_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(66),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_definition_token1] = ACTIONS(11),
    [aux_sym_procedure_definition_token1] = ACTIONS(13),
    [aux_sym_object_declarator_token1] = ACTIONS(15),
    [aux_sym_move_statement_token1] = ACTIONS(17),
    [sym_number_literal] = ACTIONS(19),
    [sym_string_literal] = ACTIONS(19),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(68), 1,
      sym_identifier,
    ACTIONS(73), 1,
      aux_sym_move_statement_token1,
    STATE(41), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(46), 1,
      sym__statement,
    STATE(47), 1,
      sym__expression,
    STATE(50), 1,
      sym__literal,
    ACTIONS(71), 2,
      aux_sym_function_definition_token2,
      aux_sym_procedure_definition_token2,
    ACTIONS(76), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(9), 2,
      aux_sym__statement_list,
      sym_comment,
    STATE(18), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [41] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(27), 1,
      aux_sym_move_statement_token1,
    ACTIONS(79), 1,
      aux_sym_function_definition_token2,
    STATE(9), 1,
      aux_sym__statement_list,
    STATE(10), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(46), 1,
      sym__statement,
    STATE(47), 1,
      sym__expression,
    STATE(50), 1,
      sym__literal,
    ACTIONS(19), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(18), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [83] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(27), 1,
      aux_sym_move_statement_token1,
    ACTIONS(81), 1,
      aux_sym_procedure_definition_token2,
    STATE(9), 1,
      aux_sym__statement_list,
    STATE(11), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(46), 1,
      sym__statement,
    STATE(47), 1,
      sym__expression,
    STATE(50), 1,
      sym__literal,
    ACTIONS(19), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(18), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [125] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(27), 1,
      aux_sym_move_statement_token1,
    ACTIONS(83), 1,
      aux_sym_function_definition_token2,
    STATE(10), 1,
      aux_sym__statement_list,
    STATE(12), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(46), 1,
      sym__statement,
    STATE(47), 1,
      sym__expression,
    STATE(50), 1,
      sym__literal,
    ACTIONS(19), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(18), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [167] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(27), 1,
      aux_sym_move_statement_token1,
    ACTIONS(85), 1,
      aux_sym_procedure_definition_token2,
    STATE(13), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym__statement_list,
    STATE(41), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(46), 1,
      sym__statement,
    STATE(47), 1,
      sym__expression,
    STATE(50), 1,
      sym__literal,
    ACTIONS(19), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(18), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [209] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(27), 1,
      aux_sym_move_statement_token1,
    ACTIONS(87), 1,
      aux_sym_procedure_definition_token2,
    STATE(9), 1,
      aux_sym__statement_list,
    STATE(14), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(46), 1,
      sym__statement,
    STATE(47), 1,
      sym__expression,
    STATE(50), 1,
      sym__literal,
    ACTIONS(19), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(18), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [251] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(27), 1,
      aux_sym_move_statement_token1,
    ACTIONS(89), 1,
      aux_sym_procedure_definition_token2,
    STATE(11), 1,
      aux_sym__statement_list,
    STATE(15), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(46), 1,
      sym__statement,
    STATE(47), 1,
      sym__expression,
    STATE(50), 1,
      sym__literal,
    ACTIONS(19), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(18), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [293] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(27), 1,
      aux_sym_move_statement_token1,
    ACTIONS(91), 1,
      aux_sym_function_definition_token2,
    STATE(16), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym__statement_list,
    STATE(41), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(46), 1,
      sym__statement,
    STATE(47), 1,
      sym__expression,
    STATE(50), 1,
      sym__literal,
    ACTIONS(19), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(18), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [335] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(27), 1,
      aux_sym_move_statement_token1,
    ACTIONS(93), 1,
      aux_sym_function_definition_token2,
    STATE(9), 1,
      aux_sym__statement_list,
    STATE(17), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(46), 1,
      sym__statement,
    STATE(47), 1,
      sym__expression,
    STATE(50), 1,
      sym__literal,
    ACTIONS(19), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(18), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [377] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(18), 1,
      sym_comment,
    ACTIONS(97), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(95), 9,
      aux_sym_function_definition_token1,
      aux_sym_function_definition_token2,
      aux_sym_procedure_definition_token1,
      aux_sym_procedure_definition_token2,
      aux_sym_object_definition_token1,
      aux_sym_object_definition_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [402] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 1,
      sym_comment,
    ACTIONS(101), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(99), 9,
      aux_sym_function_definition_token1,
      aux_sym_function_definition_token2,
      aux_sym_procedure_definition_token1,
      aux_sym_procedure_definition_token2,
      aux_sym_object_definition_token1,
      aux_sym_object_definition_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [427] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 1,
      sym_comment,
    ACTIONS(105), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(103), 9,
      aux_sym_function_definition_token1,
      aux_sym_function_definition_token2,
      aux_sym_procedure_definition_token1,
      aux_sym_procedure_definition_token2,
      aux_sym_object_definition_token1,
      aux_sym_object_definition_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [452] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(21), 1,
      sym_comment,
    ACTIONS(109), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(107), 9,
      aux_sym_function_definition_token1,
      aux_sym_function_definition_token2,
      aux_sym_procedure_definition_token1,
      aux_sym_procedure_definition_token2,
      aux_sym_object_definition_token1,
      aux_sym_object_definition_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [477] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 1,
      sym_comment,
    ACTIONS(113), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(111), 7,
      aux_sym_function_definition_token1,
      aux_sym_procedure_definition_token1,
      aux_sym_object_definition_token1,
      aux_sym_object_definition_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [500] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
    ACTIONS(117), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(115), 7,
      aux_sym_function_definition_token1,
      aux_sym_procedure_definition_token1,
      aux_sym_object_definition_token1,
      aux_sym_object_definition_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [523] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 1,
      sym_comment,
    ACTIONS(121), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(119), 7,
      aux_sym_function_definition_token1,
      aux_sym_procedure_definition_token1,
      aux_sym_object_definition_token1,
      aux_sym_object_definition_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [546] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_comment,
    ACTIONS(125), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(123), 7,
      aux_sym_function_definition_token1,
      aux_sym_procedure_definition_token1,
      aux_sym_object_definition_token1,
      aux_sym_object_definition_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [569] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(26), 1,
      sym_comment,
    ACTIONS(129), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(127), 7,
      aux_sym_function_definition_token1,
      aux_sym_procedure_definition_token1,
      aux_sym_object_definition_token1,
      aux_sym_object_definition_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [592] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 1,
      sym_comment,
    ACTIONS(133), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(131), 7,
      aux_sym_function_definition_token1,
      aux_sym_procedure_definition_token1,
      aux_sym_object_definition_token1,
      aux_sym_object_definition_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [615] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 1,
      sym_comment,
    ACTIONS(137), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(135), 7,
      aux_sym_function_definition_token1,
      aux_sym_procedure_definition_token1,
      aux_sym_object_definition_token1,
      aux_sym_object_definition_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [638] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym_comment,
    ACTIONS(141), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(139), 7,
      aux_sym_function_definition_token1,
      aux_sym_procedure_definition_token1,
      aux_sym_object_definition_token1,
      aux_sym_object_definition_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [661] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_comment,
    ACTIONS(145), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(143), 7,
      aux_sym_function_definition_token1,
      aux_sym_procedure_definition_token1,
      aux_sym_object_definition_token1,
      aux_sym_object_definition_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [684] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_comment,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(119), 5,
      aux_sym_function_definition_token1,
      aux_sym_procedure_definition_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [706] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
      sym_comment,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(95), 5,
      aux_sym_function_definition_token1,
      aux_sym_procedure_definition_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [728] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 1,
      sym_comment,
    ACTIONS(141), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(139), 5,
      aux_sym_function_definition_token1,
      aux_sym_procedure_definition_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [750] = 10,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(147), 1,
      aux_sym_unknown_command_statement_token1,
    ACTIONS(151), 1,
      sym__eol,
    ACTIONS(153), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(47), 1,
      sym__expression,
    STATE(50), 1,
      sym__literal,
    ACTIONS(149), 2,
      sym_number_literal,
      sym_string_literal,
  [782] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
      sym_comment,
    ACTIONS(133), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(131), 5,
      aux_sym_function_definition_token1,
      aux_sym_procedure_definition_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [804] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 1,
      sym_comment,
    ACTIONS(105), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(103), 5,
      aux_sym_function_definition_token1,
      aux_sym_procedure_definition_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [826] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 1,
      sym_comment,
    ACTIONS(129), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(127), 5,
      aux_sym_function_definition_token1,
      aux_sym_procedure_definition_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [848] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 1,
      sym_comment,
    ACTIONS(125), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(123), 5,
      aux_sym_function_definition_token1,
      aux_sym_procedure_definition_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [870] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(39), 1,
      sym_comment,
    ACTIONS(145), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(143), 5,
      aux_sym_function_definition_token1,
      aux_sym_procedure_definition_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [892] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 1,
      sym_comment,
    ACTIONS(137), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(135), 5,
      aux_sym_function_definition_token1,
      aux_sym_procedure_definition_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [914] = 10,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(153), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(157), 1,
      aux_sym_unknown_command_statement_token1,
    ACTIONS(159), 1,
      sym__eol,
    STATE(41), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(47), 1,
      sym__expression,
    STATE(50), 1,
      sym__literal,
    ACTIONS(149), 2,
      sym_number_literal,
      sym_string_literal,
  [946] = 9,
    ACTIONS(153), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(161), 1,
      sym_identifier,
    ACTIONS(164), 1,
      aux_sym_unknown_command_statement_token1,
    ACTIONS(169), 1,
      sym__eol,
    STATE(47), 1,
      sym__expression,
    STATE(50), 1,
      sym__literal,
    ACTIONS(166), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(42), 2,
      sym_comment,
      aux_sym_unknown_command_statement_repeat1,
  [976] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 1,
      sym_comment,
    ACTIONS(109), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(107), 5,
      aux_sym_function_definition_token1,
      aux_sym_procedure_definition_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [998] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(44), 1,
      sym_comment,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(99), 5,
      aux_sym_function_definition_token1,
      aux_sym_procedure_definition_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [1020] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 1,
      sym_comment,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(115), 5,
      aux_sym_function_definition_token1,
      aux_sym_procedure_definition_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [1042] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(46), 1,
      sym_comment,
    ACTIONS(173), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(171), 4,
      aux_sym_function_definition_token2,
      aux_sym_procedure_definition_token2,
      aux_sym_move_statement_token1,
      sym_identifier,
  [1062] = 5,
    ACTIONS(153), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(177), 1,
      sym__eol,
    STATE(47), 1,
      sym_comment,
    ACTIONS(175), 4,
      aux_sym_unknown_command_statement_token1,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
  [1081] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(179), 1,
      sym_identifier,
    STATE(48), 1,
      sym_comment,
    STATE(66), 1,
      sym__literal,
    STATE(68), 1,
      sym__expression,
    ACTIONS(181), 2,
      sym_number_literal,
      sym_string_literal,
  [1104] = 5,
    ACTIONS(153), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(185), 1,
      sym__eol,
    STATE(49), 1,
      sym_comment,
    ACTIONS(183), 4,
      aux_sym_unknown_command_statement_token1,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
  [1123] = 5,
    ACTIONS(153), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(189), 1,
      sym__eol,
    STATE(50), 1,
      sym_comment,
    ACTIONS(187), 4,
      aux_sym_unknown_command_statement_token1,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
  [1142] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(179), 1,
      sym_identifier,
    STATE(51), 1,
      sym_comment,
    STATE(66), 1,
      sym__literal,
    STATE(76), 1,
      sym__expression,
    ACTIONS(181), 2,
      sym_number_literal,
      sym_string_literal,
  [1165] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(191), 1,
      sym_identifier,
    STATE(52), 1,
      sym_comment,
  [1178] = 4,
    ACTIONS(153), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 1,
      aux_sym_comment_token1,
    STATE(53), 1,
      sym_comment,
  [1191] = 4,
    ACTIONS(153), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(195), 1,
      sym__eol,
    STATE(54), 1,
      sym_comment,
  [1204] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(197), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      sym_comment,
  [1217] = 4,
    ACTIONS(153), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(199), 1,
      sym__eol,
    STATE(56), 1,
      sym_comment,
  [1230] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(57), 1,
      sym_comment,
  [1243] = 4,
    ACTIONS(153), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(203), 1,
      sym__eol,
    STATE(58), 1,
      sym_comment,
  [1256] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(205), 1,
      aux_sym_object_declarator_token2,
    STATE(59), 1,
      sym_comment,
  [1269] = 4,
    ACTIONS(153), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(207), 1,
      sym__eol,
    STATE(60), 1,
      sym_comment,
  [1282] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      sym_comment,
  [1295] = 4,
    ACTIONS(153), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(211), 1,
      sym__eol,
    STATE(62), 1,
      sym_comment,
  [1308] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(213), 1,
      sym_identifier,
    STATE(63), 1,
      sym_comment,
  [1321] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(215), 1,
      aux_sym_object_declarator_token3,
    STATE(64), 1,
      sym_comment,
  [1334] = 4,
    ACTIONS(153), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(217), 1,
      sym__eol,
    STATE(65), 1,
      sym_comment,
  [1347] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(189), 1,
      aux_sym_move_statement_token2,
    STATE(66), 1,
      sym_comment,
  [1360] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(185), 1,
      aux_sym_move_statement_token2,
    STATE(67), 1,
      sym_comment,
  [1373] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(219), 1,
      aux_sym_move_statement_token2,
    STATE(68), 1,
      sym_comment,
  [1386] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(221), 1,
      sym_identifier,
    STATE(69), 1,
      sym_comment,
  [1399] = 4,
    ACTIONS(153), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      sym__eol,
    STATE(70), 1,
      sym_comment,
  [1412] = 4,
    ACTIONS(153), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(225), 1,
      sym__eol,
    STATE(71), 1,
      sym_comment,
  [1425] = 4,
    ACTIONS(153), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(227), 1,
      sym__eol,
    STATE(72), 1,
      sym_comment,
  [1438] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(229), 1,
      sym_identifier,
    STATE(73), 1,
      sym_comment,
  [1451] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(74), 1,
      sym_comment,
  [1464] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(233), 1,
      sym_identifier,
    STATE(75), 1,
      sym_comment,
  [1477] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(235), 1,
      aux_sym_move_statement_token2,
    STATE(76), 1,
      sym_comment,
  [1490] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(237), 1,
      sym_identifier,
    STATE(77), 1,
      sym_comment,
  [1503] = 1,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 41,
  [SMALL_STATE(11)] = 83,
  [SMALL_STATE(12)] = 125,
  [SMALL_STATE(13)] = 167,
  [SMALL_STATE(14)] = 209,
  [SMALL_STATE(15)] = 251,
  [SMALL_STATE(16)] = 293,
  [SMALL_STATE(17)] = 335,
  [SMALL_STATE(18)] = 377,
  [SMALL_STATE(19)] = 402,
  [SMALL_STATE(20)] = 427,
  [SMALL_STATE(21)] = 452,
  [SMALL_STATE(22)] = 477,
  [SMALL_STATE(23)] = 500,
  [SMALL_STATE(24)] = 523,
  [SMALL_STATE(25)] = 546,
  [SMALL_STATE(26)] = 569,
  [SMALL_STATE(27)] = 592,
  [SMALL_STATE(28)] = 615,
  [SMALL_STATE(29)] = 638,
  [SMALL_STATE(30)] = 661,
  [SMALL_STATE(31)] = 684,
  [SMALL_STATE(32)] = 706,
  [SMALL_STATE(33)] = 728,
  [SMALL_STATE(34)] = 750,
  [SMALL_STATE(35)] = 782,
  [SMALL_STATE(36)] = 804,
  [SMALL_STATE(37)] = 826,
  [SMALL_STATE(38)] = 848,
  [SMALL_STATE(39)] = 870,
  [SMALL_STATE(40)] = 892,
  [SMALL_STATE(41)] = 914,
  [SMALL_STATE(42)] = 946,
  [SMALL_STATE(43)] = 976,
  [SMALL_STATE(44)] = 998,
  [SMALL_STATE(45)] = 1020,
  [SMALL_STATE(46)] = 1042,
  [SMALL_STATE(47)] = 1062,
  [SMALL_STATE(48)] = 1081,
  [SMALL_STATE(49)] = 1104,
  [SMALL_STATE(50)] = 1123,
  [SMALL_STATE(51)] = 1142,
  [SMALL_STATE(52)] = 1165,
  [SMALL_STATE(53)] = 1178,
  [SMALL_STATE(54)] = 1191,
  [SMALL_STATE(55)] = 1204,
  [SMALL_STATE(56)] = 1217,
  [SMALL_STATE(57)] = 1230,
  [SMALL_STATE(58)] = 1243,
  [SMALL_STATE(59)] = 1256,
  [SMALL_STATE(60)] = 1269,
  [SMALL_STATE(61)] = 1282,
  [SMALL_STATE(62)] = 1295,
  [SMALL_STATE(63)] = 1308,
  [SMALL_STATE(64)] = 1321,
  [SMALL_STATE(65)] = 1334,
  [SMALL_STATE(66)] = 1347,
  [SMALL_STATE(67)] = 1360,
  [SMALL_STATE(68)] = 1373,
  [SMALL_STATE(69)] = 1386,
  [SMALL_STATE(70)] = 1399,
  [SMALL_STATE(71)] = 1412,
  [SMALL_STATE(72)] = 1425,
  [SMALL_STATE(73)] = 1438,
  [SMALL_STATE(74)] = 1451,
  [SMALL_STATE(75)] = 1464,
  [SMALL_STATE(76)] = 1477,
  [SMALL_STATE(77)] = 1490,
  [SMALL_STATE(78)] = 1503,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list, 2, 0, 0), SHIFT_REPEAT(50),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list, 2, 0, 0), SHIFT_REPEAT(51),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list, 2, 0, 0), SHIFT_REPEAT(49),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown_command_statement, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown_command_statement, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown_command_statement, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown_command_statement, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_move_statement, 5, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move_statement, 5, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_declarator, 6, 0, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_declarator, 6, 0, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__top_level_code, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_code, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 4, 0, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 4, 0, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, 0, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, 0, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_definition, 5, 0, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_definition, 5, 0, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, 0, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unknown_command_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unknown_command_statement_repeat1, 2, 0, 0),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unknown_command_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unknown_command_statement_repeat1, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unknown_command_statement_repeat1, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unknown_command_statement_repeat1, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [209] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
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
