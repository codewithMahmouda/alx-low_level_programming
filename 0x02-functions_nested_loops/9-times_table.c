#include "main.h"

/**
 * times_table - This is a function that prints the 9
 * times table, starting with 0.
 *
 * Return: Nothing.
 */

void times_table(void)
{
	int row, col, res;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			res = row * col;
			_putchar(res);
			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
