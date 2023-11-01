#include "main.h"
#include <stdlib.h>

/**
 * *create_array - This is a a function that creates an array of
 * chars, and initializes it with a specific char.
 * @size: size of array.
 * @c: character to check.
 *
 * Return: pointer to arr, otherwise NULL.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *arr = malloc(sizeof(*arr) * size);

	if (size == 0)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
