(keyword) @keyword
; "Set" @keyword

(comment) @comment
(line_comment) @comment
(string_literal) @string
(number_literal) @number

(object_declarator name: (identifier) @tag)
(function_declaration name: (identifier) @function)
