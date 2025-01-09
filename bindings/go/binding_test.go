package tree_sitter_dataflex_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_dataflex "github.com/sonnyfalk/tree-sitter-dataflex.git/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_dataflex.Language())
	if language == nil {
		t.Errorf("Error loading Dataflex grammar")
	}
}
