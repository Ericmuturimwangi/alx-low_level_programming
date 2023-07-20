#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: The variable number of integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	/* Initialize the argument list */
	va_start(args, n);

	/* Print the numbers */
	for (i = 0; i < n; i++)
	{
		/* Print the number */
		printf("%d", va_arg(args, int));

		/* Print the separator (if it's not the last number) */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	/* Clean up the argument list */
	va_end(args);

	/* Print a new line at the end */
	printf("\n");
}
