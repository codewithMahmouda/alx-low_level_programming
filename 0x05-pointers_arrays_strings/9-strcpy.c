#include "main.h"

/**
 * *_strcpy - This is a function that copies the string pointed to
 * by src, including the terminating null byte (\0), to the buffer
 * pointed to by dest.
 * @dest: character to check.
 * @src: character to check.
 * Return: character value.
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
