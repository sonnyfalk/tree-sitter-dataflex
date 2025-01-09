/**
 * @file Dataflex grammar for tree-sitter
 * @author Sonny Falk <sonnyfalk@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "dataflex",

  extras: ($) => [$.comment, $.line_comment, /[\s]/],
  word: ($) => $.identifier,

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => repeat($._top_level_code),

    _top_level_code: ($) => choice($._declaration, $._statement),

    _declaration: ($) => choice($.function_declaration, $.object_declaration),

    function_declaration: ($) =>
      seq(
        keyword(/Function/i, $),
        field("name", $.identifier),
        $._eol,
        optional($._statement_list),
        alias(/End_Function/i, $.keyword),
      ),

    object_declaration: ($) =>
      seq(
        $.object_declarator,
        repeat($._top_level_code),
        choice(
          alias(/End_Object/i, $.keyword),
          alias(/Cd_End_Object/i, $.keyword),
        ),
      ),

    object_declarator: ($) =>
      seq(
        alias(/Object/i, $.keyword),
        field("name", $.identifier),
        keyword(/is/i, $),
        keyword(/a/i, $),
        $.identifier,
        $._eol,
      ),

    _statement_list: ($) => repeat1($._statement),

    _statement: ($) => choice($.move_statement, $.unknown_command_statement),

    move_statement: ($) =>
      seq(
        keyword(/Move/i, $),
        $._expression,
        keyword(/To/i, $),
        $.identifier,
        $._eol,
      ),

    unknown_command_statement: ($) =>
      seq(repeat1($._expression), optional(/;/), $._eol),

    _expression: ($) => choice($.identifier, $._literal),

    identifier: ($) => /[a-zA-Z_][a-zA-Z_0-9]*/,

    _literal: ($) => choice($.number_literal, $.string_literal),

    number_literal: ($) => /[0-9]+(\.[0-9]+)?/,

    string_literal: ($) => /\".*\"/,

    _eol: ($) => /[\r\n|\n]/,

    line_comment: ($) => token(seq("//", /.*/)),
    comment: ($) => seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
  },
});

function keyword(re, $) {
  return alias(re, $.keyword);
}
