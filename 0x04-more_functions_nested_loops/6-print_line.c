#include "main.h"

/**
 * print_line - This is a function that draws a straight
 * line in the terminal.
 * @n: character to check.
 * Return: Nothing.
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
