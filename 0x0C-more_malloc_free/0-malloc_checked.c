#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - This is a function that allocates memory using
 * malloc.
 * @b: memory size to be allocated.
 *
 * Return: Pointer to allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
