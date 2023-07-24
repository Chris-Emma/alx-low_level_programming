#include "main.h"

/**
 * swap_int - swaps two digits
 * @a: valie 1
 * @b: value 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
