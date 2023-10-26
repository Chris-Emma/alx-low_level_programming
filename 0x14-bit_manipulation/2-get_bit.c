#include "main.h"

/**
*get_bit - gets the value of a bit at the given index
*@n: this is the number
*@index: index starting from 0 of the bit that is  required
*Return: The converted value
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
