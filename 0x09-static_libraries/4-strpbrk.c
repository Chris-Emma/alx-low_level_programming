#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: input
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int w;

	while (*s)
	{
		for (w = 0; accept[w]; w++)
		{
		if (*s == accept[w])
		return (s);
		}
	s++;
	}
	return ('\0');
}
