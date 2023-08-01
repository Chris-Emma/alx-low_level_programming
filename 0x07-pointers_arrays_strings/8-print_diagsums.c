#include "main.h"

/**
 * print_diagsums - prints sum of two diagonals
 * @a: matrix of integers
 * @size: size of integers
 */

void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		s += size;
	}
	a -= size;

	for (i = 0; i < size; i++)
	{
		s2 += a[i];
		s -= size;
	}
	printf("%d, %d\n", s1, s2);
}
