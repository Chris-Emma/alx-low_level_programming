#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the string
 * @size: size of elements
 * Return: pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int x = 0, y = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	y = nmemb * size;
	ptr = malloc(y);

	if (ptr == NULL)
		return (NULL);

	while (x < y)
	{
		ptr[x] = 0;
		x++;
	}
	return (ptr);
}
