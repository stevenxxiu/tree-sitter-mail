#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_header_separator = 2,
  sym_header_field = 3,
  anon_sym_From = 4,
  anon_sym_To = 5,
  anon_sym_Cc = 6,
  anon_sym_Bcc = 7,
  anon_sym_Reply_DASHTo = 8,
  sym_header_field_subject = 9,
  sym_header_unstructured = 10,
  sym_atom = 11,
  sym_quoted_string = 12,
  sym_email = 13,
  sym_source_file = 14,
  sym__header = 15,
  sym_header_email = 16,
  sym_header_other = 17,
  sym_header_subject = 18,
  sym_header_field_email = 19,
  aux_sym_source_file_repeat1 = 20,
  aux_sym_header_email_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
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
  [anon_sym_LF] = anon_sym_LF,
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
  [anon_sym_LF] = {
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
      if (eof) ADVANCE(7);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == ' ') SKIP(0);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == 'B') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(16);
      if (lookahead == 'F') ADVANCE(42);
      if (lookahead == 'R') ADVANCE(24);
      if (lookahead == 'S') ADVANCE(46);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == ' ') SKIP(1);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '<') ADVANCE(5);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(66);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\\') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(3);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == ' ') SKIP(6);
      if (lookahead == 'B') ADVANCE(23);
      if (lookahead == 'C') ADVANCE(19);
      if (lookahead == 'F') ADVANCE(43);
      if (lookahead == 'R') ADVANCE(25);
      if (lookahead == 'S') ADVANCE(47);
      if (lookahead == 'T') ADVANCE(37);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_header_separator);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          (',' <= lookahead && lookahead <= '.') ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'T') ADVANCE(36);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'b') ADVANCE(29);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'c') ADVANCE(58);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'c') ADVANCE(44);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'c') ADVANCE(17);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'j') ADVANCE(26);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'j') ADVANCE(27);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'l') ADVANCE(48);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'm') ADVANCE(53);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'p') ADVANCE(30);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 't') ADVANCE(62);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 't') ADVANCE(63);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'u') ADVANCE(14);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'u') ADVANCE(15);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'y') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == 'y') ADVANCE(11);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_header_field);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_From);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_From);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_To);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_To);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_Cc);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_Cc);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_Bcc);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_Bcc);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_Reply_DASHTo);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_Reply_DASHTo);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_header_field_subject);
      if (lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == ';' ||
          lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '@' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(51);
      if (lookahead > ' ' &&
          (lookahead < ':' || '<' < lookahead) &&
          lookahead != 0x7f) ADVANCE(50);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_header_field_subject);
      if (lookahead > ' ' &&
          lookahead != ':' &&
          lookahead != 0x7f) ADVANCE(51);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_header_unstructured);
      if (lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_header_unstructured);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_atom);
      if (set_contains(sym_atom_character_set_1, 10, lookahead)) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_email);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 64},
  [15] = {.lex_state = 64},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym_header_separator] = ACTIONS(1),
    [sym_header_field] = ACTIONS(1),
    [anon_sym_From] = ACTIONS(1),
    [anon_sym_To] = ACTIONS(1),
    [anon_sym_Cc] = ACTIONS(1),
    [anon_sym_Bcc] = ACTIONS(1),
    [anon_sym_Reply_DASHTo] = ACTIONS(1),
    [sym_header_field_subject] = ACTIONS(1),
    [sym_atom] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(11),
    [sym__header] = STATE(12),
    [sym_header_email] = STATE(12),
    [sym_header_other] = STATE(12),
    [sym_header_subject] = STATE(12),
    [sym_header_field_email] = STATE(13),
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
    [sym__header] = STATE(12),
    [sym_header_email] = STATE(12),
    [sym_header_other] = STATE(12),
    [sym_header_subject] = STATE(12),
    [sym_header_field_email] = STATE(13),
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
    [sym__header] = STATE(12),
    [sym_header_email] = STATE(12),
    [sym_header_other] = STATE(12),
    [sym_header_subject] = STATE(12),
    [sym_header_field_email] = STATE(13),
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
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(24), 7,
      sym_header_field,
      anon_sym_From,
      anon_sym_To,
      anon_sym_Cc,
      anon_sym_Bcc,
      anon_sym_Reply_DASHTo,
      sym_header_field_subject,
  [13] = 3,
    ACTIONS(28), 1,
      sym_email,
    STATE(6), 1,
      aux_sym_header_email_repeat1,
    ACTIONS(26), 2,
      sym_atom,
      sym_quoted_string,
  [24] = 3,
    ACTIONS(33), 1,
      sym_email,
    STATE(6), 1,
      aux_sym_header_email_repeat1,
    ACTIONS(30), 2,
      sym_atom,
      sym_quoted_string,
  [35] = 2,
    STATE(5), 1,
      aux_sym_header_email_repeat1,
    ACTIONS(35), 2,
      sym_atom,
      sym_quoted_string,
  [43] = 1,
    ACTIONS(37), 1,
      sym_header_separator,
  [47] = 1,
    ACTIONS(39), 1,
      sym_header_separator,
  [51] = 1,
    ACTIONS(41), 1,
      sym_header_separator,
  [55] = 1,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
  [59] = 1,
    ACTIONS(45), 1,
      anon_sym_LF,
  [63] = 1,
    ACTIONS(47), 1,
      sym_header_separator,
  [67] = 1,
    ACTIONS(49), 1,
      sym_header_unstructured,
  [71] = 1,
    ACTIONS(51), 1,
      sym_header_unstructured,
  [75] = 1,
    ACTIONS(53), 1,
      anon_sym_LF,
  [79] = 1,
    ACTIONS(55), 1,
      anon_sym_LF,
  [83] = 1,
    ACTIONS(57), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 13,
  [SMALL_STATE(6)] = 24,
  [SMALL_STATE(7)] = 35,
  [SMALL_STATE(8)] = 43,
  [SMALL_STATE(9)] = 47,
  [SMALL_STATE(10)] = 51,
  [SMALL_STATE(11)] = 55,
  [SMALL_STATE(12)] = 59,
  [SMALL_STATE(13)] = 63,
  [SMALL_STATE(14)] = 67,
  [SMALL_STATE(15)] = 71,
  [SMALL_STATE(16)] = 75,
  [SMALL_STATE(17)] = 79,
  [SMALL_STATE(18)] = 83,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_email_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_email_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_field_email, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [43] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_other, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_subject, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_email, 4, 0, 0),
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
