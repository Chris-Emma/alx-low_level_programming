#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all parameters
 * @n: number of extra parameters
 * Return: total sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int j;
	va_list list;
	int sum = 0;

	va_start(list, n);
	for (j = 0; j < n; j++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);

}
