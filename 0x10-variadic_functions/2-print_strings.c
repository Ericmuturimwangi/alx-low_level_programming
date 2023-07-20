#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * 
 * Description: If separator is NULL, don't print it.
 *              If one of the strings is NULL, print (nil) instead.
 *              Prints a new line at the end of the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;
    char *str;

    va_start(args, n);

    for (i = 0; i < n; i++)
    {
        str = va_arg(args, char *);

        if (str == NULL)
            printf("(nil)");
        else
            printf("%s", str);

        if (i < n - 1 && separator != NULL)
            printf("%s", separator);
    }

    printf("\n");
    va_end(args);
}
