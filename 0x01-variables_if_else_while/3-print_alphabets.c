#include <stdio.h>

/**
 * main - Entry point.
 *
 *
 * Return: Always 0.
 */

int main(void)
{
	char alpha = 'a';
	char Alpha = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (Alpha <= 'Z')
	{
		putchar(Alpha);
		Alpha++;
	}
	putchar('\n');

	return (0);
}
