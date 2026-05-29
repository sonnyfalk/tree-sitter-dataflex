/**
 * @file Dataflex grammar for tree-sitter
 * @author Sonny Falk <sonnyfalk@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "dataflex",

  extras: ($) => [$.comment, $.line_comment, /[ \t]/, /;(\r\n|\n)/],
  word: ($) => $.identifier,
  supertypes: ($) => [$.typedecl, $.expression],
  conflicts: ($) => [
    [$.custom_typedecl, $.expression],
    [$.array_decl, $._literal],
    [$.case_member],
  ],

  rules: {
    source_file: ($) => repeat($._top_level_code),

    _top_level_code: ($) =>
      choice(
        $.function_definition,
        $.procedure_definition,
        $.object_definition,
        $._deferred_object,
        $.class_definition,
        $.composite_definition,
        $.property_definition,
        $.struct_declaration,
        $.enum_declaration,
        $.define_declaration,
        $.replace_declaration,
        $.global_variable_declaration,
        $._statement,
        $._eol,
      ),

    _statement: ($) =>
      choice(
        $.move_statement,
        $.get_statement,
        $.set_statement,
        $.send_statement,
        $.web_get_statement,
        $.web_set_statement,
        $.if_statement,
        $.for_statement,
        $.while_statement,
        $.repeat_statement,
        $.break_statement,
        $.case_statement,
        $.use_statement,
        $.variable_declaration,
        $.potential_variable_declaration,
        $.other_command_statement,
      ),

    _statement_list: ($) =>
      repeat1(choice($.property_definition, $._statement, $._eol)),

    // Definitions / Declarations

    function_definition: ($) =>
      seq($.function_header, optional($._function_body), $.function_footer),

    function_header: ($) =>
      seq(
        keyword(/Function/i, $),
        field("name", $.identifier),
        optional($._parameter_list),
        keyword(/Returns/i, $),
        field("return_type", $.typedecl),
        $._eol,
      ),

    _parameter_list: ($) => repeat1($.parameter),

    parameter: ($) =>
      seq(
        field("type", $.typedecl),
        optional(keyword(/ByRef/i, $)),
        field("name", $.identifier),
      ),

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
        keyword(/a|an/i, $),
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
        keyword(/a|an/i, $),
        field("superclass", $.identifier),
        $._eol,
      ),

    _class_body: ($) => repeat1(choice($.mixin_class, $._top_level_code)),

    mixin_class: ($) =>
      seq(
        keyword(/Import_Class_Protocol/i, $),
        field("name", $.identifier),
        $._eol,
      ),

    class_footer: ($) => keyword(/End_Class/i, $),

    composite_definition: ($) =>
      seq($.composite_header, optional($._class_body), $.composite_footer),

    composite_header: ($) =>
      seq(
        keyword(/Composite/i, $),
        field("name", $.identifier),
        keyword(/is/i, $),
        keyword(/a/i, $),
        field("superclass", $.identifier),
        $._eol,
      ),

    composite_footer: ($) => keyword(/End_Composite/i, $),

    property_definition: ($) =>
      seq(
        keyword(/Property/, $),
        field("type", $.typedecl),
        field("name", $.identifier),
        optional($.expression),
        $._eol,
      ),

    struct_declaration: ($) =>
      seq(
        $.struct_header,
        repeat(choice($.struct_member, $._eol)),
        $.struct_footer,
      ),

    struct_header: ($) =>
      seq(keyword(/Struct/i, $), field("name", $.identifier), $._eol),

    struct_member: ($) => seq($.typedecl, $.identifier, $._eol),

    struct_footer: ($) => seq(keyword(/End_Struct/i, $), $._eol),

    enum_declaration: ($) =>
      seq(
        $.enum_header,
        repeat(choice($.define_declaration, $._eol)),
        $.enum_footer,
      ),

    enum_header: ($) => seq(keyword(/Enum_List/i, $), $._eol),

    enum_footer: ($) => seq(keyword(/End_Enum_List/i, $), $._eol),

    define_declaration: ($) =>
      seq(
        keyword(/Define/i, $),
        field("name", $.identifier),
        optional(seq(keyword(/for/i, $), field("value", $.expression))),
        $._eol,
      ),

    replace_declaration: ($) =>
      seq(
        keyword(/#REPLACE/i, $),
        field("name", $.expression),
        field("value", choice($.expression, $.icode_argument)),
        $._eol,
      ),

    global_variable_declaration: ($) =>
      seq(
        keyword(/Global_Variable/i, $),
        $.typedecl,
        repeat1($.identifier),
        $._eol,
      ),

    // Statements / Commands

    move_statement: ($) =>
      seq(
        keyword(/Move/i, $),
        $.expression,
        keyword(/to/i, $),
        $.expression,
        $._eol,
      ),

    get_statement: ($) =>
      seq(
        optional($.call_modifier),
        keyword(/Get/i, $),
        field("name", $.identifier),
        optional(seq(keyword(/of/i, $), field("receiver", $.expression))),
        repeat(field("argument", $.expression)),
        keyword(/to/i, $),
        field("result", $.identifier),
        $._eol,
      ),

    set_statement: ($) =>
      seq(
        optional($.call_modifier),
        keyword(/Set/i, $),
        field("name", $.identifier),
        optional(seq(keyword(/of/i, $), field("receiver", $.expression))),
        repeat(field("argument", $.expression)),
        keyword(/to/i, $),
        repeat1(field("argument", $.expression)),
        $._eol,
      ),

    send_statement: ($) =>
      seq(
        optional($.call_modifier),
        keyword(/Send/i, $),
        field("name", $.identifier),
        optional(seq(keyword(/of|to/i, $), field("receiver", $.expression))),
        repeat(field("argument", $.expression)),
        $._eol,
      ),

    call_modifier: ($) =>
      choice(
        keyword(/Forward/i, $),
        keyword(/Delegate/i, $),
        seq(
          choice(keyword(/Broadcast/i, $), keyword(/Broadcast_Focus/i, $)),
          optional(
            choice(keyword(/Recursive/i, $), keyword(/Recursive_Up/i, $)),
          ),
          optional(keyword(/No_Stop/i, $)),
        ),
      ),

    web_get_statement: ($) =>
      seq(
        keyword(/WebGet/i, $),
        field("name", $.identifier),
        optional(seq(keyword(/of/i, $), field("receiver", $.expression))),
        repeat(field("argument", $.expression)),
        keyword(/to/i, $),
        field("result", $.identifier),
        $._eol,
      ),

    web_set_statement: ($) =>
      seq(
        keyword(/WebSet/i, $),
        field("name", $.identifier),
        optional(seq(keyword(/of/i, $), field("receiver", $.expression))),
        keyword(/to/i, $),
        repeat1(field("argument", $.expression)),
        $._eol,
      ),

    if_statement: ($) =>
      prec.right(
        seq(
          keyword(/If/i, $),
          field("condition", $.expression),
          choice($._statement, $.block_statement, $._eol),
          optional($.else_statement),
        ),
      ),

    else_statement: ($) =>
      seq(keyword(/Else/i, $), choice($._statement, $.block_statement, $._eol)),

    for_statement: ($) => seq($.for_header, optional($._statement_list), $.for_footer),

    for_header: ($) =>
      seq(
        keyword(/For/i, $),
        field("counter", $.identifier),
        keyword(/from/i, $),
        field("from", $.expression),
        keyword(/to/i, $),
        field("to", $.expression),
        $._eol,
      ),

    for_footer: ($) => seq(choice(
      keyword(/Loop/i, $),
      seq(keyword(/Until/i, $), field("condition", $.expression)),
    ), $._eol),

    while_statement: ($) =>
      seq($.while_header, optional($._statement_list), $.while_footer),

    while_header: ($) =>
      seq(keyword(/While/i, $), field("condition", $.expression), $._eol),

    while_footer: ($) => seq(choice(
      keyword(/Loop/i, $),
      seq(keyword(/Until/i, $), field("condition", $.expression)),
    ), $._eol),

    repeat_statement: ($) =>
      seq($.repeat_header, optional($._statement_list), $.repeat_footer),

    repeat_header: ($) => seq(keyword(/Repeat/i, $), $._eol),

    repeat_footer: ($) =>
      seq(
        choice(
          seq(keyword(/Until/i, $), field("condition", $.expression)),
          keyword(/Loop/i, $),
        ),
        $._eol,
      ),

    case_statement: ($) =>
      seq($.case_header, repeat(choice($.case_member, $._eol)), $.case_footer),

    case_header: ($) => seq(keyword(/Case/i, $), keyword(/Begin/i, $), $._eol),

    case_member: ($) =>
      seq(
        keyword(/Case/i, $),
        field("condition", choice($.expression, keyword(/Else/i, $))),
        $._eol,
        optional($._statement_list),
        optional($.case_break),
      ),

    case_break: ($) => seq(keyword(/Case/i, $), keyword(/Break/i, $), $._eol),

    case_footer: ($) => seq(keyword(/Case/i, $), keyword(/End/i, $), $._eol),

    block_statement: ($) =>
      seq($.block_header, optional($._statement_list), $.block_footer),

    block_header: ($) => seq(keyword(/Begin/i, $), $._eol),

    block_footer: ($) => seq(keyword(/End/i, $), $._eol),

    break_statement: ($) =>
      seq(keyword(/Break/i, $), optional(keyword(/Begin/i, $)), $._eol),

    use_statement: ($) => seq(keyword(/Use/i, $), $.file_name),

    variable_declaration: ($) =>
      seq($.system_typedecl, repeat1($.identifier), $._eol),

    potential_variable_declaration: ($) =>
      seq($.custom_typedecl, repeat1($.identifier), $._eol),

    other_command_statement: ($) => seq(repeat1($.expression), $._eol),

    // Expressions

    expression: ($) =>
      choice(
        $.identifier,
        $._literal,
        $.paren_expression,
        $.postfix_expression,
      ),

    paren_expression: ($) => seq("(", $._interior_expression, ")"),

    _interior_expression: ($) =>
      choice(
        $.unary_expression,
        $.binary_expression,
        $.call_expression,
        $.expression,
      ),

    unary_expression: ($) =>
      seq(choice("-", keyword(/not/i, $)), field("operand", $.expression)),

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
          choice($.unary_expression, $.call_expression, $.expression),
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

    postfix_expression: ($) =>
      seq(
        field("name", $.identifier),
        repeat1(choice($.member_access, $.array_access)),
      ),

    member_access: ($) =>
      prec.right(seq(".", optional(field("name", $.identifier)))),

    array_access: ($) => seq("[", $._interior_expression, "]"),

    // Variable / Parameter Type Declarations

    typedecl: ($) => choice($.system_typedecl, $.custom_typedecl),

    system_typedecl: ($) =>
      seq(field("name", $.system_type), repeat(field("array", $.array_decl))),

    custom_typedecl: ($) =>
      seq(field("name", $.identifier), repeat(field("array", $.array_decl))),

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

    // Identifier / Literal

    identifier: ($) => /[a-zA-Z_@#$][a-zA-Z_0-9@#$]*/,

    _literal: ($) => choice($.number_literal, $.string_literal),

    number_literal: ($) => /[0-9]+(\.[0-9]+)?/,

    string_literal: ($) => /\".*\"/,

    icode_argument: ($) => /\|[^ \t\r\n]*/,

    file_name: ($) => /[a-zA-Z_0-9\.\-$@]+/,

    // Comments / EOL

    line_comment: ($) => token(seq("//", /.*/)),
    comment: ($) => seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
    _eol: ($) => /\r\n|\n/,
  },
});

function keyword(re, $) {
  return alias(re, $.keyword);
}
