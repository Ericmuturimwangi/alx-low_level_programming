#include <stdio.h>

/**
 * print_before_main - Prints "You're beat! and yet, you must allow,\nI bore my house upon my back!\n"
 *                     before the main function is executed.
 */
void __attribute__((constructor)) print_before_main()
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

