# Tree-sitter Grammar for Mail
## *lazy.nvim* Install
Add to *tree-sitter* config:

```lua
{
  'nvim-treesitter/nvim-treesitter',
  -- ...
  dependencies = {
    'stevenxxiu/tree-sitter-mail',
  },
  -- ...
}
```

To parse the body, in e.g. *Markdown*, add to `~/.config/nvim/after/queries/mail/injections.scm`:

```query
((body) @injection.content
 (#set! injection.language "markdown"))
```
