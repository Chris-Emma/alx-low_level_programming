#include "main.h"

/**
*clear_bit -this  sets a bit at a position to 0
*@n: this is the number to be used
*@index: this is the position to be cleared
*
*Return: 1 on success, -1 if it fails
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
