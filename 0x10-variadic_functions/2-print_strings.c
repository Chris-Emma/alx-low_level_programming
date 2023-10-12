#include "variadic_functions.h"

/**
 * print_strings - print a string followed by a newline
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int r;
	va_list li;
	char *string;

	va_start(li, n);
	for (r = 0; r < n; r++)
	{
		string = va_arg(li, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (r != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(li);
}
