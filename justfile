version version:
        tree-sitter {{version}}

generate:
        tree-sitter generate

test: generate
        tree-sitter test

