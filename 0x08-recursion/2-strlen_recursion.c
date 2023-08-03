#include "main.h"

/**
 * _strlen_recursion - prints strlen in recursion
 * @s: string to be printed
 * Return: string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
