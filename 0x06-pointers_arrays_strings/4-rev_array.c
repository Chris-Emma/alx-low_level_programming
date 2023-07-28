#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: the array
 * @n: number of times
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int l, m;

	for (l = 0 ; l < n--; l++)
	{
		m = a[l];
		a[l] = a[n];
		a[n] = m;
	}
}
