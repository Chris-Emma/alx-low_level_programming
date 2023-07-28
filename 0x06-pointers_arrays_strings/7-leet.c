#include "main.h"

/**
 * leet - leet encoding
 * @s: string to be encoded
 * Return: encoded string
 */

char *leet(char *s)
{
	int x, y, z;

	char a[] = "aAoOeEtTlL";
	char b[] = "4433007711";

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		z = 0;
		while (a[y] != '\0')
		{
			if (s[x] == a[y])
			{
				z = y;
				s[x] = b[z];
			}
			y++;
		}
		x++;
	}
	return (s);
}
