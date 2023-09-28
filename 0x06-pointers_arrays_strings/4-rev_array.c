#include "main.h"

/**
*
* reverse_array - This is a function that reverses the content of
* an array of integers.
* @a: input to check.
* @n: input to check.
*/

void reverse_array(int *a, int n)
{
	int b, rev;

	for (b = 0; b < n; b++)
	{
		n--;
		rev = a[b];
		a[b] = a[n];
		a[n] = rev;
	}
}
