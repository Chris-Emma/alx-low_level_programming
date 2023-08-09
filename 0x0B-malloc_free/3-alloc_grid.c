#include "main.h"

/**
 * alloc_grid - 2 dimensional array
 * @width: the number of columns
 * @height: the number of rows
 * Return: the pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **result;

	if (width <= 0 || height <= 0)
		return (NULL);

	result = malloc(sizeof(int) * height);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		result[i] = malloc(sizeof(int) * width);

		if (result[i] == NULL)
		{
			free(result);
			for (j = 0; j <= height; j++)
				free(result[j]);
			return (NULL);
		}
		for (j = 0; j <= width; j++)
			result[i][j] = 0;
	}
	return (result);
}
