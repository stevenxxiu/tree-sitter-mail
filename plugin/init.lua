require('nvim-treesitter.parsers').get_parser_configs().mail = {
  install_info = {
    url = 'https://github.com/stevenxxiu/tree-sitter-mail',
    files = { 'src/parser.c' },
  },
  filetype = 'mail',
}
