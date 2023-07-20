<<<<<<< HEAD
#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @f: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

=======
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: Pointer to the name to be printed.
 * @f: Pointer to the function to be used for printing.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
 * print_name_as_is - Prints a name as is.
 * @name: Pointer to the name to be printed.
 *
 * Return: void
 */
void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - Prints a name in uppercase.
 * @name: Pointer to the name to be printed.
 *
 * Return: void
 */
void print_name_uppercase(char *name)
{
	unsigned int i;

	printf("Hello, my uppercase name is ");
	i = 0;
	while (name[i])
	{
		if (name[i] >= 'a' && name[i] <= 'z')
		{
			putchar(name[i] + 'A' - 'a');
		}
		else
		{
			putchar(name[i]);
		}
		i++;
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	print_name("Bob", print_name_as_is);
	print_name("Bob Dylan", print_name_uppercase);
	printf("\n");
	return (0);
}
>>>>>>> ce2b05ed98e9ea4665dda15a0ca36d27d8d5b59a
