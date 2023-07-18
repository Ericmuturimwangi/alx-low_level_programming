#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/* Function prototype for copy_string */
char *copy_string(char *str);

/**
 * new_dog - Creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: A pointer to the newly created dog, or NULL if it fails.
 *
 * Description: This function creates a new dog and allocates memory for it.
 *              The name and owner strings are copied to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;

	/* Allocate memory for the new dog */
	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	/* Allocate memory and copy the name string */
	new_dog_ptr->name = copy_string(name);
	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	/* Allocate memory and copy the owner string */
	new_dog_ptr->owner = copy_string(owner);
	if (new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr);
		return (NULL);
	}

	/* Assign the age of the new dog */
	new_dog_ptr->age = age;

	return (new_dog_ptr);
}

/**
 * copy_string - Copies a string to a new memory location
 * @str: The source string to be copied
 *
 * Return: A pointer to the new copied string, or NULL if it fails.
 */
char *copy_string(char *str)
{
	char *new_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	while (str[len])
		len++;

	/* Allocate memory for the new string */
	new_str = malloc((len + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);

	/* Copy the characters to the new string */
	for (i = 0; i <= len; i++)
		new_str[i] = str[i];

	return (new_str);
}
