#include "main.h"

/**
 * _puts - This is a function that prints a string, followed by a
 * new line, to stdout.
 * @str: character to check.
 * Return: Nothing.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
