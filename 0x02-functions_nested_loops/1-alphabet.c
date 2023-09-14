#include "main.h"

/**
 * print_alphabet - This is a program that prints the alphabet
 * in lowercase, followed by a new line.
 *
 * Return: Nothing.
 */

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');

}
