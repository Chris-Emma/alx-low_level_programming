#include "main.h"

/**
 * _sqrt_recursion - prints square root of a number
 * @n: number of iterations
 * @i: number of iterations
 * Return: Natural square root
 */

int _sqrt_recursion(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);

	return (_sqrt_recursion(n, i * 1));
}
