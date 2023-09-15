#include "main.h"

/**
 * print_sign - This is a program that prints the sign of a number.
 * @n: input character.
 * Return: 1 if n is greater than zero, 0 if n is equal
 * to zero or -1 if n is less than zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
