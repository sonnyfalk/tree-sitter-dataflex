(use_statement
  (file_path) @name) @reference.file_dependency

(class_definition
  (class_header
    name: (identifier) @name) @definition.class)

(class_definition
  (procedure_definition
    (procedure_header
      name: (identifier) @name) @definition.method))
