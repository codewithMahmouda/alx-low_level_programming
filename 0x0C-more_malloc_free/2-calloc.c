#include <stdlib.h>
#include "main.h"

/**
 * _memory - This is a function that initializes memory byte to 0.
 *
 * Return: pointer to memory location.
 */

char *_memory(char *c, char j, unsigned int k)
{
	unsigned int i;

	for (i = 0; i < k; i++)
		c[i] = j;

	return (c);
}

/**
 * _calloc - This is a function that allocates memory for an array,
 * using malloc.
 * @nmemb: elements.
 * @size: size to be allocated.
 *
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	_memory(ptr, 0, nmemb * size);

	return (ptr);
}
