#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LT = 1,
  anon_sym_GT = 2,
  sym_header_separator = 3,
  sym_header_field = 4,
  anon_sym_From = 5,
  anon_sym_To = 6,
  anon_sym_Cc = 7,
  anon_sym_Bcc = 8,
  anon_sym_Reply_DASHTo = 9,
  sym_header_field_subject = 10,
  sym_header_unstructured = 11,
  sym_atom = 12,
  sym_quoted_string = 13,
  sym_email = 14,
  sym_source_file = 15,
  sym__header = 16,
  sym_header_email = 17,
  sym_header_other = 18,
  sym_header_subject = 19,
  sym_header_field_email = 20,
  aux_sym_source_file_repeat1 = 21,
  aux_sym_header_email_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [sym_header_separator] = "header_separator",
  [sym_header_field] = "header_field",
  [anon_sym_From] = "From",
  [anon_sym_To] = "To",
  [anon_sym_Cc] = "Cc",
  [anon_sym_Bcc] = "Bcc",
  [anon_sym_Reply_DASHTo] = "Reply-To",
  [sym_header_field_subject] = "header_field_subject",
  [sym_header_unstructured] = "header_unstructured",
  [sym_atom] = "atom",
  [sym_quoted_string] = "quoted_string",
  [sym_email] = "email",
  [sym_source_file] = "source_file",
  [sym__header] = "_header",
  [sym_header_email] = "header_email",
  [sym_header_other] = "header_other",
  [sym_header_subject] = "header_subject",
  [sym_header_field_email] = "header_field_email",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_header_email_repeat1] = "header_email_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [sym_header_separator] = sym_header_separator,
  [sym_header_field] = sym_header_field,
  [anon_sym_From] = anon_sym_From,
  [anon_sym_To] = anon_sym_To,
  [anon_sym_Cc] = anon_sym_Cc,
  [anon_sym_Bcc] = anon_sym_Bcc,
  [anon_sym_Reply_DASHTo] = anon_sym_Reply_DASHTo,
  [sym_header_field_subject] = sym_header_field_subject,
  [sym_header_unstructured] = sym_header_unstructured,
  [sym_atom] = sym_atom,
  [sym_quoted_string] = sym_quoted_string,
  [sym_email] = sym_email,
  [sym_source_file] = sym_source_file,
  [sym__header] = sym__header,
  [sym_header_email] = sym_header_email,
  [sym_header_other] = sym_header_other,
  [sym_header_subject] = sym_header_subject,
  [sym_header_field_email] = sym_header_field_email,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_header_email_repeat1] = aux_sym_header_email_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_header_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_header_field] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_From] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_To] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Cc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Bcc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Reply_DASHTo] = {
    .visible = true,
    .named = false,
  },
  [sym_header_field_subject] = {
    .visible = true,
    .named = true,
  },
  [sym_header_unstructured] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_email] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__header] = {
    .visible = false,
    .named = true,
  },
  [sym_header_email] = {
    .visible = true,
    .named = true,
  },
  [sym_header_other] = {
    .visible = true,
    .named = true,
  },
  [sym_header_subject] = {
    .visible = true,
    .named = true,
  },
  [sym_header_field_email] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_header_email_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static TSCharacterRange sym_atom_character_set_1[] = {
  {'!', '!'}, {'#', '\''}, {'*', '+'}, {'-', '-'}, {'/', '9'}, {'=', '='}, {'?', '?'}, {'A', 'Z'},
  {'^', '~'}, {0x80, 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(47);
      ADVANCE_MAP(
        '"', 2,
        ':', 50,
        '<', 48,
        '>', 49,
        'B', 93,
        'C', 90,
        'F', 103,
        'R', 94,
        'S', 105,
        'T', 99,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('!' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('=' <= lookahead && lookahead <= '?') ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(87);
      if (lookahead > '@' &&
          (lookahead < '[' || 0x7f < lookahead)) ADVANCE(107);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(44);
      if ((0x01 <= lookahead && lookahead <= 0x08) ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x1f) ||
          ('!' <= lookahead && lookahead <= 0x7f)) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(44);
      if ((0x01 <= lookahead && lookahead <= 0x08) ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x1f) ||
          ('!' <= lookahead && lookahead <= 0x7f)) ADVANCE(4);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\f' < lookahead)) ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('!' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(44);
      if ((0x01 <= lookahead && lookahead <= 0x08) ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x1f) ||
          ('!' <= lookahead && lookahead <= 0x7f)) ADVANCE(4);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\f' < lookahead)) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '<') ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == '1') ADVANCE(14);
      if (lookahead == '2') ADVANCE(11);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '5') ADVANCE(12);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == ']') ADVANCE(110);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == ']') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(15);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == ']') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == ']') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(41);
      if (lookahead == ']') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '5') ADVANCE(21);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '5') ADVANCE(26);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '5') ADVANCE(31);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == '1') ADVANCE(33);
      if (lookahead == '2') ADVANCE(30);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == '0') ADVANCE(19);
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '2') ADVANCE(20);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == '0') ADVANCE(24);
      if (lookahead == '1') ADVANCE(28);
      if (lookahead == '2') ADVANCE(25);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 37:
      if (lookahead == '@') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == '[') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 39:
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == ']') ADVANCE(112);
      if ((0x01 <= lookahead && lookahead <= 0x08) ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x1f) ||
          ('!' <= lookahead && lookahead <= 0x7f)) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == ']') ADVANCE(112);
      if ((0x01 <= lookahead && lookahead <= '\t') ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x7f)) ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == '\\') ADVANCE(40);
      if ((0x01 <= lookahead && lookahead <= 0x08) ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x1f) ||
          ('!' <= lookahead && lookahead <= 0x7f)) ADVANCE(39);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 43:
      if ((set_contains(sym_atom_character_set_1, 10, lookahead)) &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 0x80 || 0x10ffff < lookahead)) ADVANCE(18);
      END_STATE();
    case 44:
      if ((0x01 <= lookahead && lookahead <= '\t') ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x7f)) ADVANCE(1);
      END_STATE();
    case 45:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(5);
      END_STATE();
    case 46:
      if (eof) ADVANCE(47);
      if (lookahead == 'B') ADVANCE(57);
      if (lookahead == 'C') ADVANCE(54);
      if (lookahead == 'F') ADVANCE(67);
      if (lookahead == 'R') ADVANCE(58);
      if (lookahead == 'S') ADVANCE(69);
      if (lookahead == 'T') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_header_separator);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'T') ADVANCE(65);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'b') ADVANCE(60);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'c') ADVANCE(77);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'c') ADVANCE(79);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'c') ADVANCE(55);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'j') ADVANCE(59);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'm') ADVANCE(73);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'o') ADVANCE(75);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'p') ADVANCE(61);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'u') ADVANCE(53);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'y') ADVANCE(51);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_From);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_From);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_To);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_To);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_Cc);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_Cc);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_Bcc);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_Bcc);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_Reply_DASHTo);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_Reply_DASHTo);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_header_field_subject);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_header_field_subject);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(71);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_header_unstructured);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_header_unstructured);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(88);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(87);
      if (lookahead > '@' &&
          (lookahead < '[' || 0x7f < lookahead)) ADVANCE(107);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'T') ADVANCE(101);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'b') ADVANCE(96);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'c') ADVANCE(76);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'c') ADVANCE(78);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'c') ADVANCE(104);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'c') ADVANCE(91);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(102);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'e') ADVANCE(92);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'j') ADVANCE(95);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'l') ADVANCE(106);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'm') ADVANCE(72);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'o') ADVANCE(74);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'o') ADVANCE(98);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'o') ADVANCE(80);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'p') ADVANCE(97);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'r') ADVANCE(100);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 't') ADVANCE(82);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'u') ADVANCE(89);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == 'y') ADVANCE(86);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_atom);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_quoted_string);
      if (lookahead == '@') ADVANCE(38);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_email);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_email);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == ']') ADVANCE(112);
      if ((0x01 <= lookahead && lookahead <= 0x08) ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          (0x0e <= lookahead && lookahead <= 0x1f) ||
          ('!' <= lookahead && lookahead <= 0x7f)) ADVANCE(39);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 46},
  [2] = {.lex_state = 46},
  [3] = {.lex_state = 46},
  [4] = {.lex_state = 46},
  [5] = {.lex_state = 46},
  [6] = {.lex_state = 46},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 84},
  [16] = {.lex_state = 84},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_header_separator] = ACTIONS(1),
    [anon_sym_From] = ACTIONS(1),
    [anon_sym_To] = ACTIONS(1),
    [anon_sym_Cc] = ACTIONS(1),
    [anon_sym_Bcc] = ACTIONS(1),
    [anon_sym_Reply_DASHTo] = ACTIONS(1),
    [sym_header_field_subject] = ACTIONS(1),
    [sym_atom] = ACTIONS(1),
    [sym_quoted_string] = ACTIONS(1),
    [sym_email] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(13),
    [sym__header] = STATE(2),
    [sym_header_email] = STATE(2),
    [sym_header_other] = STATE(2),
    [sym_header_subject] = STATE(2),
    [sym_header_field_email] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_header_field] = ACTIONS(5),
    [anon_sym_From] = ACTIONS(7),
    [anon_sym_To] = ACTIONS(7),
    [anon_sym_Cc] = ACTIONS(7),
    [anon_sym_Bcc] = ACTIONS(7),
    [anon_sym_Reply_DASHTo] = ACTIONS(7),
    [sym_header_field_subject] = ACTIONS(9),
  },
  [2] = {
    [sym__header] = STATE(3),
    [sym_header_email] = STATE(3),
    [sym_header_other] = STATE(3),
    [sym_header_subject] = STATE(3),
    [sym_header_field_email] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_header_field] = ACTIONS(5),
    [anon_sym_From] = ACTIONS(7),
    [anon_sym_To] = ACTIONS(7),
    [anon_sym_Cc] = ACTIONS(7),
    [anon_sym_Bcc] = ACTIONS(7),
    [anon_sym_Reply_DASHTo] = ACTIONS(7),
    [sym_header_field_subject] = ACTIONS(9),
  },
  [3] = {
    [sym__header] = STATE(3),
    [sym_header_email] = STATE(3),
    [sym_header_other] = STATE(3),
    [sym_header_subject] = STATE(3),
    [sym_header_field_email] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_header_field] = ACTIONS(15),
    [anon_sym_From] = ACTIONS(18),
    [anon_sym_To] = ACTIONS(18),
    [anon_sym_Cc] = ACTIONS(18),
    [anon_sym_Bcc] = ACTIONS(18),
    [anon_sym_Reply_DASHTo] = ACTIONS(18),
    [sym_header_field_subject] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 7,
      sym_header_field,
      anon_sym_From,
      anon_sym_To,
      anon_sym_Cc,
      anon_sym_Bcc,
      anon_sym_Reply_DASHTo,
      sym_header_field_subject,
  [13] = 2,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 7,
      sym_header_field,
      anon_sym_From,
      anon_sym_To,
      anon_sym_Cc,
      anon_sym_Bcc,
      anon_sym_Reply_DASHTo,
      sym_header_field_subject,
  [26] = 2,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 7,
      sym_header_field,
      anon_sym_From,
      anon_sym_To,
      anon_sym_Cc,
      anon_sym_Bcc,
      anon_sym_Reply_DASHTo,
      sym_header_field_subject,
  [39] = 3,
    ACTIONS(36), 1,
      anon_sym_LT,
    STATE(8), 1,
      aux_sym_header_email_repeat1,
    ACTIONS(38), 2,
      sym_atom,
      sym_quoted_string,
  [50] = 3,
    ACTIONS(40), 1,
      anon_sym_LT,
    STATE(8), 1,
      aux_sym_header_email_repeat1,
    ACTIONS(42), 2,
      sym_atom,
      sym_quoted_string,
  [61] = 2,
    STATE(7), 1,
      aux_sym_header_email_repeat1,
    ACTIONS(45), 2,
      sym_atom,
      sym_quoted_string,
  [69] = 1,
    ACTIONS(47), 1,
      sym_header_separator,
  [73] = 1,
    ACTIONS(49), 1,
      sym_header_separator,
  [77] = 1,
    ACTIONS(51), 1,
      sym_header_separator,
  [81] = 1,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
  [85] = 1,
    ACTIONS(55), 1,
      sym_header_separator,
  [89] = 1,
    ACTIONS(57), 1,
      sym_header_unstructured,
  [93] = 1,
    ACTIONS(59), 1,
      sym_header_unstructured,
  [97] = 1,
    ACTIONS(61), 1,
      sym_email,
  [101] = 1,
    ACTIONS(63), 1,
      anon_sym_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 13,
  [SMALL_STATE(6)] = 26,
  [SMALL_STATE(7)] = 39,
  [SMALL_STATE(8)] = 50,
  [SMALL_STATE(9)] = 61,
  [SMALL_STATE(10)] = 69,
  [SMALL_STATE(11)] = 73,
  [SMALL_STATE(12)] = 77,
  [SMALL_STATE(13)] = 81,
  [SMALL_STATE(14)] = 85,
  [SMALL_STATE(15)] = 89,
  [SMALL_STATE(16)] = 93,
  [SMALL_STATE(17)] = 97,
  [SMALL_STATE(18)] = 101,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_other, 3, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_other, 3, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_subject, 3, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_subject, 3, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_email, 6, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_email, 6, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_email_repeat1, 2, 0, 0),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_email_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_field_email, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [53] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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

TS_PUBLIC const TSLanguage *tree_sitter_mail(void) {
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
