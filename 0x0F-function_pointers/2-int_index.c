#include "function_pointers.h"

/**
 * int_index - Function searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer
 * Return: index of first element or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}

	return (-1);
}
