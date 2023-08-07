#include "main.h"

/**
 * int _islower - checks for lowercase
 * @c: checks the code
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else 
		return (0);
}
