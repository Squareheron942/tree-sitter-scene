#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_LBRACK = 1,
  anon_sym_COMMA = 2,
  anon_sym_RBRACK = 3,
  sym_script = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  sym_base64data = 7,
  anon_sym_scripts = 8,
  anon_sym_components = 9,
  anon_sym_children = 10,
  sym_identifier = 11,
  sym_hexcode = 12,
  sym_object = 13,
  sym_component = 14,
  sym_scriptblock = 15,
  sym_componentblock = 16,
  sym_children = 17,
  aux_sym_object_repeat1 = 18,
  aux_sym_scriptblock_repeat1 = 19,
  aux_sym_componentblock_repeat1 = 20,
  aux_sym_children_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_script] = "script",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_base64data] = "base64data",
  [anon_sym_scripts] = "scripts",
  [anon_sym_components] = "components",
  [anon_sym_children] = "children",
  [sym_identifier] = "identifier",
  [sym_hexcode] = "hexcode",
  [sym_object] = "object",
  [sym_component] = "component",
  [sym_scriptblock] = "scriptblock",
  [sym_componentblock] = "componentblock",
  [sym_children] = "children",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_scriptblock_repeat1] = "scriptblock_repeat1",
  [aux_sym_componentblock_repeat1] = "componentblock_repeat1",
  [aux_sym_children_repeat1] = "children_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_script] = sym_script,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_base64data] = sym_base64data,
  [anon_sym_scripts] = anon_sym_scripts,
  [anon_sym_components] = anon_sym_components,
  [anon_sym_children] = anon_sym_children,
  [sym_identifier] = sym_identifier,
  [sym_hexcode] = sym_hexcode,
  [sym_object] = sym_object,
  [sym_component] = sym_component,
  [sym_scriptblock] = sym_scriptblock,
  [sym_componentblock] = sym_componentblock,
  [sym_children] = sym_children,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_scriptblock_repeat1] = aux_sym_scriptblock_repeat1,
  [aux_sym_componentblock_repeat1] = aux_sym_componentblock_repeat1,
  [aux_sym_children_repeat1] = aux_sym_children_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_base64data] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_scripts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_components] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_children] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_hexcode] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_scriptblock] = {
    .visible = true,
    .named = true,
  },
  [sym_componentblock] = {
    .visible = true,
    .named = true,
  },
  [sym_children] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scriptblock_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_componentblock_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_children_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_data = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_data] = "data",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_data, 2},
    {field_name, 0},
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
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
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
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(34);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '}') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 1:
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == 'c') ADVANCE(8);
      if (lookahead == 's') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == ']') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 3:
      if (lookahead == ']') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == 'h') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 12:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_script);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == 'c') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_script);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_script);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_script);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_script);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == 'h') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_script);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_script);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_script);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == 'l') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_script);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == 'm') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_script);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_script);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_script);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_script);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_script);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_script);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_script);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_script);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_script);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == 's') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_script);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == 's') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_script);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == 't') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_script);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == 't') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_script);
      if (lookahead == '$') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_script);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_base64data);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_scripts);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_scripts);
      if (lookahead == '$') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_components);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_components);
      if (lookahead == '$') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_children);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_children);
      if (lookahead == '$') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_hexcode);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
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
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 55},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_script] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_scripts] = ACTIONS(1),
    [anon_sym_components] = ACTIONS(1),
    [anon_sym_children] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_hexcode] = ACTIONS(1),
  },
  [1] = {
    [sym_object] = STATE(51),
    [sym_identifier] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_RBRACK,
    ACTIONS(7), 1,
      anon_sym_scripts,
    ACTIONS(9), 1,
      anon_sym_components,
    ACTIONS(11), 1,
      anon_sym_children,
    STATE(33), 3,
      sym_scriptblock,
      sym_componentblock,
      sym_children,
  [18] = 5,
    ACTIONS(7), 1,
      anon_sym_scripts,
    ACTIONS(9), 1,
      anon_sym_components,
    ACTIONS(11), 1,
      anon_sym_children,
    ACTIONS(13), 1,
      anon_sym_RBRACK,
    STATE(11), 3,
      sym_scriptblock,
      sym_componentblock,
      sym_children,
  [36] = 5,
    ACTIONS(7), 1,
      anon_sym_scripts,
    ACTIONS(9), 1,
      anon_sym_components,
    ACTIONS(11), 1,
      anon_sym_children,
    ACTIONS(15), 1,
      anon_sym_RBRACK,
    STATE(33), 3,
      sym_scriptblock,
      sym_componentblock,
      sym_children,
  [54] = 4,
    ACTIONS(7), 1,
      anon_sym_scripts,
    ACTIONS(9), 1,
      anon_sym_components,
    ACTIONS(11), 1,
      anon_sym_children,
    STATE(33), 3,
      sym_scriptblock,
      sym_componentblock,
      sym_children,
  [69] = 1,
    ACTIONS(17), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [75] = 3,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(21), 1,
      anon_sym_RBRACK,
    STATE(14), 1,
      aux_sym_scriptblock_repeat1,
  [85] = 3,
    ACTIONS(23), 1,
      anon_sym_COMMA,
    ACTIONS(26), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym_componentblock_repeat1,
  [95] = 3,
    ACTIONS(28), 1,
      anon_sym_RBRACK,
    ACTIONS(30), 1,
      sym_identifier,
    STATE(45), 1,
      sym_component,
  [105] = 3,
    ACTIONS(32), 1,
      anon_sym_COMMA,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym_scriptblock_repeat1,
  [115] = 3,
    ACTIONS(37), 1,
      anon_sym_COMMA,
    ACTIONS(39), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      aux_sym_object_repeat1,
  [125] = 3,
    ACTIONS(30), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      sym_component,
  [135] = 3,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      sym_object,
  [145] = 3,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      aux_sym_scriptblock_repeat1,
  [155] = 3,
    ACTIONS(15), 1,
      anon_sym_RBRACK,
    ACTIONS(49), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_object_repeat1,
  [165] = 1,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [171] = 1,
    ACTIONS(53), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [177] = 3,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      aux_sym_children_repeat1,
  [187] = 3,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym_object,
  [197] = 3,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(61), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      aux_sym_componentblock_repeat1,
  [207] = 3,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym_componentblock_repeat1,
  [217] = 3,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      aux_sym_children_repeat1,
  [227] = 1,
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [233] = 3,
    ACTIONS(30), 1,
      sym_identifier,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      sym_component,
  [243] = 3,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    ACTIONS(76), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      aux_sym_children_repeat1,
  [253] = 3,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_object_repeat1,
  [263] = 3,
    ACTIONS(3), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym_object,
  [273] = 2,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    ACTIONS(85), 1,
      sym_script,
  [280] = 1,
    ACTIONS(87), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [285] = 2,
    ACTIONS(3), 1,
      sym_identifier,
    STATE(47), 1,
      sym_object,
  [292] = 1,
    ACTIONS(89), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [297] = 1,
    ACTIONS(91), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [302] = 1,
    ACTIONS(81), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [307] = 1,
    ACTIONS(93), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [312] = 1,
    ACTIONS(95), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [317] = 2,
    ACTIONS(30), 1,
      sym_identifier,
    STATE(45), 1,
      sym_component,
  [324] = 1,
    ACTIONS(97), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [329] = 1,
    ACTIONS(99), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [334] = 1,
    ACTIONS(101), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [339] = 1,
    ACTIONS(35), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [344] = 2,
    ACTIONS(85), 1,
      sym_script,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
  [351] = 2,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    ACTIONS(107), 1,
      sym_script,
  [358] = 1,
    ACTIONS(109), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [363] = 1,
    ACTIONS(111), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [368] = 1,
    ACTIONS(26), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [373] = 1,
    ACTIONS(113), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [378] = 1,
    ACTIONS(76), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [383] = 1,
    ACTIONS(115), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [388] = 1,
    ACTIONS(117), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [393] = 1,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
  [397] = 1,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
  [401] = 1,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
  [405] = 1,
    ACTIONS(85), 1,
      sym_script,
  [409] = 1,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
  [413] = 1,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
  [417] = 1,
    ACTIONS(129), 1,
      sym_base64data,
  [421] = 1,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
  [425] = 1,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 69,
  [SMALL_STATE(7)] = 75,
  [SMALL_STATE(8)] = 85,
  [SMALL_STATE(9)] = 95,
  [SMALL_STATE(10)] = 105,
  [SMALL_STATE(11)] = 115,
  [SMALL_STATE(12)] = 125,
  [SMALL_STATE(13)] = 135,
  [SMALL_STATE(14)] = 145,
  [SMALL_STATE(15)] = 155,
  [SMALL_STATE(16)] = 165,
  [SMALL_STATE(17)] = 171,
  [SMALL_STATE(18)] = 177,
  [SMALL_STATE(19)] = 187,
  [SMALL_STATE(20)] = 197,
  [SMALL_STATE(21)] = 207,
  [SMALL_STATE(22)] = 217,
  [SMALL_STATE(23)] = 227,
  [SMALL_STATE(24)] = 233,
  [SMALL_STATE(25)] = 243,
  [SMALL_STATE(26)] = 253,
  [SMALL_STATE(27)] = 263,
  [SMALL_STATE(28)] = 273,
  [SMALL_STATE(29)] = 280,
  [SMALL_STATE(30)] = 285,
  [SMALL_STATE(31)] = 292,
  [SMALL_STATE(32)] = 297,
  [SMALL_STATE(33)] = 302,
  [SMALL_STATE(34)] = 307,
  [SMALL_STATE(35)] = 312,
  [SMALL_STATE(36)] = 317,
  [SMALL_STATE(37)] = 324,
  [SMALL_STATE(38)] = 329,
  [SMALL_STATE(39)] = 334,
  [SMALL_STATE(40)] = 339,
  [SMALL_STATE(41)] = 344,
  [SMALL_STATE(42)] = 351,
  [SMALL_STATE(43)] = 358,
  [SMALL_STATE(44)] = 363,
  [SMALL_STATE(45)] = 368,
  [SMALL_STATE(46)] = 373,
  [SMALL_STATE(47)] = 378,
  [SMALL_STATE(48)] = 383,
  [SMALL_STATE(49)] = 388,
  [SMALL_STATE(50)] = 393,
  [SMALL_STATE(51)] = 397,
  [SMALL_STATE(52)] = 401,
  [SMALL_STATE(53)] = 405,
  [SMALL_STATE(54)] = 409,
  [SMALL_STATE(55)] = 413,
  [SMALL_STATE(56)] = 417,
  [SMALL_STATE(57)] = 421,
  [SMALL_STATE(58)] = 425,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, .production_id = 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_componentblock_repeat1, 2), SHIFT_REPEAT(36),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_componentblock_repeat1, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scriptblock_repeat1, 2), SHIFT_REPEAT(53),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scriptblock_repeat1, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 6, .production_id = 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, .production_id = 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5, .production_id = 1),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2), SHIFT_REPEAT(30),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_children_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(5),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scriptblock, 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 6),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_componentblock, 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_componentblock, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scriptblock, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_componentblock, 6),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scriptblock, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_componentblock, 5),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 5),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scriptblock, 6),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4, .production_id = 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [121] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_scene(void) {
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
