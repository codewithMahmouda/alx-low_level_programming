#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - This is a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the string
 * given as a parameter.
 * @str: string to copy
 *
 * Return: pointer to str, otherwise NULL.
 */

char *_strdup(char *str)
{
	char *dup;
	int i, c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	dup = malloc(i * sizeof(*dup) + 1);

	if (dup == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		dup[c] = str[c];
	dup[c] = '\0';

	return (dup);
}
