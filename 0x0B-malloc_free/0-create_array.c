#include "main.h"

/**
* create_array - creates an array of chars
* *@size: Size of the array
* *@c: Character
* *Return: NULL if size is 0 or if it fails
* *pointer to array if is normal.
*/

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		array[j] = c;

	return (array);
}
