#include "main.h"

/**
 * string_toupper - function to change to upper case
 * @n: pointer
 * Return: n
 */

char *string_toupper(char *n)
{
	int r;

	for (r = 0 ; n[r] != '\0' ; r++)
	{
		if (n[r] >= 'a' && n[r] <= 'z')
		{
			n[r] = n[r] - 32;
		}
	}
	return (n);
}
