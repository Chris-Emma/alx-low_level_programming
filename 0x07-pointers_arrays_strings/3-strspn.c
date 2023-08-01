#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: string to be searched
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int l, k;

	for (l = 0; s[l] != '\0'; l++)
	{
		for (k = 0; s[k] != accept[k]; k++)
		{
			if (accept[k] == '\0')
				return (l);
		}
	}
	return (0);
}
