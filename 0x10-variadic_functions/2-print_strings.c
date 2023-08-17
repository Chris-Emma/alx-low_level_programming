#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be separated btn strings
 * @n: number between strings to be seperated
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ar;

	va_start(ar, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ar, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s%s", str, (i == n - 1) ? "" : separator);
		}
	}
	va_end(ar);

	printf("\n");
}

