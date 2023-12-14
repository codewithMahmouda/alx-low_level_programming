#include "main.h"
#include <stdlib.h>


/**
 * _strlen - This is a function to check for length of string.
 * @string: string to check.
 *
 * Return: integer to function.
 */

int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - This is  a function that concatenates two
 * strings.
 * @s1: first string.
 * @s2: second string.
 * @n: memory to be allocated.
 *
 * Return: pointer to allocated memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, length, i, j;

	num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);

	length = _strlen(s1) + num + 1;

	ptr = malloc(sizeof(*ptr) * length);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
