#include "main.h"

/**
 * _strdup - returns a pointer to a duplicate of the string str
 * @str: string that is going to copy to new memory
 * Return: pointer to the string
 */

char *_strdup(char *str)
{
	int i, count = 0;
	char *copy;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];

	return (copy);
}
