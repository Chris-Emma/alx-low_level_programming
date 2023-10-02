#include "main.h"

/**
 * _strchr - locates the character in a string
 * @s: character to be searched
 * @c: character to be srached for in s
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s !=  '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
