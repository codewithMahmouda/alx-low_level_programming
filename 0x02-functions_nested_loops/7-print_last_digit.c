#include "main.h"

/**
 * print_last_digit - function that prints the last
 * digit of a number
 * @n: integer to affect.
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int  last;

	if (n < 0)
	{
		last = -1 * (n % 10);
		_putchar(last + '0');
		return (last);
	}
	else
	{
		last = n % 10;
		_putchar(last + '0');
		return (last);
	}
}
