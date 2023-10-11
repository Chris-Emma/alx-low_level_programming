#include "function_pointers.h"

/**
 * array_iterator - execute a function pointer on each element of array
 * @array: this is an array of integers
 * @size: size of array of function
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
