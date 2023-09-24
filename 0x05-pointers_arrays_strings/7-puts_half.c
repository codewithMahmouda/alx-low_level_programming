#include "main.h"

/**
 * puts_half - This is a function that prints half of a string,
 * followed by a new line.
 * @str: character to check.
 * Return: Nothing.
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
