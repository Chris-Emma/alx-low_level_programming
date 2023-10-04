#include "main.h"

/**
* alloc_grid - returns a pointer to a 2D array
*@width: width of array
*@height: height of array
*Return: pointer to the array
*/

int **alloc_grid(int width, int height)
{
	int **array;
	int r = 0, s;

	if (width == 0 || height == 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array != NULL)
	{
		for (r = 0; r < height; r++)
		{
			array[r] = (int *) malloc(sizeof(int) * width);
			if (array[r] != NULL)
			{
				for (s = 0; s < width; s++)
					array[r][s] = 0;
			}
			else
			{
				while (r >= 0)
				{
					free(array[r]);
					r--;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
