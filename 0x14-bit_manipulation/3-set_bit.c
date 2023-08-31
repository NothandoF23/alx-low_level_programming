#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: value to convert to binary and alter bit of
 * @index: specified bit index to set to 1
 * Return: 1 if bit change was a success , -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = ((1UL << index) | *n);
	return (1);
}

