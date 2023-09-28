#include "main.h"

/**
* factorial - searchs for the factorial of a number
* @n: the number to find the factorial of
* Return: factorial
*/

int factorial(int n)
{
	int nextNum;

	if (n == 0)
		return (1);
	else if (n < 0)
	return (-1);

	nextNum = factorial(n - 1);
	return (n * nextNum);
}

