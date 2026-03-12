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

(function_header
  name: (identifier) @function)

(procedure_header
  name: (identifier) @function)

(send_statement
  name: (identifier) @entity.name.function.dataflex.send)

(send_statement
  receiver: (identifier) @entity.name.tag.object)

(get_statement
  name: (identifier) @entity.name.function.dataflex.get)

(get_statement
  receiver: (identifier) @entity.name.tag.object)

(set_statement
  name: (identifier) @entity.name.function.dataflex.set)

(set_statement
  receiver: (identifier) @entity.name.tag.object)
