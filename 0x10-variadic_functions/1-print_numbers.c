#include "variadic_functions.h"

/**
 * print_numbers - print numbers with separator
 * then  followed by a newline
 * @separator: string that is to be printed between numbers
 * @n: number of args passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int r;
	va_list list;

	va_start(list, n);
	for (r = 0; r < n; r++)
	{
		printf("%d", va_arg(list, int));
		if (r != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
