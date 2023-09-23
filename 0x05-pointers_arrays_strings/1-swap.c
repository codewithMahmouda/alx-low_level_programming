#include "main.h"

/**
 * swap_int - This is a function that swaps the values of two
 * integers.
 * @a: input to check.
 * @b: input to check.
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
