(keyword) @keyword

(comment) @comment

(line_comment) @comment

(string_literal) @string

(number_literal) @number

(object_header
  name: (identifier) @entity.name.tag.object
  superclass: (identifier) @entity.other.inherited-class)

(class_header
  name: (identifier) @entity.name.tag.class
  superclass: (identifier) @entity.other.inherited-class)

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
