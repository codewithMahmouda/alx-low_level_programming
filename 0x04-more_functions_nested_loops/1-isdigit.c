#include "main.h"

/**
 * _isdigit - This is a function that checks for a digit
 * (0 through 9).
 * @c: character to check.
 * Return: 1 if digit, else 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
