#include "main.h"

/**
 * _strncpy - copies string
 * @dest: destination
 * @src: source
 * @n: number of strings
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0 ; k < n && src[k] != '\0' ; k++)
		dest[k] = src[k];
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
