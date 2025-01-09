#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  sym_identifier = 1,
  aux_sym_function_declaration_token1 = 2,
  aux_sym_function_declaration_token2 = 3,
  aux_sym_object_declaration_token1 = 4,
  aux_sym_object_declaration_token2 = 5,
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
  sym__declaration = 21,
  sym_function_declaration = 22,
  sym_object_declaration = 23,
  sym_object_declarator = 24,
  aux_sym__statement_list = 25,
  sym__statement = 26,
  sym_move_statement = 27,
  sym_unknown_command_statement = 28,
  sym__expression = 29,
  sym__literal = 30,
  sym_comment = 31,
  aux_sym_source_file_repeat1 = 32,
  aux_sym_unknown_command_statement_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym_function_declaration_token1] = "keyword",
  [aux_sym_function_declaration_token2] = "keyword",
  [aux_sym_object_declaration_token1] = "keyword",
  [aux_sym_object_declaration_token2] = "keyword",
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
  [sym__declaration] = "_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_object_declaration] = "object_declaration",
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
  [aux_sym_function_declaration_token1] = aux_sym_function_declaration_token1,
  [aux_sym_function_declaration_token2] = aux_sym_function_declaration_token1,
  [aux_sym_object_declaration_token1] = aux_sym_function_declaration_token1,
  [aux_sym_object_declaration_token2] = aux_sym_function_declaration_token1,
  [aux_sym_object_declarator_token1] = aux_sym_function_declaration_token1,
  [aux_sym_object_declarator_token2] = aux_sym_function_declaration_token1,
  [aux_sym_object_declarator_token3] = aux_sym_function_declaration_token1,
  [aux_sym_move_statement_token1] = aux_sym_function_declaration_token1,
  [aux_sym_move_statement_token2] = aux_sym_function_declaration_token1,
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
  [sym__declaration] = sym__declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym_object_declaration] = sym_object_declaration,
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
  [aux_sym_function_declaration_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_function_declaration_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_object_declaration_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_object_declaration_token2] = {
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
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_object_declaration] = {
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
  [5] = 3,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 9,
  [10] = 10,
  [11] = 10,
  [12] = 12,
  [13] = 9,
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
  [26] = 19,
  [27] = 27,
  [28] = 28,
  [29] = 24,
  [30] = 28,
  [31] = 27,
  [32] = 17,
  [33] = 23,
  [34] = 15,
  [35] = 21,
  [36] = 22,
  [37] = 16,
  [38] = 14,
  [39] = 25,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 41,
  [46] = 42,
  [47] = 47,
  [48] = 48,
  [49] = 40,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 47,
  [61] = 61,
  [62] = 62,
  [63] = 58,
  [64] = 55,
  [65] = 52,
  [66] = 54,
  [67] = 59,
  [68] = 68,
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
      ACCEPT_TOKEN(aux_sym_function_declaration_token1);
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
      ACCEPT_TOKEN(aux_sym_object_declaration_token1);
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
      ACCEPT_TOKEN(aux_sym_function_declaration_token2);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_object_declaration_token2);
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
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
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
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_function_declaration_token1] = ACTIONS(1),
    [aux_sym_function_declaration_token2] = ACTIONS(1),
    [aux_sym_object_declaration_token1] = ACTIONS(1),
    [aux_sym_object_declaration_token2] = ACTIONS(1),
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
    [sym__top_level_code] = STATE(35),
    [sym__declaration] = STATE(36),
    [sym_function_declaration] = STATE(30),
    [sym_object_declaration] = STATE(30),
    [sym_object_declarator] = STATE(4),
    [sym__statement] = STATE(36),
    [sym_move_statement] = STATE(37),
    [sym_unknown_command_statement] = STATE(37),
    [sym__expression] = STATE(43),
    [sym__literal] = STATE(42),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_unknown_command_statement_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_declaration_token1] = ACTIONS(11),
    [aux_sym_object_declarator_token1] = ACTIONS(13),
    [aux_sym_move_statement_token1] = ACTIONS(15),
    [sym_number_literal] = ACTIONS(17),
    [sym_string_literal] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [2] = {
    [sym__top_level_code] = STATE(21),
    [sym__declaration] = STATE(22),
    [sym_function_declaration] = STATE(28),
    [sym_object_declaration] = STATE(28),
    [sym_object_declarator] = STATE(2),
    [sym__statement] = STATE(22),
    [sym_move_statement] = STATE(16),
    [sym_unknown_command_statement] = STATE(16),
    [sym__expression] = STATE(43),
    [sym__literal] = STATE(42),
    [sym_comment] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_unknown_command_statement_repeat1] = STATE(26),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_declaration_token1] = ACTIONS(19),
    [aux_sym_object_declaration_token1] = ACTIONS(21),
    [aux_sym_object_declaration_token2] = ACTIONS(21),
    [aux_sym_object_declarator_token1] = ACTIONS(13),
    [aux_sym_move_statement_token1] = ACTIONS(23),
    [sym_number_literal] = ACTIONS(17),
    [sym_string_literal] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [3] = {
    [sym__top_level_code] = STATE(21),
    [sym__declaration] = STATE(22),
    [sym_function_declaration] = STATE(28),
    [sym_object_declaration] = STATE(28),
    [sym_object_declarator] = STATE(2),
    [sym__statement] = STATE(22),
    [sym_move_statement] = STATE(16),
    [sym_unknown_command_statement] = STATE(16),
    [sym__expression] = STATE(43),
    [sym__literal] = STATE(42),
    [sym_comment] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_unknown_command_statement_repeat1] = STATE(26),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_declaration_token1] = ACTIONS(19),
    [aux_sym_object_declaration_token1] = ACTIONS(25),
    [aux_sym_object_declaration_token2] = ACTIONS(25),
    [aux_sym_object_declarator_token1] = ACTIONS(13),
    [aux_sym_move_statement_token1] = ACTIONS(23),
    [sym_number_literal] = ACTIONS(17),
    [sym_string_literal] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [4] = {
    [sym__top_level_code] = STATE(21),
    [sym__declaration] = STATE(22),
    [sym_function_declaration] = STATE(28),
    [sym_object_declaration] = STATE(28),
    [sym_object_declarator] = STATE(2),
    [sym__statement] = STATE(22),
    [sym_move_statement] = STATE(16),
    [sym_unknown_command_statement] = STATE(16),
    [sym__expression] = STATE(43),
    [sym__literal] = STATE(42),
    [sym_comment] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_unknown_command_statement_repeat1] = STATE(26),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_declaration_token1] = ACTIONS(19),
    [aux_sym_object_declaration_token1] = ACTIONS(27),
    [aux_sym_object_declaration_token2] = ACTIONS(27),
    [aux_sym_object_declarator_token1] = ACTIONS(13),
    [aux_sym_move_statement_token1] = ACTIONS(23),
    [sym_number_literal] = ACTIONS(17),
    [sym_string_literal] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [5] = {
    [sym__top_level_code] = STATE(21),
    [sym__declaration] = STATE(22),
    [sym_function_declaration] = STATE(28),
    [sym_object_declaration] = STATE(28),
    [sym_object_declarator] = STATE(2),
    [sym__statement] = STATE(22),
    [sym_move_statement] = STATE(16),
    [sym_unknown_command_statement] = STATE(16),
    [sym__expression] = STATE(43),
    [sym__literal] = STATE(42),
    [sym_comment] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_unknown_command_statement_repeat1] = STATE(26),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_declaration_token1] = ACTIONS(19),
    [aux_sym_object_declaration_token1] = ACTIONS(29),
    [aux_sym_object_declaration_token2] = ACTIONS(29),
    [aux_sym_object_declarator_token1] = ACTIONS(13),
    [aux_sym_move_statement_token1] = ACTIONS(23),
    [sym_number_literal] = ACTIONS(17),
    [sym_string_literal] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [6] = {
    [sym__top_level_code] = STATE(21),
    [sym__declaration] = STATE(22),
    [sym_function_declaration] = STATE(28),
    [sym_object_declaration] = STATE(28),
    [sym_object_declarator] = STATE(2),
    [sym__statement] = STATE(22),
    [sym_move_statement] = STATE(16),
    [sym_unknown_command_statement] = STATE(16),
    [sym__expression] = STATE(43),
    [sym__literal] = STATE(42),
    [sym_comment] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_unknown_command_statement_repeat1] = STATE(26),
    [sym_identifier] = ACTIONS(31),
    [aux_sym_function_declaration_token1] = ACTIONS(34),
    [aux_sym_object_declaration_token1] = ACTIONS(37),
    [aux_sym_object_declaration_token2] = ACTIONS(37),
    [aux_sym_object_declarator_token1] = ACTIONS(39),
    [aux_sym_move_statement_token1] = ACTIONS(42),
    [sym_number_literal] = ACTIONS(45),
    [sym_string_literal] = ACTIONS(45),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [7] = {
    [sym__top_level_code] = STATE(35),
    [sym__declaration] = STATE(36),
    [sym_function_declaration] = STATE(30),
    [sym_object_declaration] = STATE(30),
    [sym_object_declarator] = STATE(4),
    [sym__statement] = STATE(36),
    [sym_move_statement] = STATE(37),
    [sym_unknown_command_statement] = STATE(37),
    [sym__expression] = STATE(43),
    [sym__literal] = STATE(42),
    [sym_comment] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_unknown_command_statement_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(48),
    [sym_identifier] = ACTIONS(9),
    [aux_sym_function_declaration_token1] = ACTIONS(11),
    [aux_sym_object_declarator_token1] = ACTIONS(13),
    [aux_sym_move_statement_token1] = ACTIONS(15),
    [sym_number_literal] = ACTIONS(17),
    [sym_string_literal] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [8] = {
    [sym__top_level_code] = STATE(35),
    [sym__declaration] = STATE(36),
    [sym_function_declaration] = STATE(30),
    [sym_object_declaration] = STATE(30),
    [sym_object_declarator] = STATE(4),
    [sym__statement] = STATE(36),
    [sym_move_statement] = STATE(37),
    [sym_unknown_command_statement] = STATE(37),
    [sym__expression] = STATE(43),
    [sym__literal] = STATE(42),
    [sym_comment] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_unknown_command_statement_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(50),
    [sym_identifier] = ACTIONS(31),
    [aux_sym_function_declaration_token1] = ACTIONS(52),
    [aux_sym_object_declarator_token1] = ACTIONS(39),
    [aux_sym_move_statement_token1] = ACTIONS(55),
    [sym_number_literal] = ACTIONS(45),
    [sym_string_literal] = ACTIONS(45),
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
      aux_sym_function_declaration_token2,
    STATE(9), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym__statement_list,
    STATE(26), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(42), 1,
      sym__literal,
    STATE(43), 1,
      sym__expression,
    STATE(44), 1,
      sym__statement,
    ACTIONS(17), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(16), 2,
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
      aux_sym_function_declaration_token2,
    STATE(10), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym__statement_list,
    STATE(26), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(42), 1,
      sym__literal,
    STATE(43), 1,
      sym__expression,
    STATE(44), 1,
      sym__statement,
    ACTIONS(17), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(16), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [84] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(23), 1,
      aux_sym_move_statement_token1,
    ACTIONS(62), 1,
      aux_sym_function_declaration_token2,
    STATE(11), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym__statement_list,
    STATE(26), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(42), 1,
      sym__literal,
    STATE(43), 1,
      sym__expression,
    STATE(44), 1,
      sym__statement,
    ACTIONS(17), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(16), 2,
      sym_move_statement,
      sym_unknown_command_statement,
  [126] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(67), 1,
      aux_sym_function_declaration_token2,
    ACTIONS(69), 1,
      aux_sym_move_statement_token1,
    STATE(26), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(42), 1,
      sym__literal,
    STATE(43), 1,
      sym__expression,
    STATE(44), 1,
      sym__statement,
    ACTIONS(72), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(12), 2,
      aux_sym__statement_list,
      sym_comment,
    STATE(16), 2,
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
      aux_sym_function_declaration_token2,
    STATE(10), 1,
      aux_sym__statement_list,
    STATE(13), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(42), 1,
      sym__literal,
    STATE(43), 1,
      sym__expression,
    STATE(44), 1,
      sym__statement,
    ACTIONS(17), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(16), 2,
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
      aux_sym_function_declaration_token1,
      aux_sym_function_declaration_token2,
      aux_sym_object_declaration_token1,
      aux_sym_object_declaration_token2,
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
      aux_sym_function_declaration_token1,
      aux_sym_function_declaration_token2,
      aux_sym_object_declaration_token1,
      aux_sym_object_declaration_token2,
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
      aux_sym_function_declaration_token1,
      aux_sym_function_declaration_token2,
      aux_sym_object_declaration_token1,
      aux_sym_object_declaration_token2,
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
      aux_sym_function_declaration_token1,
      aux_sym_function_declaration_token2,
      aux_sym_object_declaration_token1,
      aux_sym_object_declaration_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [300] = 9,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(96), 1,
      aux_sym_unknown_command_statement_token1,
    ACTIONS(101), 1,
      sym__eol,
    ACTIONS(103), 1,
      sym_line_comment,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 1,
      sym__literal,
    STATE(43), 1,
      sym__expression,
    ACTIONS(98), 2,
      sym_number_literal,
      sym_string_literal,
    STATE(18), 2,
      sym_comment,
      aux_sym_unknown_command_statement_repeat1,
  [330] = 10,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(103), 1,
      sym_line_comment,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(107), 1,
      aux_sym_unknown_command_statement_token1,
    ACTIONS(111), 1,
      sym__eol,
    STATE(18), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(19), 1,
      sym_comment,
    STATE(42), 1,
      sym__literal,
    STATE(43), 1,
      sym__expression,
    ACTIONS(109), 2,
      sym_number_literal,
      sym_string_literal,
  [362] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 1,
      sym_comment,
    ACTIONS(115), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(113), 6,
      aux_sym_function_declaration_token1,
      aux_sym_object_declaration_token1,
      aux_sym_object_declaration_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [384] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(21), 1,
      sym_comment,
    ACTIONS(119), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(117), 6,
      aux_sym_function_declaration_token1,
      aux_sym_object_declaration_token1,
      aux_sym_object_declaration_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [406] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 1,
      sym_comment,
    ACTIONS(123), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(121), 6,
      aux_sym_function_declaration_token1,
      aux_sym_object_declaration_token1,
      aux_sym_object_declaration_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [428] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
    ACTIONS(127), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(125), 6,
      aux_sym_function_declaration_token1,
      aux_sym_object_declaration_token1,
      aux_sym_object_declaration_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [450] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 1,
      sym_comment,
    ACTIONS(131), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(129), 6,
      aux_sym_function_declaration_token1,
      aux_sym_object_declaration_token1,
      aux_sym_object_declaration_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [472] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_comment,
    ACTIONS(135), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(133), 6,
      aux_sym_function_declaration_token1,
      aux_sym_object_declaration_token1,
      aux_sym_object_declaration_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [494] = 10,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(103), 1,
      sym_line_comment,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      aux_sym_unknown_command_statement_token1,
    ACTIONS(139), 1,
      sym__eol,
    STATE(18), 1,
      aux_sym_unknown_command_statement_repeat1,
    STATE(26), 1,
      sym_comment,
    STATE(42), 1,
      sym__literal,
    STATE(43), 1,
      sym__expression,
    ACTIONS(109), 2,
      sym_number_literal,
      sym_string_literal,
  [526] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 1,
      sym_comment,
    ACTIONS(143), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(141), 6,
      aux_sym_function_declaration_token1,
      aux_sym_object_declaration_token1,
      aux_sym_object_declaration_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [548] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 1,
      sym_comment,
    ACTIONS(147), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(145), 6,
      aux_sym_function_declaration_token1,
      aux_sym_object_declaration_token1,
      aux_sym_object_declaration_token2,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [570] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym_comment,
    ACTIONS(131), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(129), 4,
      aux_sym_function_declaration_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [591] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_comment,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(145), 4,
      aux_sym_function_declaration_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [612] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_comment,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(141), 4,
      aux_sym_function_declaration_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [633] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
      sym_comment,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(89), 4,
      aux_sym_function_declaration_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [654] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 1,
      sym_comment,
    ACTIONS(127), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(125), 4,
      aux_sym_function_declaration_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [675] = 5,
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
      aux_sym_function_declaration_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [696] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
      sym_comment,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(117), 4,
      aux_sym_function_declaration_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [717] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 1,
      sym_comment,
    ACTIONS(123), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(121), 4,
      aux_sym_function_declaration_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [738] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 1,
      sym_comment,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(85), 4,
      aux_sym_function_declaration_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [759] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 1,
      sym_comment,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(77), 4,
      aux_sym_function_declaration_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [780] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(39), 1,
      sym_comment,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(133), 4,
      aux_sym_function_declaration_token1,
      aux_sym_object_declarator_token1,
      aux_sym_move_statement_token1,
      sym_identifier,
  [801] = 5,
    ACTIONS(103), 1,
      sym_line_comment,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(151), 1,
      sym__eol,
    STATE(40), 1,
      sym_comment,
    ACTIONS(149), 4,
      aux_sym_unknown_command_statement_token1,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
  [820] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(41), 1,
      sym_comment,
    STATE(46), 1,
      sym__literal,
    STATE(59), 1,
      sym__expression,
    ACTIONS(155), 2,
      sym_number_literal,
      sym_string_literal,
  [843] = 5,
    ACTIONS(103), 1,
      sym_line_comment,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(159), 1,
      sym__eol,
    STATE(42), 1,
      sym_comment,
    ACTIONS(157), 4,
      aux_sym_unknown_command_statement_token1,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
  [862] = 5,
    ACTIONS(103), 1,
      sym_line_comment,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 1,
      sym__eol,
    STATE(43), 1,
      sym_comment,
    ACTIONS(161), 4,
      aux_sym_unknown_command_statement_token1,
      sym_identifier,
      sym_number_literal,
      sym_string_literal,
  [881] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(44), 1,
      sym_comment,
    ACTIONS(167), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(165), 3,
      aux_sym_function_declaration_token2,
      aux_sym_move_statement_token1,
      sym_identifier,
  [900] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(45), 1,
      sym_comment,
    STATE(46), 1,
      sym__literal,
    STATE(67), 1,
      sym__expression,
    ACTIONS(155), 2,
      sym_number_literal,
      sym_string_literal,
  [923] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(159), 1,
      aux_sym_move_statement_token2,
    STATE(46), 1,
      sym_comment,
  [936] = 4,
    ACTIONS(103), 1,
      sym_line_comment,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(169), 1,
      sym__eol,
    STATE(47), 1,
      sym_comment,
  [949] = 4,
    ACTIONS(103), 1,
      sym_line_comment,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(171), 1,
      aux_sym_comment_token1,
    STATE(48), 1,
      sym_comment,
  [962] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(151), 1,
      aux_sym_move_statement_token2,
    STATE(49), 1,
      sym_comment,
  [975] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(173), 1,
      aux_sym_object_declarator_token3,
    STATE(50), 1,
      sym_comment,
  [988] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      sym_comment,
  [1001] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(52), 1,
      sym_comment,
  [1014] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(179), 1,
      anon_sym_SLASH,
    STATE(53), 1,
      sym_comment,
  [1027] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(181), 1,
      sym_identifier,
    STATE(54), 1,
      sym_comment,
  [1040] = 4,
    ACTIONS(103), 1,
      sym_line_comment,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(183), 1,
      sym__eol,
    STATE(55), 1,
      sym_comment,
  [1053] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(185), 1,
      aux_sym_object_declarator_token2,
    STATE(56), 1,
      sym_comment,
  [1066] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(187), 1,
      sym_identifier,
    STATE(57), 1,
      sym_comment,
  [1079] = 4,
    ACTIONS(103), 1,
      sym_line_comment,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(189), 1,
      sym__eol,
    STATE(58), 1,
      sym_comment,
  [1092] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(191), 1,
      aux_sym_move_statement_token2,
    STATE(59), 1,
      sym_comment,
  [1105] = 4,
    ACTIONS(103), 1,
      sym_line_comment,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 1,
      sym__eol,
    STATE(60), 1,
      sym_comment,
  [1118] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(61), 1,
      sym_comment,
  [1131] = 4,
    ACTIONS(103), 1,
      sym_line_comment,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(197), 1,
      sym__eol,
    STATE(62), 1,
      sym_comment,
  [1144] = 4,
    ACTIONS(103), 1,
      sym_line_comment,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(199), 1,
      sym__eol,
    STATE(63), 1,
      sym_comment,
  [1157] = 4,
    ACTIONS(103), 1,
      sym_line_comment,
    ACTIONS(105), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(201), 1,
      sym__eol,
    STATE(64), 1,
      sym_comment,
  [1170] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(203), 1,
      sym_identifier,
    STATE(65), 1,
      sym_comment,
  [1183] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(66), 1,
      sym_comment,
  [1196] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(207), 1,
      aux_sym_move_statement_token2,
    STATE(67), 1,
      sym_comment,
  [1209] = 1,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 42,
  [SMALL_STATE(11)] = 84,
  [SMALL_STATE(12)] = 126,
  [SMALL_STATE(13)] = 166,
  [SMALL_STATE(14)] = 208,
  [SMALL_STATE(15)] = 231,
  [SMALL_STATE(16)] = 254,
  [SMALL_STATE(17)] = 277,
  [SMALL_STATE(18)] = 300,
  [SMALL_STATE(19)] = 330,
  [SMALL_STATE(20)] = 362,
  [SMALL_STATE(21)] = 384,
  [SMALL_STATE(22)] = 406,
  [SMALL_STATE(23)] = 428,
  [SMALL_STATE(24)] = 450,
  [SMALL_STATE(25)] = 472,
  [SMALL_STATE(26)] = 494,
  [SMALL_STATE(27)] = 526,
  [SMALL_STATE(28)] = 548,
  [SMALL_STATE(29)] = 570,
  [SMALL_STATE(30)] = 591,
  [SMALL_STATE(31)] = 612,
  [SMALL_STATE(32)] = 633,
  [SMALL_STATE(33)] = 654,
  [SMALL_STATE(34)] = 675,
  [SMALL_STATE(35)] = 696,
  [SMALL_STATE(36)] = 717,
  [SMALL_STATE(37)] = 738,
  [SMALL_STATE(38)] = 759,
  [SMALL_STATE(39)] = 780,
  [SMALL_STATE(40)] = 801,
  [SMALL_STATE(41)] = 820,
  [SMALL_STATE(42)] = 843,
  [SMALL_STATE(43)] = 862,
  [SMALL_STATE(44)] = 881,
  [SMALL_STATE(45)] = 900,
  [SMALL_STATE(46)] = 923,
  [SMALL_STATE(47)] = 936,
  [SMALL_STATE(48)] = 949,
  [SMALL_STATE(49)] = 962,
  [SMALL_STATE(50)] = 975,
  [SMALL_STATE(51)] = 988,
  [SMALL_STATE(52)] = 1001,
  [SMALL_STATE(53)] = 1014,
  [SMALL_STATE(54)] = 1027,
  [SMALL_STATE(55)] = 1040,
  [SMALL_STATE(56)] = 1053,
  [SMALL_STATE(57)] = 1066,
  [SMALL_STATE(58)] = 1079,
  [SMALL_STATE(59)] = 1092,
  [SMALL_STATE(60)] = 1105,
  [SMALL_STATE(61)] = 1118,
  [SMALL_STATE(62)] = 1131,
  [SMALL_STATE(63)] = 1144,
  [SMALL_STATE(64)] = 1157,
  [SMALL_STATE(65)] = 1170,
  [SMALL_STATE(66)] = 1183,
  [SMALL_STATE(67)] = 1196,
  [SMALL_STATE(68)] = 1209,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list, 2, 0, 0), SHIFT_REPEAT(42),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_list, 2, 0, 0), SHIFT_REPEAT(45),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list, 2, 0, 0), SHIFT_REPEAT(40),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_move_statement, 5, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move_statement, 5, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown_command_statement, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown_command_statement, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unknown_command_statement, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown_command_statement, 3, 0, 0),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unknown_command_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unknown_command_statement_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unknown_command_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unknown_command_statement_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_declarator, 6, 0, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_declarator, 6, 0, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__top_level_code, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_code, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, 0, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, 0, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 5, 0, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, 0, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_declaration, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_declaration, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_declaration, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_declaration, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__declaration, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unknown_command_statement_repeat1, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unknown_command_statement_repeat1, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [175] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
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
