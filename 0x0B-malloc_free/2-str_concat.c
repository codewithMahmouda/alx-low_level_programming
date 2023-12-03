#include <stdlib.h>
#include "main.h"

/**
 * str_concat - This is a function that concatenates two strings.
 * @s1: string to join.
 * @s2: string to join.
 *
 * Return: pointer to string.
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str, lens1 = 0, lens2 = 0;
	int i, c;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	for (i = 0; s1[i] != '\0'; i++)
		lens1++;

	for (c = 0; s2[c] != '\0'; c++)
		lens2++;

	new_str = malloc(sizeof(*new_str) * (lens1 + lens2 + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < lens1; i++)
		new_str[i] = s1[i];

	for (c = 0; c < lens2; c++)
		new_str[i + c] = s2[c];

	new_str[i + c] = '\0';

	return (new_str);
}
