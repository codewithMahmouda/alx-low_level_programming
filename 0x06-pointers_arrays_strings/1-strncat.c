#include "main.h"

/**
 * *_strncat - This is a function that concatenates two strings.
 * @dest: character to check.
 * @src: character to check.
 * @n: input to check.
 * Return: a pointer to the resulting string 'dest'
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = src[c];
	}
	return (dest);
}
