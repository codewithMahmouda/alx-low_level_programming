#include <stdio.h>
#include <stdlib.h>

/**
 * main - This is a program that multiplies two numbers.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 1 if argc less than 2, otherwise 0.
 */

int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	printf("%d\n", result);

	return (0);
}
