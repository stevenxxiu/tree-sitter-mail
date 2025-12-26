# Tree-sitter Grammar for Mail
## Neovim
In *Neovim*, this can be installed with [lewis6991/ts-install.nvim: Treesitter parser manager for Neovim](https://github.com/lewis6991/ts-install.nvim). Add to its opts:

```lua
parsers = {
  mail = {
    install_info = {
      url = 'https://github.com/stevenxxiu/tree-sitter-mail',
      branch = 'master',
    },
  },
},
```

To parse the body, in e.g., *Markdown*, add to `~/.config/nvim/after/queries/mail/injections.scm`:

```query
((body) @injection.content
 (#set! injection.language "markdown"))
```
