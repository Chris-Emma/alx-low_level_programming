#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: memory area data will be copied to
 * @src: memory area data will be copied from
 * @n: number of bytes
 * Return: dest;
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
		dest[k] = src[k];
	return (dest);
}
