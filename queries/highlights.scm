(keyword) @keyword

(comment) @comment

(line_comment) @comment

(string_literal) @string

(number_literal) @number

(object_header
  name: (identifier) @entity.name.tag.object)

(object_header
  superclass: (identifier) @entity.other.inherited-class)

(class_header
  name: (identifier) @entity.name.tag.class)

(class_header
  superclass: (identifier) @entity.other.inherited-class)

(composite_header
  name: (identifier) @entity.name.tag.class)

(composite_header
  superclass: (identifier) @entity.other.inherited-class)

(mixin_class
  name: (identifier) @entity.other.inherited-class)

(struct_header
  name: (identifier) @entity.name.struct)

(function_header
  name: (identifier) @function)

(procedure_header
  name: (identifier) @function)

(send_statement
  name: (identifier) @entity.name.function.dataflex.send)

(get_statement
  name: (identifier) @entity.name.function.dataflex.get)

(set_statement
  name: (identifier) @entity.name.function.dataflex.set)

(web_get_statement
  name: (identifier) @entity.name.function.dataflex.get)

(web_set_statement
  name: (identifier) @entity.name.function.dataflex.set)

(call_expression
  name: (identifier) @entity.name.function.dataflex.expr)

(custom_typedecl
  (identifier) @entity.name.type)

(expression/identifier) @entity.name

(postfix_expression
 name: (identifier) @entity.name)

(member_access
 name: (identifier) @entity.name.member)
