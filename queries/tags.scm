(use_statement
  (file_name) @name
  (#set! index.element file_dependency)) @reference.file_dependency

(class_definition
  (class_header
    name: (identifier) @name) @reference.class_definition (#set! index.element class_definition))
