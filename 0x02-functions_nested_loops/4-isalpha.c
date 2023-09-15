#include "main.h"

/**
 * _isalpha - This is a function that checks
 * for alphabetic character.
 * @c: input character.
 * Return: 1 if Alphabet character, else 0.
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
