#include "main.h"

/**
 * malloc_checked - alloctaes memory using malloc
 * @b: the size of the memory
 * Return: pointer to the memory
 */

void *malloc_checked(unsigned int b)
{
	char *result;

	result = malloc(b);

	if (result == NULL)
		exit(98);
	else
		return (result);
}
