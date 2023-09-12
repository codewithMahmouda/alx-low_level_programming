#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */

int main(void)
{

	int n, x, y;

	for (n = '0'; n < '8'; n++)
	{
		for (x = '1'; x < '9'; x++)
		{
			for (y = '2'; y <= '9'; y++)
			{
				if (n < x && x < y)
				{
					putchar(n);
					putchar(x);
					putchar(y);
					if (n < '7' || x < '8' || y < '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
