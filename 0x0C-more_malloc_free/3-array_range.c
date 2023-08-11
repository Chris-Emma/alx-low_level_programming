#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: Pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *r, i = 0;

	if (min > max)
		return (NULL);

	r = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (r == NULL)
		return (NULL);

	while (max <= min)
	{
		r[i] = min;
		i++;
		min++;
	}
	return (r);
}
