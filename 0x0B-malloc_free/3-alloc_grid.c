#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid-creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **array, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL)

	array = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return (NULL);
	}
	
	for (i = 0; i < height; i++)
		for (; j < width; j++)
			array[i][j] = 0;
	return (array);
}
