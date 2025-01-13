/**
 * @file Dataflex grammar for tree-sitter
 * @author Sonny Falk <sonnyfalk@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "dataflex",

  extras: ($) => [$.comment, $.line_comment, /[ \t]/, /;[\r\n|\n]/],
  word: ($) => $.identifier,

  rules: {
    source_file: ($) => repeat($._top_level_code),

    _top_level_code: ($) =>
      choice(
        $.function_definition,
        $.procedure_definition,
        $.object_definition,
        $._deferred_object,
        $._statement,
        $._eol,
      ),

    function_definition: ($) =>
      seq($.function_header, optional($._function_body), $.function_footer),

    function_header: ($) =>
      seq(
        keyword(/Function/i, $),
        field("name", $.identifier),
        optional($._parameter_list),
        keyword(/Returns/i, $),
        field("return_type", $.identifier),
        $._eol,
      ),

    _parameter_list: ($) => repeat1($.parameter),

    parameter: ($) =>
      seq(field("type", $.identifier), field("name", $.identifier)),

    _function_body: ($) => $._statement_list,

    function_footer: ($) => keyword(/End_Function/i, $),

    procedure_definition: ($) =>
      seq($.procedure_header, optional($._procedure_body), $.procedure_footer),

    procedure_header: ($) =>
      seq(
        keyword(/Procedure/i, $),
        field("name", $.identifier),
        optional($._parameter_list),
        $._eol,
      ),

    _procedure_body: ($) => $._statement_list,

    procedure_footer: ($) => keyword(/End_Procedure/i, $),

    object_definition: ($) =>
      seq($.object_header, optional($._object_body), $.object_footer),

    object_header: ($) =>
      seq(
        keyword(/Object/i, $),
        field("name", $.identifier),
        keyword(/is/i, $),
        keyword(/a/i, $),
        $.identifier,
        $._eol,
      ),

    _object_body: ($) => repeat1($._top_level_code),

    object_footer: ($) =>
      choice(keyword(/End_Object/i, $), keyword(/Cd_End_Object/i, $)),

    _deferred_object: ($) =>
      seq(
        keyword(/Deferred_View/i, $),
        $.identifier,
        keyword(/for/i, $),
        $.object_definition,
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

    unknown_command_statement: ($) => seq(repeat1($._expression), $._eol),

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
