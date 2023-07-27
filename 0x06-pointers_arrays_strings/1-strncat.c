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
	int j;

	for (j = 0 ; j < n && *src != '\0' ; j++)
	{
		dest[len + j] = *src;
		src++;
	}
	dest[len + j] = '\0';
	return (dest);
}
