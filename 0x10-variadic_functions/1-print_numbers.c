#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed within numbers
 * @n: number of integers to be passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ar;

	va_start(ar, n);
	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(ar, int), (i == n - 1) ? "" : separator);
	}
	va_end(ar);

	printf("\n");
}

