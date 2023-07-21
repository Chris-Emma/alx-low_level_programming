#include "main.h"

/**
 * print_diagonal - prints diagonal
 * @n: number of times
 * Return: always 0
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0 ; i < n ; i++)
		{
			for (i = 0 ; i <= n ; i++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
