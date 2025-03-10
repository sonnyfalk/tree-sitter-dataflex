(keyword) @keyword

(comment) @comment
(line_comment) @comment
(string_literal) @string
(number_literal) @number

(object_header
  name: (identifier) @entity.name.tag.object
  superclass: (identifier) @entity.other.inherited-class)

(function_header name: (identifier) @function)
(procedure_header name: (identifier) @function)
