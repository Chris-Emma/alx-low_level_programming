#include "main.h"

/**
 * _realloc - reallocates memory sing malloc and free
 * @ptr: pointer to previous memory allocation
 * @old_size: size in bytes allocated to ptr
 * @new_size: new size of memory block
 * Return: pointer to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	size_t i, max = new_size;
	char *pre_p = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	if (new_size > old_size)
		max = new_size;
	for (i = 0; i < max; i++)
		p[i] = pre_p[i];
	free(ptr);
	return (p);
}
