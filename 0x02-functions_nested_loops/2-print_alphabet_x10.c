#include "main.h"

/**
 * print_alphabet_x10 - This is a program that prints 10
 * times the alphabet, in lowercase
 * followed by a new line.
 *
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}

}
