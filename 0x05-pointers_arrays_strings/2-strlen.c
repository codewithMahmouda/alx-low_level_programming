#include "main.h"

/**
 * _strlen - This is a function that returns the length of a string.
 * @str: character to check.
 * Return: Nothing.
 */

int _strlen(char *s)
{
	int l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
