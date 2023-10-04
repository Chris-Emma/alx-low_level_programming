#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated memory
*@str:String to be copied
*Return: NULL in case of error, pointer to allocated
*/

char *_strdup(char *str)
{
	char *strncpy;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;
	strncpy = malloc(sizeof(char) * (len + 1));

	if (strncpy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		strncpy[i] = str[i];
	}

	strncpy[len] = '\0';

	return (strncpy);

}
