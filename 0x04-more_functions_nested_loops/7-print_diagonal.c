#include "main.h"

/**
 * print_diagonal - This is a function that draws a diagonal
 * line on the terminal.
 * @n: character to check.
 * Return: Nothing.
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, c;

		for (i = 0; i < n; i++)
		{
			for (c = 0; c < n; c++)
			{
				if (c == i)
					_putchar('\\');
				else if (c < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
