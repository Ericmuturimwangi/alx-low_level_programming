#include <stdarg.h>
/**
 * sum_them_all - Return the sum of all its parameters.
 * @n: The number of arguments.
 * @...: The variable number of arguments.
 *
 * Return: The sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	/* If n is 0, return 0 */
	if (n == 0)
		return (0);

	/* Initialize the argument list */
	va_start(args, n);

	/* Sum all the arguments */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	/* Clean up the argument list */
	va_end(args);

	return (sum);
}
