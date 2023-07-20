#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the format provided.
 * @format: A list of types of arguments passed to the function.
 * 
 * Description: 'c' for char, 'i' for integer, 'f' for float,
 *              's' for char * (if the string is NULL, print (nil) instead),
 *              any other char should be ignored.
 *              Prints a new line at the end of the function.
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char *str;
    char curr_format;

    va_start(args, format);

    while (format && format[i])
    {
        curr_format = format[i];

        if ((curr_format == 'c') || (curr_format == 'i') ||
            (curr_format == 'f') || (curr_format == 's'))
        {
            switch (curr_format)
            {
                case 'c':
                    printf("%c", va_arg(args, int));
                    break;
                case 'i':
                    printf("%d", va_arg(args, int));
                    break;
                case 'f':
                    printf("%f", va_arg(args, double));
                    break;
                case 's':
                    str = va_arg(args, char *);
                    if (str == NULL)
                    {
                        printf("(nil)");
                        break;
                    }
                    printf("%s", str);
                    break;
            }

            if (format[i + 1] != '\0')
                printf(", ");
        }

        i++;
    }

    printf("\n");
    va_end(args);
}
