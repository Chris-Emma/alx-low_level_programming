#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - returns index of first element
 * @array: array of the index
 * @cmp: pointer to the function to be used to compare values
 * @size: size of array
 * Return: i 0r -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]) == 1)
			return (k);
	}
	return (-1);
}
