#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

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
  anon_sym_EQ = 11,
  anon_sym_DASH = 12,
  anon_sym_BANG = 13,
  anon_sym_STAR = 14,
  anon_sym_SLASH = 15,
  anon_sym_PLUS = 16,
  sym_identifier = 17,
  sym_number = 18,
  sym_string = 19,
  sym_program = 20,
  sym__definition = 21,
  sym_function_definition = 22,
  sym_parameter_list = 23,
  sym__type = 24,
  sym_primitive_type = 25,
  sym_block = 26,
  sym_return_statement = 27,
  sym__expression = 28,
  sym_variable_declaration = 29,
  sym_variable_definition = 30,
  sym_unary_expression = 31,
  sym_binary_expression = 32,
  aux_sym_program_repeat1 = 33,
  aux_sym_block_repeat1 = 34,
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
  [anon_sym_EQ] = "=",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_program] = "program",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym__type] = "_type",
  [sym_primitive_type] = "primitive_type",
  [sym_block] = "block",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [sym_variable_declaration] = "variable_declaration",
  [sym_variable_definition] = "variable_definition",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_program] = sym_program,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym__type] = sym__type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_block] = sym_block,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_variable_definition] = sym_variable_definition,
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
  [anon_sym_EQ] = {
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
  [sym_string] = {
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
  [sym_variable_definition] = {
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
  field_value = 8,
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
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 3},
  [5] = {.index = 9, .length = 1},
  [6] = {.index = 10, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_operator, 0},
    {field_right, 1},
  [2] =
    {field_name, 1},
    {field_type, 0},
  [4] =
    {field_name, 0},
    {field_value, 2},
  [6] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [9] =
    {field_value, 2},
  [10] =
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
  [11] = 7,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 10,
  [16] = 9,
  [17] = 8,
  [18] = 12,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 19,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 21,
  [29] = 20,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 25,
  [34] = 34,
  [35] = 22,
  [36] = 27,
  [37] = 30,
  [38] = 32,
  [39] = 31,
  [40] = 26,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 53,
  [55] = 49,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == 'b') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == 'v') ADVANCE(55);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(38);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '+') ADVANCE(41);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == 'b') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == 'v') ADVANCE(55);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead == 'v') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == 'b') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'g') ADVANCE(31);
      END_STATE();
    case 8:
      if (lookahead == 'i') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == 'm') ADVANCE(4);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_func);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_void);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_number);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_string);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_return);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(22);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(62);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(48);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(50);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(54);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(65);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
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
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 20},
  [49] = {.lex_state = 20},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 20},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 20},
  [55] = {.lex_state = 20},
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
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(50),
    [sym__definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_primitive_type] = STATE(49),
    [sym_return_statement] = STATE(24),
    [sym__expression] = STATE(24),
    [sym_variable_declaration] = STATE(19),
    [sym_variable_definition] = STATE(24),
    [sym_unary_expression] = STATE(24),
    [sym_binary_expression] = STATE(24),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_func] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_bool] = ACTIONS(7),
    [anon_sym_number] = ACTIONS(7),
    [anon_sym_string] = ACTIONS(7),
    [anon_sym_return] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_string] = ACTIONS(17),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_primitive_type] = STATE(49),
    [sym_return_statement] = STATE(24),
    [sym__expression] = STATE(24),
    [sym_variable_declaration] = STATE(19),
    [sym_variable_definition] = STATE(24),
    [sym_unary_expression] = STATE(24),
    [sym_binary_expression] = STATE(24),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_func] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_bool] = ACTIONS(7),
    [anon_sym_number] = ACTIONS(7),
    [anon_sym_string] = ACTIONS(7),
    [anon_sym_return] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_string] = ACTIONS(17),
  },
  [3] = {
    [sym__definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_primitive_type] = STATE(49),
    [sym_return_statement] = STATE(24),
    [sym__expression] = STATE(24),
    [sym_variable_declaration] = STATE(19),
    [sym_variable_definition] = STATE(24),
    [sym_unary_expression] = STATE(24),
    [sym_binary_expression] = STATE(24),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_func] = ACTIONS(23),
    [anon_sym_void] = ACTIONS(26),
    [anon_sym_bool] = ACTIONS(26),
    [anon_sym_number] = ACTIONS(26),
    [anon_sym_string] = ACTIONS(26),
    [anon_sym_return] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(32),
    [anon_sym_BANG] = ACTIONS(35),
    [sym_identifier] = ACTIONS(38),
    [sym_number] = ACTIONS(41),
    [sym_string] = ACTIONS(41),
  },
  [4] = {
    [sym_primitive_type] = STATE(55),
    [sym_return_statement] = STATE(34),
    [sym__expression] = STATE(34),
    [sym_variable_declaration] = STATE(23),
    [sym_variable_definition] = STATE(34),
    [sym_unary_expression] = STATE(34),
    [sym_binary_expression] = STATE(34),
    [aux_sym_block_repeat1] = STATE(5),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_bool] = ACTIONS(7),
    [anon_sym_number] = ACTIONS(7),
    [anon_sym_string] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(44),
    [anon_sym_return] = ACTIONS(46),
    [anon_sym_DASH] = ACTIONS(48),
    [anon_sym_BANG] = ACTIONS(50),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(54),
    [sym_string] = ACTIONS(54),
  },
  [5] = {
    [sym_primitive_type] = STATE(55),
    [sym_return_statement] = STATE(34),
    [sym__expression] = STATE(34),
    [sym_variable_declaration] = STATE(23),
    [sym_variable_definition] = STATE(34),
    [sym_unary_expression] = STATE(34),
    [sym_binary_expression] = STATE(34),
    [aux_sym_block_repeat1] = STATE(6),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_bool] = ACTIONS(7),
    [anon_sym_number] = ACTIONS(7),
    [anon_sym_string] = ACTIONS(7),
    [anon_sym_RBRACE] = ACTIONS(56),
    [anon_sym_return] = ACTIONS(46),
    [anon_sym_DASH] = ACTIONS(48),
    [anon_sym_BANG] = ACTIONS(50),
    [sym_identifier] = ACTIONS(52),
    [sym_number] = ACTIONS(54),
    [sym_string] = ACTIONS(54),
  },
  [6] = {
    [sym_primitive_type] = STATE(55),
    [sym_return_statement] = STATE(34),
    [sym__expression] = STATE(34),
    [sym_variable_declaration] = STATE(23),
    [sym_variable_definition] = STATE(34),
    [sym_unary_expression] = STATE(34),
    [sym_binary_expression] = STATE(34),
    [aux_sym_block_repeat1] = STATE(6),
    [anon_sym_void] = ACTIONS(58),
    [anon_sym_bool] = ACTIONS(58),
    [anon_sym_number] = ACTIONS(58),
    [anon_sym_string] = ACTIONS(58),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_return] = ACTIONS(63),
    [anon_sym_DASH] = ACTIONS(66),
    [anon_sym_BANG] = ACTIONS(69),
    [sym_identifier] = ACTIONS(72),
    [sym_number] = ACTIONS(75),
    [sym_string] = ACTIONS(75),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(9), 1,
      anon_sym_return,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(19), 1,
      sym_variable_declaration,
    STATE(49), 1,
      sym_primitive_type,
    ACTIONS(78), 2,
      sym_number,
      sym_string,
    ACTIONS(7), 4,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
    STATE(32), 5,
      sym_return_statement,
      sym__expression,
      sym_variable_definition,
      sym_unary_expression,
      sym_binary_expression,
  [36] = 9,
    ACTIONS(46), 1,
      anon_sym_return,
    ACTIONS(48), 1,
      anon_sym_DASH,
    ACTIONS(50), 1,
      anon_sym_BANG,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(23), 1,
      sym_variable_declaration,
    STATE(55), 1,
      sym_primitive_type,
    ACTIONS(80), 2,
      sym_number,
      sym_string,
    ACTIONS(7), 4,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
    STATE(36), 5,
      sym_return_statement,
      sym__expression,
      sym_variable_definition,
      sym_unary_expression,
      sym_binary_expression,
  [72] = 9,
    ACTIONS(46), 1,
      anon_sym_return,
    ACTIONS(48), 1,
      anon_sym_DASH,
    ACTIONS(50), 1,
      anon_sym_BANG,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(23), 1,
      sym_variable_declaration,
    STATE(55), 1,
      sym_primitive_type,
    ACTIONS(82), 2,
      sym_number,
      sym_string,
    ACTIONS(7), 4,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
    STATE(40), 5,
      sym_return_statement,
      sym__expression,
      sym_variable_definition,
      sym_unary_expression,
      sym_binary_expression,
  [108] = 9,
    ACTIONS(46), 1,
      anon_sym_return,
    ACTIONS(48), 1,
      anon_sym_DASH,
    ACTIONS(50), 1,
      anon_sym_BANG,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(23), 1,
      sym_variable_declaration,
    STATE(55), 1,
      sym_primitive_type,
    ACTIONS(84), 2,
      sym_number,
      sym_string,
    ACTIONS(7), 4,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
    STATE(33), 5,
      sym_return_statement,
      sym__expression,
      sym_variable_definition,
      sym_unary_expression,
      sym_binary_expression,
  [144] = 9,
    ACTIONS(46), 1,
      anon_sym_return,
    ACTIONS(48), 1,
      anon_sym_DASH,
    ACTIONS(50), 1,
      anon_sym_BANG,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(23), 1,
      sym_variable_declaration,
    STATE(55), 1,
      sym_primitive_type,
    ACTIONS(86), 2,
      sym_number,
      sym_string,
    ACTIONS(7), 4,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
    STATE(38), 5,
      sym_return_statement,
      sym__expression,
      sym_variable_definition,
      sym_unary_expression,
      sym_binary_expression,
  [180] = 9,
    ACTIONS(46), 1,
      anon_sym_return,
    ACTIONS(48), 1,
      anon_sym_DASH,
    ACTIONS(50), 1,
      anon_sym_BANG,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(23), 1,
      sym_variable_declaration,
    STATE(55), 1,
      sym_primitive_type,
    ACTIONS(88), 2,
      sym_number,
      sym_string,
    ACTIONS(7), 4,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
    STATE(35), 5,
      sym_return_statement,
      sym__expression,
      sym_variable_definition,
      sym_unary_expression,
      sym_binary_expression,
  [216] = 9,
    ACTIONS(9), 1,
      anon_sym_return,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(19), 1,
      sym_variable_declaration,
    STATE(49), 1,
      sym_primitive_type,
    ACTIONS(90), 2,
      sym_number,
      sym_string,
    ACTIONS(7), 4,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
    STATE(30), 5,
      sym_return_statement,
      sym__expression,
      sym_variable_definition,
      sym_unary_expression,
      sym_binary_expression,
  [252] = 9,
    ACTIONS(46), 1,
      anon_sym_return,
    ACTIONS(48), 1,
      anon_sym_DASH,
    ACTIONS(50), 1,
      anon_sym_BANG,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(23), 1,
      sym_variable_declaration,
    STATE(55), 1,
      sym_primitive_type,
    ACTIONS(92), 2,
      sym_number,
      sym_string,
    ACTIONS(7), 4,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
    STATE(37), 5,
      sym_return_statement,
      sym__expression,
      sym_variable_definition,
      sym_unary_expression,
      sym_binary_expression,
  [288] = 9,
    ACTIONS(9), 1,
      anon_sym_return,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(19), 1,
      sym_variable_declaration,
    STATE(49), 1,
      sym_primitive_type,
    ACTIONS(94), 2,
      sym_number,
      sym_string,
    ACTIONS(7), 4,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
    STATE(25), 5,
      sym_return_statement,
      sym__expression,
      sym_variable_definition,
      sym_unary_expression,
      sym_binary_expression,
  [324] = 9,
    ACTIONS(9), 1,
      anon_sym_return,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(19), 1,
      sym_variable_declaration,
    STATE(49), 1,
      sym_primitive_type,
    ACTIONS(96), 2,
      sym_number,
      sym_string,
    ACTIONS(7), 4,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
    STATE(26), 5,
      sym_return_statement,
      sym__expression,
      sym_variable_definition,
      sym_unary_expression,
      sym_binary_expression,
  [360] = 9,
    ACTIONS(9), 1,
      anon_sym_return,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(19), 1,
      sym_variable_declaration,
    STATE(49), 1,
      sym_primitive_type,
    ACTIONS(98), 2,
      sym_number,
      sym_string,
    ACTIONS(7), 4,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
    STATE(27), 5,
      sym_return_statement,
      sym__expression,
      sym_variable_definition,
      sym_unary_expression,
      sym_binary_expression,
  [396] = 9,
    ACTIONS(9), 1,
      anon_sym_return,
    ACTIONS(11), 1,
      anon_sym_DASH,
    ACTIONS(13), 1,
      anon_sym_BANG,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(19), 1,
      sym_variable_declaration,
    STATE(49), 1,
      sym_primitive_type,
    ACTIONS(100), 2,
      sym_number,
      sym_string,
    ACTIONS(7), 4,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
    STATE(22), 5,
      sym_return_statement,
      sym__expression,
      sym_variable_definition,
      sym_unary_expression,
      sym_binary_expression,
  [432] = 3,
    ACTIONS(106), 1,
      anon_sym_EQ,
    ACTIONS(104), 7,
      anon_sym_func,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      anon_sym_return,
      sym_identifier,
    ACTIONS(102), 8,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      sym_number,
      sym_string,
  [455] = 3,
    ACTIONS(108), 1,
      anon_sym_EQ,
    ACTIONS(104), 7,
      anon_sym_func,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      anon_sym_return,
      sym_identifier,
    ACTIONS(102), 8,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      sym_number,
      sym_string,
  [478] = 2,
    ACTIONS(112), 7,
      anon_sym_func,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      anon_sym_return,
      sym_identifier,
    ACTIONS(110), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      sym_number,
      sym_string,
  [499] = 4,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(120), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      anon_sym_BANG,
      sym_number,
      sym_string,
    ACTIONS(116), 7,
      anon_sym_func,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      anon_sym_return,
      sym_identifier,
  [523] = 3,
    ACTIONS(122), 1,
      anon_sym_EQ,
    ACTIONS(104), 6,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      anon_sym_return,
      sym_identifier,
    ACTIONS(102), 8,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      sym_number,
      sym_string,
  [545] = 4,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(120), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      anon_sym_BANG,
      sym_number,
      sym_string,
    ACTIONS(126), 7,
      anon_sym_func,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      anon_sym_return,
      sym_identifier,
  [569] = 4,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(120), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(128), 4,
      ts_builtin_sym_end,
      anon_sym_BANG,
      sym_number,
      sym_string,
    ACTIONS(130), 7,
      anon_sym_func,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      anon_sym_return,
      sym_identifier,
  [593] = 3,
    ACTIONS(120), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(132), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_PLUS,
      sym_number,
      sym_string,
    ACTIONS(134), 7,
      anon_sym_func,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      anon_sym_return,
      sym_identifier,
  [615] = 2,
    ACTIONS(134), 7,
      anon_sym_func,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      anon_sym_return,
      sym_identifier,
    ACTIONS(132), 8,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      sym_number,
      sym_string,
  [635] = 2,
    ACTIONS(112), 6,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      anon_sym_return,
      sym_identifier,
    ACTIONS(110), 9,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      sym_number,
      sym_string,
  [655] = 3,
    ACTIONS(136), 1,
      anon_sym_EQ,
    ACTIONS(104), 6,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      anon_sym_return,
      sym_identifier,
    ACTIONS(102), 8,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      sym_number,
      sym_string,
  [677] = 4,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(120), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(138), 4,
      ts_builtin_sym_end,
      anon_sym_BANG,
      sym_number,
      sym_string,
    ACTIONS(140), 7,
      anon_sym_func,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      anon_sym_return,
      sym_identifier,
  [701] = 2,
    ACTIONS(144), 7,
      anon_sym_func,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      anon_sym_return,
      sym_identifier,
    ACTIONS(142), 8,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      sym_number,
      sym_string,
  [721] = 2,
    ACTIONS(144), 7,
      anon_sym_func,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      anon_sym_return,
      sym_identifier,
    ACTIONS(142), 8,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      sym_number,
      sym_string,
  [741] = 4,
    ACTIONS(146), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(148), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(128), 4,
      anon_sym_RBRACE,
      anon_sym_BANG,
      sym_number,
      sym_string,
    ACTIONS(130), 6,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      anon_sym_return,
      sym_identifier,
  [764] = 4,
    ACTIONS(146), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(148), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(152), 4,
      anon_sym_RBRACE,
      anon_sym_BANG,
      sym_number,
      sym_string,
    ACTIONS(150), 6,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      anon_sym_return,
      sym_identifier,
  [787] = 4,
    ACTIONS(146), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(148), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(114), 4,
      anon_sym_RBRACE,
      anon_sym_BANG,
      sym_number,
      sym_string,
    ACTIONS(116), 6,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      anon_sym_return,
      sym_identifier,
  [810] = 2,
    ACTIONS(134), 6,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      anon_sym_return,
      sym_identifier,
    ACTIONS(132), 8,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      sym_number,
      sym_string,
  [829] = 4,
    ACTIONS(146), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(148), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(138), 4,
      anon_sym_RBRACE,
      anon_sym_BANG,
      sym_number,
      sym_string,
    ACTIONS(140), 6,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      anon_sym_return,
      sym_identifier,
  [852] = 2,
    ACTIONS(144), 6,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      anon_sym_return,
      sym_identifier,
    ACTIONS(142), 8,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      sym_number,
      sym_string,
  [871] = 2,
    ACTIONS(144), 6,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      anon_sym_return,
      sym_identifier,
    ACTIONS(142), 8,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      sym_number,
      sym_string,
  [890] = 3,
    ACTIONS(148), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(132), 6,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_PLUS,
      sym_number,
      sym_string,
    ACTIONS(134), 6,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      anon_sym_return,
      sym_identifier,
  [911] = 2,
    ACTIONS(154), 5,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_number,
      sym_string,
    ACTIONS(156), 7,
      anon_sym_func,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      anon_sym_return,
      sym_identifier,
  [928] = 2,
    ACTIONS(158), 5,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_number,
      sym_string,
    ACTIONS(160), 7,
      anon_sym_func,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      anon_sym_return,
      sym_identifier,
  [945] = 2,
    ACTIONS(162), 5,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_BANG,
      sym_number,
      sym_string,
    ACTIONS(164), 7,
      anon_sym_func,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
      anon_sym_return,
      sym_identifier,
  [962] = 2,
    STATE(46), 2,
      sym__type,
      sym_primitive_type,
    ACTIONS(166), 4,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
  [973] = 1,
    ACTIONS(168), 4,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_number,
      anon_sym_string,
  [980] = 2,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_block,
  [987] = 2,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      sym_parameter_list,
  [994] = 1,
    ACTIONS(174), 2,
      anon_sym_LBRACE,
      sym_identifier,
  [999] = 1,
    ACTIONS(176), 1,
      sym_identifier,
  [1003] = 1,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
  [1007] = 1,
    ACTIONS(180), 1,
      sym_identifier,
  [1011] = 1,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
  [1015] = 1,
    ACTIONS(184), 1,
      sym_identifier,
  [1019] = 1,
    ACTIONS(186), 1,
      sym_identifier,
  [1023] = 1,
    ACTIONS(188), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 36,
  [SMALL_STATE(9)] = 72,
  [SMALL_STATE(10)] = 108,
  [SMALL_STATE(11)] = 144,
  [SMALL_STATE(12)] = 180,
  [SMALL_STATE(13)] = 216,
  [SMALL_STATE(14)] = 252,
  [SMALL_STATE(15)] = 288,
  [SMALL_STATE(16)] = 324,
  [SMALL_STATE(17)] = 360,
  [SMALL_STATE(18)] = 396,
  [SMALL_STATE(19)] = 432,
  [SMALL_STATE(20)] = 455,
  [SMALL_STATE(21)] = 478,
  [SMALL_STATE(22)] = 499,
  [SMALL_STATE(23)] = 523,
  [SMALL_STATE(24)] = 545,
  [SMALL_STATE(25)] = 569,
  [SMALL_STATE(26)] = 593,
  [SMALL_STATE(27)] = 615,
  [SMALL_STATE(28)] = 635,
  [SMALL_STATE(29)] = 655,
  [SMALL_STATE(30)] = 677,
  [SMALL_STATE(31)] = 701,
  [SMALL_STATE(32)] = 721,
  [SMALL_STATE(33)] = 741,
  [SMALL_STATE(34)] = 764,
  [SMALL_STATE(35)] = 787,
  [SMALL_STATE(36)] = 810,
  [SMALL_STATE(37)] = 829,
  [SMALL_STATE(38)] = 852,
  [SMALL_STATE(39)] = 871,
  [SMALL_STATE(40)] = 890,
  [SMALL_STATE(41)] = 911,
  [SMALL_STATE(42)] = 928,
  [SMALL_STATE(43)] = 945,
  [SMALL_STATE(44)] = 962,
  [SMALL_STATE(45)] = 973,
  [SMALL_STATE(46)] = 980,
  [SMALL_STATE(47)] = 987,
  [SMALL_STATE(48)] = 994,
  [SMALL_STATE(49)] = 999,
  [SMALL_STATE(50)] = 1003,
  [SMALL_STATE(51)] = 1007,
  [SMALL_STATE(52)] = 1011,
  [SMALL_STATE(53)] = 1015,
  [SMALL_STATE(54)] = 1019,
  [SMALL_STATE(55)] = 1023,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(51),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(48),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(53),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(20),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(24),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(48),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(54),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(29),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(34),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2, .production_id = 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 2, .production_id = 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, .production_id = 5),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, .production_id = 5),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, .production_id = 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, .production_id = 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 4),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 6),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 6),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [178] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
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
