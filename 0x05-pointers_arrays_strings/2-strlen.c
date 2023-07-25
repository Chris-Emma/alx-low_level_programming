#include "main.h"

/**
 * _strlen - counts strings
 * @s: string to be counted
 * Return: length of thestring
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[1] != '\0' ; i++)
		count++;
	return (count);
}
