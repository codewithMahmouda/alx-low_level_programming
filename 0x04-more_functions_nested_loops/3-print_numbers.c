#include "main.h"

/**
 * print_numbers - a function that prints the numbers,
 * from 0 to 9, f * ollowed by a new line.
 *
 * Return: Nothing.
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
