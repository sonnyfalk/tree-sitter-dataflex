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
  supertypes: ($) => [$.typedecl],

  rules: {
    source_file: ($) => repeat($._top_level_code),

    _top_level_code: ($) =>
      choice(
        $.function_definition,
        $.procedure_definition,
        $.object_definition,
        $._deferred_object,
        $.class_definition,
        $.property_definition,
        $.global_variable_declaration,
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
      seq(field("type", $.typedecl), field("name", $.identifier)),

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
        field("superclass", $.identifier),
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

    class_definition: ($) =>
      seq($.class_header, optional($._class_body), $.class_footer),

    class_header: ($) =>
      seq(
        keyword(/Class/i, $),
        field("name", $.identifier),
        keyword(/is/i, $),
        keyword(/a/i, $),
        field("superclass", $.identifier),
        $._eol,
      ),

    _class_body: ($) => repeat1($._top_level_code),

    class_footer: ($) => keyword(/End_Class/i, $),

    property_definition: ($) =>
      seq(
        keyword(/Property/, $),
        field("type", $.typedecl),
        field("name", $.identifier),
        optional($._expression),
        $._eol,
      ),

    _statement_list: ($) =>
      repeat1(choice($.property_definition, $._statement, $._eol)),

    _statement: ($) =>
      choice(
        $.move_statement,
        $.get_statement,
        $.set_statement,
        $.send_statement,
        $.use_statement,
        $.variable_declaration,
        $.unknown_command_statement,
      ),

    move_statement: ($) =>
      seq(
        keyword(/Move/i, $),
        $._expression,
        keyword(/to/i, $),
        $.identifier,
        $._eol,
      ),

    get_statement: ($) =>
      seq(
        keyword(/Get/i, $),
        field("name", $.identifier),
        optional(seq(keyword(/of/i, $), field("receiver", $._expression))),
        repeat($._expression),
        keyword(/to/i, $),
        $.identifier,
        $._eol,
      ),

    set_statement: ($) =>
      seq(
        keyword(/Set/i, $),
        field("name", $.identifier),
        optional(seq(keyword(/of/i, $), field("receiver", $._expression))),
        keyword(/to/i, $),
        repeat1($._expression),
        $._eol,
      ),

    send_statement: ($) =>
      seq(
        keyword(/Send/i, $),
        field("name", $.identifier),
        optional(seq(keyword(/of|to/i, $), field("receiver", $._expression))),
        repeat($._expression),
        $._eol,
      ),

    use_statement: ($) => seq(keyword(/Use/i, $), $.file_name),

    global_variable_declaration: ($) =>
      seq(
        keyword(/Global_Variable/i, $),
        $.typedecl,
        repeat1($.identifier),
        $._eol,
      ),

    variable_declaration: ($) =>
      seq($.system_typedecl, repeat1($.identifier), $._eol),

    unknown_command_statement: ($) => seq(repeat1($._expression), $._eol),

    _expression: ($) => choice($.identifier, $._literal, $.paren_expression),

    paren_expression: ($) => seq("(", $._interior_expression, ")"),

    _interior_expression: ($) =>
      choice(
        $.unary_expression,
        $.binary_expression,
        $.call_expression,
        $._expression,
      ),

    unary_expression: ($) =>
      seq(choice("-", keyword(/not/i, $)), field("operand", $._expression)),

    binary_expression: ($) =>
      seq(
        field("operand", $._interior_expression),
        choice(
          "+",
          "-",
          "*",
          "/",
          "^",
          "=",
          "<>",
          "<",
          ">",
          "<=",
          ">=",
          keyword(/max/i, $),
          keyword(/min/i, $),
          keyword(/and/i, $),
          keyword(/or/i, $),
          keyword(/contains/i, $),
          keyword(/matches/i, $),
          keyword(/iand/i, $),
          keyword(/ior/i, $),
        ),
        field(
          "operand",
          choice($.unary_expression, $.call_expression, $._expression),
        ),
      ),

    call_expression: ($) =>
      seq(
        field("name", $.identifier),
        "(",
        field(
          "argument",
          optional(
            seq(
              $._interior_expression,
              repeat(seq(",", $._interior_expression)),
            ),
          ),
        ),
        ")",
      ),

    typedecl: ($) => choice($.system_typedecl, $.custom_typedecl),

    system_typedecl: ($) => seq($.system_type, repeat($.array_decl)),

    custom_typedecl: ($) => seq($.identifier, repeat($.array_decl)),

    array_decl: ($) => seq("[", optional($.number_literal), "]"),

    system_type: ($) =>
      choice(
        /Boolean/i,
        /Date/i,
        /Integer/i,
        /Number/i,
        /Real/i,
        /RowID/i,
        /String/i,
        /Address/i,
        /BigInt/i,
        /Char/i,
        /Currency/i,
        /DateTime/i,
        /Decimal/i,
        /DWord/i,
        /Float/i,
        /Handle/i,
        /LongPtr/i,
        /Pointer/i,
        /Short/i,
        /Time/i,
        /Timespan/i,
        /UBigInt/i,
        /UChar/i,
        /UInteger/i,
        /ULongPtr/i,
        /UShort/i,
        /WString/i,
        /Variant/i,
      ),

    identifier: ($) => /[a-zA-Z_][a-zA-Z_0-9]*/,

    _literal: ($) => choice($.number_literal, $.string_literal),

    number_literal: ($) => /[0-9]+(\.[0-9]+)?/,

    string_literal: ($) => /\".*\"/,

    file_name: ($) => /[a-zA-Z_0-9\.\-$@]+/,

    _eol: ($) => /[\r\n|\n]/,

    line_comment: ($) => token(seq("//", /.*/)),
    comment: ($) => seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
  },
});

function keyword(re, $) {
  return alias(re, $.keyword);
}
