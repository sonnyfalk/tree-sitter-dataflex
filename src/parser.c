#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_identifier = 1,
  aux_sym_function_definition_token1 = 2,
  aux_sym_function_definition_token2 = 3,
  aux_sym_object_definition_token1 = 4,
  aux_sym_object_definition_token2 = 5,
  aux_sym_object_declarator_token1 = 6,
  aux_sym_object_declarator_token2 = 7,
  aux_sym_object_declarator_token3 = 8,
  aux_sym_move_statement_token1 = 9,
  aux_sym_move_statement_token2 = 10,
  aux_sym_unknown_command_statement_token1 = 11,
  sym_number_literal = 12,
  sym_string_literal = 13,
  sym__eol = 14,
  sym_line_comment = 15,
  anon_sym_SLASH_STAR = 16,
  aux_sym_comment_token1 = 17,
  anon_sym_SLASH = 18,
  sym_source_file = 19,
  sym__top_level_code = 20,
  sym_function_definition = 21,
  sym_object_definition = 22,
  sym_object_declarator = 23,
  aux_sym__statement_list = 24,
  sym__statement = 25,
  sym_move_statement = 26,
  sym_unknown_command_statement = 27,
  sym__expression = 28,
  sym__literal = 29,
  sym_comment = 30,
  aux_sym_source_file_repeat1 = 31,
  aux_sym_unknown_command_statement_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym_function_definition_token1] = "keyword",
  [aux_sym_function_definition_token2] = "keyword",
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
  [7] = 7,
  [8] = 5,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 9,
  [13] = 10,
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
  [27] = 26,
  [28] = 17,
  [29] = 22,
  [30] = 19,
  [31] = 14,
  [32] = 16,
  [33] = 20,
  [34] = 15,
  [35] = 25,
  [36] = 18,
  [37] = 24,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 41,
  [44] = 44,
  [45] = 38,
  [46] = 46,
  [47] = 47,
  [48] = 39,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 46,
  [59] = 59,
  [60] = 60,
  [61] = 57,
  [62] = 54,
  [63] = 52,
  [64] = 60,
  [65] = 59,
  [66] = 66,
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
        'T', 8,
        't', 8,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(aux_sym_object_declarator_token3);
      END_STATE();
    case 2:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_object_declarator_token2);
      END_STATE();
    case 13:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(20);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_move_statement_token2);
      END_STATE();
    case 16:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(27);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_move_statement_token1);
      END_STATE();
    case 25:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_object_declarator_token1);
      END_STATE();
    case 36:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(44);
      END_STATE();
    case 41:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      END_STATE();
    case 42:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_function_definition_token1);
      END_STATE();
    case 44:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(47);
      END_STATE();
    case 45:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 48:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_object_definition_token1);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 51:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_function_definition_token2);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_object_definition_token2);
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
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
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
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_function_definition_token1] = ACTIONS(1),
    [aux_sym_function_definition_token2] = ACTIONS(1),
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
    [sym_source_file] = STATE(51),
    [sym__top_level_code] = STATE(30),
    [sym_function_definition] = STATE(33),
    [sym_object_definition] = STATE(33),
    [sym_object_declarator] = STATE(2),
    [sym__statement] = STATE(33),
    [sym_move_statement] = STATE(31),
    [sym_unknown_command_statement] = STATE(31),
    [sym__expression] = STATE(40),
    [sym__literal] = STATE(39),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_unknown_command_statement_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_definition_token1] = ACTIONS(11),
    [aux_sym_object_declarator_token1] = ACTIONS(13),
    [aux_sym_move_statement_token1] = ACTIONS(15),
    [sym_number_literal] = ACTIONS(17),
    [sym_string_literal] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [2] = {
    [sym__top_level_code] = STATE(19),
    [sym_function_definition] = STATE(20),
    [sym_object_definition] = STATE(20),
    [sym_object_declarator] = STATE(4),
    [sym__statement] = STATE(20),
    [sym_move_statement] = STATE(14),
    [sym_unknown_command_statement] = STATE(14),
    [sym__expression] = STATE(40),
    [sym__literal] = STATE(39),
    [sym_comment] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_unknown_command_statement_repeat1] = STATE(26),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_definition_token1] = ACTIONS(19),
    [aux_sym_object_definition_token1] = ACTIONS(21),
    [aux_sym_object_definition_token2] = ACTIONS(21),
    [aux_sym_object_declarator_token1] = ACTIONS(13),
    [aux_sym_move_statement_token1] = ACTIONS(23),
    [sym_number_literal] = ACTIONS(17),
    [sym_string_literal] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [3] = {
    [sym__top_level_code] = STATE(19),
    [sym_function_definition] = STATE(20),
    [sym_object_definition] = STATE(20),
    [sym_object_declarator] = STATE(4),
    [sym__statement] = STATE(20),
    [sym_move_statement] = STATE(14),
    [sym_unknown_command_statement] = STATE(14),
    [sym__expression] = STATE(40),
    [sym__literal] = STATE(39),
    [sym_comment] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_unknown_command_statement_repeat1] = STATE(26),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_definition_token1] = ACTIONS(19),
    [aux_sym_object_definition_token1] = ACTIONS(25),
    [aux_sym_object_definition_token2] = ACTIONS(25),
    [aux_sym_object_declarator_token1] = ACTIONS(13),
    [aux_sym_move_statement_token1] = ACTIONS(23),
    [sym_number_literal] = ACTIONS(17),
    [sym_string_literal] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [4] = {
    [sym__top_level_code] = STATE(19),
    [sym_function_definition] = STATE(20),
    [sym_object_definition] = STATE(20),
    [sym_object_declarator] = STATE(4),
    [sym__statement] = STATE(20),
    [sym_move_statement] = STATE(14),
    [sym_unknown_command_statement] = STATE(14),
    [sym__expression] = STATE(40),
    [sym__literal] = STATE(39),
    [sym_comment] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_unknown_command_statement_repeat1] = STATE(26),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_definition_token1] = ACTIONS(19),
    [aux_sym_object_definition_token1] = ACTIONS(27),
    [aux_sym_object_definition_token2] = ACTIONS(27),
    [aux_sym_object_declarator_token1] = ACTIONS(13),
    [aux_sym_move_statement_token1] = ACTIONS(23),
    [sym_number_literal] = ACTIONS(17),
    [sym_string_literal] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [5] = {
    [sym__top_level_code] = STATE(19),
    [sym_function_definition] = STATE(20),
    [sym_object_definition] = STATE(20),
    [sym_object_declarator] = STATE(4),
    [sym__statement] = STATE(20),
    [sym_move_statement] = STATE(14),
    [sym_unknown_command_statement] = STATE(14),
    [sym__expression] = STATE(40),
    [sym__literal] = STATE(39),
    [sym_comment] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_unknown_command_statement_repeat1] = STATE(26),
    [sym_identifier] = ACTIONS(29),
    [aux_sym_function_definition_token1] = ACTIONS(32),
    [aux_sym_object_definition_token1] = ACTIONS(35),
    [aux_sym_object_definition_token2] = ACTIONS(35),
    [aux_sym_object_declarator_token1] = ACTIONS(37),
    [aux_sym_move_statement_token1] = ACTIONS(40),
    [sym_number_literal] = ACTIONS(43),
    [sym_string_literal] = ACTIONS(43),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [6] = {
    [sym__top_level_code] = STATE(19),
    [sym_function_definition] = STATE(20),
    [sym_object_definition] = STATE(20),
    [sym_object_declarator] = STATE(4),
    [sym__statement] = STATE(20),
    [sym_move_statement] = STATE(14),
    [sym_unknown_command_statement] = STATE(14),
    [sym__expression] = STATE(40),
    [sym__literal] = STATE(39),
    [sym_comment] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_unknown_command_statement_repeat1] = STATE(26),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_definition_token1] = ACTIONS(19),
    [aux_sym_object_definition_token1] = ACTIONS(46),
    [aux_sym_object_definition_token2] = ACTIONS(46),
    [aux_sym_object_declarator_token1] = ACTIONS(13),
    [aux_sym_move_statement_token1] = ACTIONS(23),
    [sym_number_literal] = ACTIONS(17),
    [sym_string_literal] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [7] = {
    [sym__top_level_code] = STATE(30),
    [sym_function_definition] = STATE(33),
    [sym_object_definition] = STATE(33),
    [sym_object_declarator] = STATE(2),
    [sym__statement] = STATE(33),
    [sym_move_statement] = STATE(31),
    [sym_unknown_command_statement] = STATE(31),
    [sym__expression] = STATE(40),
    [sym__literal] = STATE(39),
    [sym_comment] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_unknown_command_statement_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(48),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_definition_token1] = ACTIONS(11),
    [aux_sym_object_declarator_token1] = ACTIONS(13),
    [aux_sym_move_statement_token1] = ACTIONS(15),
    [sym_number_literal] = ACTIONS(17),
    [sym_string_literal] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [8] = {
    [sym__top_level_code] = STATE(30),
    [sym_function_definition] = STATE(33),
    [sym_object_definition] = STATE(33),
    [sym_object_declarator] = STATE(2),
    [sym__statement] = STATE(33),
    [sym_move_statement] = STATE(31),
    [sym_unknown_command_statement] = STATE(31),
    [sym__expression] = STATE(40),
    [sym__literal] = STATE(39),
    [sym_comment] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_unknown_command_statement_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(50),
    [sym_identifier] = ACTIONS(29),
    [aux_sym_function_definition_token1] = ACTIONS(52),
    [aux_sym_object_declarator_token1] = ACTIONS(37),
    [aux_sym_move_statement_token1] = ACTIONS(55),
    [sym_number_literal] = ACTIONS(43),
    [sym_string_literal] = ACTIONS(43),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(23), 1,
      aux_sym_move_statement_token1,
    ACTIONS(58), 1,
      aux_sym_function_definition_token2,
    STATE(9), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym__statement_list,
    STATE(26), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(39), 1,
      sym__literal,
    STATE(40), 1,
      sym__expression,
    STATE(42), 1,
      sym__statement,
    ACTIONS(17), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(14), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [42] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(23), 1,
      aux_sym_move_statement_token1,
    ACTIONS(60), 1,
      aux_sym_function_definition_token2,
    STATE(10), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__statement_list,
    STATE(26), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(39), 1,
      sym__literal,
    STATE(40), 1,
      sym__expression,
    STATE(42), 1,
      sym__statement,
    ACTIONS(17), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(14), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [84] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(65), 1,
      aux_sym_function_definition_token2,
    ACTIONS(67), 1,
      aux_sym_move_statement_token1,
    STATE(26), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(39), 1,
      sym__literal,
    STATE(40), 1,
      sym__expression,
    STATE(42), 1,
      sym__statement,
    ACTIONS(70), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(11), 2,
      aux_sym__statement_list,
      sym_comment,
    STATE(14), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [124] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(23), 1,
      aux_sym_move_statement_token1,
    ACTIONS(73), 1,
      aux_sym_function_definition_token2,
    STATE(12), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym__statement_list,
    STATE(26), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(39), 1,
      sym__literal,
    STATE(40), 1,
      sym__expression,
    STATE(42), 1,
      sym__statement,
    ACTIONS(17), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(14), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [166] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(23), 1,
      aux_sym_move_statement_token1,
    ACTIONS(75), 1,
      aux_sym_function_definition_token2,
    STATE(11), 1,
      aux_sym__statement_list,
    STATE(13), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(39), 1,
      sym__literal,
    STATE(40), 1,
      sym__expression,
    STATE(42), 1,
      sym__statement,
    ACTIONS(17), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(14), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [208] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(14), 1,
      sym_comment,
    ACTIONS(79), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(77), 7,
      aux_sym_function_definition_token1,
      aux_sym_function_definition_token2,
      aux_sym_object_definition_token1,
      aux_sym_object_definition_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [231] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 1,
      sym_comment,
    ACTIONS(83), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(81), 7,
      aux_sym_function_definition_token1,
      aux_sym_function_definition_token2,
      aux_sym_object_definition_token1,
      aux_sym_object_definition_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [254] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      sym_comment,
    ACTIONS(87), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(85), 7,
      aux_sym_function_definition_token1,
      aux_sym_function_definition_token2,
      aux_sym_object_definition_token1,
      aux_sym_object_definition_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [277] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(17), 1,
      sym_comment,
    ACTIONS(91), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(89), 7,
      aux_sym_function_definition_token1,
      aux_sym_function_definition_token2,
      aux_sym_object_definition_token1,
      aux_sym_object_definition_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [300] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(18), 1,
      sym_comment,
    ACTIONS(95), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(93), 6,
      aux_sym_function_definition_token1,
      aux_sym_object_definition_token1,
      aux_sym_object_definition_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [322] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 1,
      sym_comment,
    ACTIONS(99), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(97), 6,
      aux_sym_function_definition_token1,
      aux_sym_object_definition_token1,
      aux_sym_object_definition_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [344] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 1,
      sym_comment,
    ACTIONS(103), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(101), 6,
      aux_sym_function_definition_token1,
      aux_sym_object_definition_token1,
      aux_sym_object_definition_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [366] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(21), 1,
      sym_comment,
    ACTIONS(107), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(105), 6,
      aux_sym_function_definition_token1,
      aux_sym_object_definition_token1,
      aux_sym_object_definition_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [388] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 1,
      sym_comment,
    ACTIONS(111), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(109), 6,
      aux_sym_function_definition_token1,
      aux_sym_object_definition_token1,
      aux_sym_object_definition_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [410] = 9,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(116), 1,
      aux_sym_unknown_command_statement_token1,
    ACTIONS(121), 1,
      sym__eol,
    ACTIONS(123), 1,
      sym_line_comment,
    ACTIONS(125), 1,
      anon_sym_SLASH_STAR,
    STATE(39), 1,
      sym__literal,
    STATE(40), 1,
      sym__expression,
    ACTIONS(118), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(23), 2,
      sym_comment,
      aux_sym_unknown_command_statement_repeat1,
  [440] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 1,
      sym_comment,
    ACTIONS(129), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(127), 6,
      aux_sym_function_definition_token1,
      aux_sym_object_definition_token1,
      aux_sym_object_definition_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [462] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_comment,
    ACTIONS(133), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(131), 6,
      aux_sym_function_definition_token1,
      aux_sym_object_definition_token1,
      aux_sym_object_definition_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [484] = 10,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym_line_comment,
    ACTIONS(125), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(135), 1,
      aux_sym_unknown_command_statement_token1,
    ACTIONS(139), 1,
      sym__eol,
    STATE(23), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(26), 1,
      sym_comment,
    STATE(39), 1,
      sym__literal,
    STATE(40), 1,
      sym__expression,
    ACTIONS(137), 2,
      sym_number_literal,
      sym_string_literal,
  [516] = 10,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym_line_comment,
    ACTIONS(125), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(141), 1,
      aux_sym_unknown_command_statement_token1,
    ACTIONS(143), 1,
      sym__eol,
    STATE(23), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(27), 1,
      sym_comment,
    STATE(39), 1,
      sym__literal,
    STATE(40), 1,
      sym__expression,
    ACTIONS(137), 2,
      sym_number_literal,
      sym_string_literal,
  [548] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 1,
      sym_comment,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(89), 4,
      aux_sym_function_definition_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [569] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym_comment,
    ACTIONS(111), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(109), 4,
      aux_sym_function_definition_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [590] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_comment,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(97), 4,
      aux_sym_function_definition_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [611] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_comment,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(77), 4,
      aux_sym_function_definition_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [632] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
      sym_comment,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(85), 4,
      aux_sym_function_definition_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [653] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 1,
      sym_comment,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(101), 4,
      aux_sym_function_definition_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [674] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 1,
      sym_comment,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(81), 4,
      aux_sym_function_definition_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [695] = 5,
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
    ACTIONS(131), 4,
      aux_sym_function_definition_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [716] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 1,
      sym_comment,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(93), 4,
      aux_sym_function_definition_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [737] = 5,
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
    ACTIONS(127), 4,
      aux_sym_function_definition_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [758] = 5,
    ACTIONS(123), 1,
      sym_line_comment,
    ACTIONS(125), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(147), 1,
      sym__eol,
    STATE(38), 1,
      sym_comment,
    ACTIONS(145), 4,
      aux_sym_unknown_command_statement_token1,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
  [777] = 5,
    ACTIONS(123), 1,
      sym_line_comment,
    ACTIONS(125), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(151), 1,
      sym__eol,
    STATE(39), 1,
      sym_comment,
    ACTIONS(149), 4,
      aux_sym_unknown_command_statement_token1,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
  [796] = 5,
    ACTIONS(123), 1,
      sym_line_comment,
    ACTIONS(125), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(155), 1,
      sym__eol,
    STATE(40), 1,
      sym_comment,
    ACTIONS(153), 4,
      aux_sym_unknown_command_statement_token1,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
  [815] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(41), 1,
      sym_comment,
    STATE(48), 1,
      sym__literal,
    STATE(59), 1,
      sym__expression,
    ACTIONS(159), 2,
      sym_number_literal,
      sym_string_literal,
  [838] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 1,
      sym_comment,
    ACTIONS(163), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(161), 3,
      aux_sym_function_definition_token2,
      aux_sym_move_statement_token1,
      sym_identifier,
  [857] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(157), 1,
      sym_identifier,
    STATE(43), 1,
      sym_comment,
    STATE(48), 1,
      sym__literal,
    STATE(65), 1,
      sym__expression,
    ACTIONS(159), 2,
      sym_number_literal,
      sym_string_literal,
  [880] = 4,
    ACTIONS(123), 1,
      sym_line_comment,
    ACTIONS(125), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      sym__eol,
    STATE(44), 1,
      sym_comment,
  [893] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(147), 1,
      aux_sym_move_statement_token2,
    STATE(45), 1,
      sym_comment,
  [906] = 4,
    ACTIONS(123), 1,
      sym_line_comment,
    ACTIONS(125), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(167), 1,
      sym__eol,
    STATE(46), 1,
      sym_comment,
  [919] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(169), 1,
      sym_identifier,
    STATE(47), 1,
      sym_comment,
  [932] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(151), 1,
      aux_sym_move_statement_token2,
    STATE(48), 1,
      sym_comment,
  [945] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(171), 1,
      aux_sym_object_declarator_token3,
    STATE(49), 1,
      sym_comment,
  [958] = 4,
    ACTIONS(123), 1,
      sym_line_comment,
    ACTIONS(125), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(173), 1,
      aux_sym_comment_token1,
    STATE(50), 1,
      sym_comment,
  [971] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      sym_comment,
  [984] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(52), 1,
      sym_comment,
  [997] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(179), 1,
      anon_sym_SLASH,
    STATE(53), 1,
      sym_comment,
  [1010] = 4,
    ACTIONS(123), 1,
      sym_line_comment,
    ACTIONS(125), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(181), 1,
      sym__eol,
    STATE(54), 1,
      sym_comment,
  [1023] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(183), 1,
      aux_sym_object_declarator_token2,
    STATE(55), 1,
      sym_comment,
  [1036] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(185), 1,
      sym_identifier,
    STATE(56), 1,
      sym_comment,
  [1049] = 4,
    ACTIONS(123), 1,
      sym_line_comment,
    ACTIONS(125), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(187), 1,
      sym__eol,
    STATE(57), 1,
      sym_comment,
  [1062] = 4,
    ACTIONS(123), 1,
      sym_line_comment,
    ACTIONS(125), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(189), 1,
      sym__eol,
    STATE(58), 1,
      sym_comment,
  [1075] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(191), 1,
      aux_sym_move_statement_token2,
    STATE(59), 1,
      sym_comment,
  [1088] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(60), 1,
      sym_comment,
  [1101] = 4,
    ACTIONS(123), 1,
      sym_line_comment,
    ACTIONS(125), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(195), 1,
      sym__eol,
    STATE(61), 1,
      sym_comment,
  [1114] = 4,
    ACTIONS(123), 1,
      sym_line_comment,
    ACTIONS(125), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(197), 1,
      sym__eol,
    STATE(62), 1,
      sym_comment,
  [1127] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(63), 1,
      sym_comment,
  [1140] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(64), 1,
      sym_comment,
  [1153] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(203), 1,
      aux_sym_move_statement_token2,
    STATE(65), 1,
      sym_comment,
  [1166] = 1,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 42,
  [SMALL_STATE(11)] = 84,
  [SMALL_STATE(12)] = 124,
  [SMALL_STATE(13)] = 166,
  [SMALL_STATE(14)] = 208,
  [SMALL_STATE(15)] = 231,
  [SMALL_STATE(16)] = 254,
  [SMALL_STATE(17)] = 277,
  [SMALL_STATE(18)] = 300,
  [SMALL_STATE(19)] = 322,
  [SMALL_STATE(20)] = 344,
  [SMALL_STATE(21)] = 366,
  [SMALL_STATE(22)] = 388,
  [SMALL_STATE(23)] = 410,
  [SMALL_STATE(24)] = 440,
  [SMALL_STATE(25)] = 462,
  [SMALL_STATE(26)] = 484,
  [SMALL_STATE(27)] = 516,
  [SMALL_STATE(28)] = 548,
  [SMALL_STATE(29)] = 569,
  [SMALL_STATE(30)] = 590,
  [SMALL_STATE(31)] = 611,
  [SMALL_STATE(32)] = 632,
  [SMALL_STATE(33)] = 653,
  [SMALL_STATE(34)] = 674,
  [SMALL_STATE(35)] = 695,
  [SMALL_STATE(36)] = 716,
  [SMALL_STATE(37)] = 737,
  [SMALL_STATE(38)] = 758,
  [SMALL_STATE(39)] = 777,
  [SMALL_STATE(40)] = 796,
  [SMALL_STATE(41)] = 815,
  [SMALL_STATE(42)] = 838,
  [SMALL_STATE(43)] = 857,
  [SMALL_STATE(44)] = 880,
  [SMALL_STATE(45)] = 893,
  [SMALL_STATE(46)] = 906,
  [SMALL_STATE(47)] = 919,
  [SMALL_STATE(48)] = 932,
  [SMALL_STATE(49)] = 945,
  [SMALL_STATE(50)] = 958,
  [SMALL_STATE(51)] = 971,
  [SMALL_STATE(52)] = 984,
  [SMALL_STATE(53)] = 997,
  [SMALL_STATE(54)] = 1010,
  [SMALL_STATE(55)] = 1023,
  [SMALL_STATE(56)] = 1036,
  [SMALL_STATE(57)] = 1049,
  [SMALL_STATE(58)] = 1062,
  [SMALL_STATE(59)] = 1075,
  [SMALL_STATE(60)] = 1088,
  [SMALL_STATE(61)] = 1101,
  [SMALL_STATE(62)] = 1114,
  [SMALL_STATE(63)] = 1127,
  [SMALL_STATE(64)] = 1140,
  [SMALL_STATE(65)] = 1153,
  [SMALL_STATE(66)] = 1166,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list, 2, 0, 0), SHIFT_REPEAT(39),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list, 2, 0, 0), SHIFT_REPEAT(43),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list, 2, 0, 0), SHIFT_REPEAT(38),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown_command_statement, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown_command_statement, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown_command_statement, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown_command_statement, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_move_statement, 5, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move_statement, 5, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__top_level_code, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_code, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_declarator, 6, 0, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_declarator, 6, 0, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_definition, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 2, 0, 0),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unknown_command_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unknown_command_statement_repeat1, 2, 0, 0),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unknown_command_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unknown_command_statement_repeat1, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, 0, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, 0, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, 0, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unknown_command_statement_repeat1, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unknown_command_statement_repeat1, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [175] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
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
