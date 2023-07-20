<<<<<<< HEAD
#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif

=======
#ifndef FUNCTION_PROTOTYPES_H
#define FUNCTION_PROTOTYPES_H

void print_name(char *name, void (*f)(char *));


#endif /* FUNCTION_PROTOTYPES_H */
>>>>>>> ce2b05ed98e9ea4665dda15a0ca36d27d8d5b59a
