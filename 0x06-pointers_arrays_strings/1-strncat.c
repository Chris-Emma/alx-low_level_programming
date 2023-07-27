#include "main.h"

/**
 * _strncat - concatenates two string
 * @src: source file
 * @dest: destination file
 * @n: number of times of concatenation
 * Return: Void
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int g;

	for (g = 0 ; g < n && *src != '\0' ; g++)
	{
		dest[len + g] = *src;
		src++;
	}
	dest[len + g] = '\0';
	return (dest);
}
