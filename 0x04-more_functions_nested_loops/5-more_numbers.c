#include "main.h"

/**
 * more_numbers - This is a function that prints 10 times
 * the numbers, from 0 to 14, followed by a new line.
 *
 * Return: Nothing.
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}

		_putchar('\n');
		i++;
	}
}
