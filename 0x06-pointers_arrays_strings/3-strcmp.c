#include "main.h"

/**
 * _strcmp - This is  a function that compares two strings.
 * @s1: input to check.
 * @s2: input to check.
 * Return: (0).
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
