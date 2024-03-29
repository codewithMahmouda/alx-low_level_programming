#include "main.h"

/**
 * *_strncpy - This is a function that copies a string.
 * @dest: character to check.
 * @src: character to check.
 * @n: input to check.
 * Return: Nothing.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
