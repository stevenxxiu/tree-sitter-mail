# Tree-sitter Grammar for Mail
## *ts-install*
Add to opts:

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

To parse the body, in e.g. *Markdown*, add to `~/.config/nvim/after/queries/mail/injections.scm`:

```query
((body) @injection.content
 (#set! injection.language "markdown"))
```
