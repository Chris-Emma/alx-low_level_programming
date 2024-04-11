#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to look for
 *
 * Return: the index of the found value,
 * or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
    size_t r = 0;

    if (!array || size == 0)
        return (-1);

    while (r < size)
    {
        printf("Value checked array[%lu] = [%d]\n", r, array[r]);
        if (array[r] == value)
            return (r);
        r++;
    }

    return (-1);
}
