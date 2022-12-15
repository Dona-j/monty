Extern is a short name for external.
used when a particular files need to access a variable from another file.
When we write extern some_data_type some_variable_name;  no memory is allocated. Only property of variable is announced.
Multiple declarations of extern variable is allowed within the file. This is not the case with automatic variables.
Extern variable says to compiler  ” go outside my scope and you will find the definition of the variable that I declared.”
Compiler believes that whatever that extern variable said is true and produce no error. Linker throws an error when it finds no such variable exists.
When an extern variable is initialized, then memory for this is allocated and it will be considered defined.
