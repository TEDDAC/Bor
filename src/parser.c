#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_func = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_void = 4,
  anon_sym_bool = 5,
  anon_sym_number = 6,
  anon_sym_string = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_return = 10,
  anon_sym_DASH = 11,
  anon_sym_BANG = 12,
  anon_sym_STAR = 13,
  anon_sym_SLASH = 14,
  anon_sym_PLUS = 15,
  sym_identifier = 16,
  sym_number = 17,
  sym_program = 18,
  sym__definition = 19,
  sym_function_definition = 20,
  sym_parameter_list = 21,
  sym__type = 22,
  sym_primitive_type = 23,
  sym_block = 24,
  sym__statement = 25,
  sym_return_statement = 26,
  sym__expression = 27,
  sym_variable_declaration = 28,
  sym_unary_expression = 29,
  sym_binary_expression = 30,
  aux_sym_program_repeat1 = 31,
  aux_sym_block_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_func] = "func",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_void] = "void",
  [anon_sym_bool] = "bool",
  [anon_sym_number] = "number",
  [anon_sym_string] = "string",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_program] = "program",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym__type] = "_type",
  [sym_primitive_type] = "primitive_type",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [sym_variable_declaration] = "variable_declaration",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_program] = sym_program,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym__type] = sym__type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_code = 1,
  field_left = 2,
  field_name = 3,
  field_operator = 4,
  field_parameters = 5,
  field_right = 6,
  field_type = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_code] = "code",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_right] = "right",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 3},
  [4] = {.index = 7, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operator, 0},
    {field_right, 1},
  [2] =
    {field_name, 1},
    {field_type, 0},
  [4] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [7] =
    {field_code, 4},
    {field_name, 1},
    {field_parameters, 2},
    {field_type, 3},
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
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 8,
  [15] = 7,
  [16] = 10,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 4,
  [21] = 21,
  [22] = 11,
  [23] = 13,
  [24] = 12,
  [25] = 25,
  [26] = 5,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 38,
  [40] = 36,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 'v') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 2:
      if (lookahead == 'b') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(4);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == 'm') ADVANCE(2);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '!') ADVANCE(45);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 'v') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_func);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_void);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_number);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_string);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(34);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(63);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(50);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(54);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(61);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(64);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 27},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 27},
  [4] = {.lex_state = 27},
  [5] = {.lex_state = 27},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 27},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 27},
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
  [33] = {.lex_state = 26},
  [34] = {.lex_state = 26},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 26},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 26},
  [39] = {.lex_state = 26},
  [40] = {.lex_state = 26},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(37),
    [sym__definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_primitive_type] = STATE(36),
    [sym__expression] = STATE(9),
    [sym_variable_declaration] = STATE(9),
    [sym_unary_expression] = STATE(9),
    [sym_binary_expression] = STATE(9),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_func] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_bool] = ACTIONS(7),
    [anon_sym_number] = ACTIONS(7),
    [anon_sym_string] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_primitive_type] = STATE(36),
    [sym__expression] = STATE(9),
    [sym_variable_declaration] = STATE(9),
    [sym_unary_expression] = STATE(9),
    [sym_binary_expression] = STATE(9),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_func] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_bool] = ACTIONS(7),
    [anon_sym_number] = ACTIONS(7),
    [anon_sym_string] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
  },
  [3] = {
    [sym__definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_primitive_type] = STATE(36),
    [sym__expression] = STATE(9),
    [sym_variable_declaration] = STATE(9),
    [sym_unary_expression] = STATE(9),
    [sym_binary_expression] = STATE(9),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_func] = ACTIONS(21),
    [anon_sym_void] = ACTIONS(24),
    [anon_sym_bool] = ACTIONS(24),
    [anon_sym_number] = ACTIONS(24),
    [anon_sym_string] = ACTIONS(24),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(30),
    [sym_identifier] = ACTIONS(33),
    [sym_number] = ACTIONS(36),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(41), 6,
      anon_sym_func,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      sym_identifier,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      sym_number,
  [18] = 2,
    ACTIONS(45), 6,
      anon_sym_func,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      sym_identifier,
    ACTIONS(43), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      sym_number,
  [36] = 7,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_number,
    STATE(40), 1,
      sym_primitive_type,
    ACTIONS(7), 4,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
    STATE(25), 4,
      sym__expression,
      sym_variable_declaration,
      sym_unary_expression,
      sym_binary_expression,
  [64] = 7,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_number,
    STATE(40), 1,
      sym_primitive_type,
    ACTIONS(7), 4,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
    STATE(26), 4,
      sym__expression,
      sym_variable_declaration,
      sym_unary_expression,
      sym_binary_expression,
  [92] = 7,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(59), 1,
      sym_identifier,
    ACTIONS(61), 1,
      sym_number,
    STATE(40), 1,
      sym_primitive_type,
    ACTIONS(7), 4,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
    STATE(24), 4,
      sym__expression,
      sym_variable_declaration,
      sym_unary_expression,
      sym_binary_expression,
  [120] = 4,
    ACTIONS(67), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      anon_sym_BANG,
      sym_number,
    ACTIONS(65), 6,
      anon_sym_func,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      sym_identifier,
  [142] = 7,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      sym_number,
    STATE(36), 1,
      sym_primitive_type,
    ACTIONS(7), 4,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
    STATE(11), 4,
      sym__expression,
      sym_variable_declaration,
      sym_unary_expression,
      sym_binary_expression,
  [170] = 2,
    ACTIONS(41), 6,
      anon_sym_func,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      sym_identifier,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      sym_number,
  [188] = 3,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_PLUS,
      sym_number,
    ACTIONS(45), 6,
      anon_sym_func,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      sym_identifier,
  [208] = 2,
    ACTIONS(77), 6,
      anon_sym_func,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      sym_identifier,
    ACTIONS(75), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      sym_number,
  [226] = 7,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      sym_number,
    STATE(36), 1,
      sym_primitive_type,
    ACTIONS(7), 4,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
    STATE(12), 4,
      sym__expression,
      sym_variable_declaration,
      sym_unary_expression,
      sym_binary_expression,
  [254] = 7,
    ACTIONS(9), 1,
      anon_sym_DASH,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      sym_number,
    STATE(36), 1,
      sym_primitive_type,
    ACTIONS(7), 4,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
    STATE(5), 4,
      sym__expression,
      sym_variable_declaration,
      sym_unary_expression,
      sym_binary_expression,
  [282] = 7,
    ACTIONS(47), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(89), 1,
      sym_number,
    STATE(40), 1,
      sym_primitive_type,
    ACTIONS(7), 4,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
    STATE(22), 4,
      sym__expression,
      sym_variable_declaration,
      sym_unary_expression,
      sym_binary_expression,
  [310] = 2,
    ACTIONS(91), 4,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_number,
    ACTIONS(93), 6,
      anon_sym_func,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      sym_identifier,
  [325] = 2,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_number,
    ACTIONS(97), 6,
      anon_sym_func,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      sym_identifier,
  [340] = 2,
    ACTIONS(99), 4,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_number,
    ACTIONS(101), 6,
      anon_sym_func,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      sym_identifier,
  [355] = 1,
    ACTIONS(39), 6,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [364] = 2,
    STATE(31), 2,
      sym__type,
      sym_primitive_type,
    ACTIONS(103), 4,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
  [375] = 1,
    ACTIONS(39), 6,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [384] = 1,
    ACTIONS(75), 6,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [393] = 2,
    ACTIONS(105), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(43), 4,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_DASH,
      anon_sym_PLUS,
  [404] = 3,
    ACTIONS(105), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(107), 2,
      anon_sym_RBRACE,
      anon_sym_return,
    ACTIONS(109), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [417] = 1,
    ACTIONS(43), 6,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [426] = 3,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    ACTIONS(113), 1,
      anon_sym_return,
    STATE(27), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [438] = 3,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    ACTIONS(118), 1,
      anon_sym_return,
    STATE(29), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [450] = 3,
    ACTIONS(118), 1,
      anon_sym_return,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(27), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [462] = 1,
    ACTIONS(122), 4,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
  [469] = 2,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_block,
  [476] = 2,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_parameter_list,
  [483] = 1,
    ACTIONS(128), 2,
      anon_sym_LBRACE,
      sym_identifier,
  [488] = 1,
    ACTIONS(130), 1,
      sym_identifier,
  [492] = 1,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
  [496] = 1,
    ACTIONS(134), 1,
      sym_identifier,
  [500] = 1,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
  [504] = 1,
    ACTIONS(138), 1,
      sym_identifier,
  [508] = 1,
    ACTIONS(140), 1,
      sym_identifier,
  [512] = 1,
    ACTIONS(142), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 18,
  [SMALL_STATE(6)] = 36,
  [SMALL_STATE(7)] = 64,
  [SMALL_STATE(8)] = 92,
  [SMALL_STATE(9)] = 120,
  [SMALL_STATE(10)] = 142,
  [SMALL_STATE(11)] = 170,
  [SMALL_STATE(12)] = 188,
  [SMALL_STATE(13)] = 208,
  [SMALL_STATE(14)] = 226,
  [SMALL_STATE(15)] = 254,
  [SMALL_STATE(16)] = 282,
  [SMALL_STATE(17)] = 310,
  [SMALL_STATE(18)] = 325,
  [SMALL_STATE(19)] = 340,
  [SMALL_STATE(20)] = 355,
  [SMALL_STATE(21)] = 364,
  [SMALL_STATE(22)] = 375,
  [SMALL_STATE(23)] = 384,
  [SMALL_STATE(24)] = 393,
  [SMALL_STATE(25)] = 404,
  [SMALL_STATE(26)] = 417,
  [SMALL_STATE(27)] = 426,
  [SMALL_STATE(28)] = 438,
  [SMALL_STATE(29)] = 450,
  [SMALL_STATE(30)] = 462,
  [SMALL_STATE(31)] = 469,
  [SMALL_STATE(32)] = 476,
  [SMALL_STATE(33)] = 483,
  [SMALL_STATE(34)] = 488,
  [SMALL_STATE(35)] = 492,
  [SMALL_STATE(36)] = 496,
  [SMALL_STATE(37)] = 500,
  [SMALL_STATE(38)] = 504,
  [SMALL_STATE(39)] = 508,
  [SMALL_STATE(40)] = 512,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(34),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(33),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(10),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(38),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, .production_id = 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 2, .production_id = 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [136] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_BORING_PROGRAMMING_LANGAGE(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
