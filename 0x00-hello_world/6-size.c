#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	char c;
	long int j;
	long long int n;
	float l;

	printf("Size of a char is: %lu byte(s)\n", sizeof(c));
	printf("Size of an int is: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int is: %lu byte(s)\n", sizeof(j));
	printf("Size of a long long int is: %lu byte(s)\n", sizeof(n));
	printf("Size of a float is: %lu byte(s)\n", sizeof(l));

	return (0);
}
