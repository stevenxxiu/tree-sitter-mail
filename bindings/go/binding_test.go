package tree_sitter_mail_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_mail "github.com/stevenxxiu/tree-sitter-mail/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_mail.Language())
	if language == nil {
		t.Errorf("Error loading Mail grammar")
	}
}
