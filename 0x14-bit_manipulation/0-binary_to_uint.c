#include "main.h"

/**
 * binary_to_uint - converts binary string to an unsigned integer
 * @b: pointer to binary string in memory to convert to integer
 * Return: unsigned integer representing binary value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			conv_result = conv_result * 2;
		}
		else if (b[i] == '1')
		{
			conv_result = conv_result * 2 + 1;
		}
		else
		{
			return (0);
		}
	}
	return (conv_result);
}

