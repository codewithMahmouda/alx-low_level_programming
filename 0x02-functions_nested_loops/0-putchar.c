#include "main.h"
#include <unistd.h>

/**
 * main - Entry point.
 * Description: This program prints the char '_putchar' followed
 * by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	char word[8] = "_putchar";
	int n;

	for (n = 0; n < 8; n++)
	{
		_putchar(word[n]);
		_putchar('\n');
	}

	return (0);
}
