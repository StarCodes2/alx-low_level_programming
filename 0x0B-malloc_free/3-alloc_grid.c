#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocates memory for a 2D array using pointer to a pointer
 * @width: contain the number of columns
 * @height: contain the number of rows
 *
 * Return: returns a pointer to the 2D array of NULL if it fails
 */

int **alloc_grid(int width, int height)
{
	int i, j, **arr;

	if (width < 1 || height < 1)
		return (NULL);

	*arr = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
		arr[i] = malloc(sizeof(int) * width);

	if (*arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (*arr);
}
