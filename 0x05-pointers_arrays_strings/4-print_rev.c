#include "main.h"

/**
 * print_rev - This is a function that prints a string, in reverse,
 * followed by a new line.
 * @s: character to check.
 * Return: Nothing.
 */

void print_rev(char *s)
{
	int l, i, len;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	len = l;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
