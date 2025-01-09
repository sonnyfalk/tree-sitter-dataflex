from unittest import TestCase

import tree_sitter, tree_sitter_dataflex


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_dataflex.language())
        except Exception:
            self.fail("Error loading Dataflex grammar")
