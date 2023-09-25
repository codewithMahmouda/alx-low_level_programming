#include "main.h"
#include <stdio.h>

/**
 * print_array - This is a function that prints n elements of an
 * array of integers, followed by a new line.
 * @a: input to check.
 * @n: input to check.
 * Return: Nothing.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
