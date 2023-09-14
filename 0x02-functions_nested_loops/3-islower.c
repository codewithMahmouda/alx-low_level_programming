#include "main.h"

/**
 * _islower - This is a function that checks for
 * lowercase character.
 * @c: input character.
 * Return: 1 if lowercase, else 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
