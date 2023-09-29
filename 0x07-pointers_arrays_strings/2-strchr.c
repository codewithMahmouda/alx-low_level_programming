#include "main.h"

/**
 * *_strchr - a function that locates a character in a
 * string.
 * @s: An input character
 * @c: An input character
 * Return: a pointer to the first occurence of the character
 * c
 * in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
