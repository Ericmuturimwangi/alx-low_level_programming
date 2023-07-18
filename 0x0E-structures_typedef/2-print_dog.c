#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the elements of a struct dog
 * @d: Pointer to the struct dog to print
 *
 * Return: void
 *
 * Description: This function prints the contents of the struct dog.
 *              If an element is NULL, "(nil)" is printed instead.
 *              If d is NULL, nothing is printed.
 */
void print_dog(struct dog *d)
{
    if (d != NULL)
    {
        printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
        printf("Age: %.6f\n", d->age);
        printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
    }
}
