#include "main.h"

/**
 * _isupper - This is a function that checks for uppercase character.
 * @c: character to check.
 * Return: 1 if uppercase, else 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
