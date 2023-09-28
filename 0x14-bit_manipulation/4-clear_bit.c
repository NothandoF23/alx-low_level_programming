#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: input number
 * @index: index of the bit to set to 0
 * Return: 1 if success, -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = (~(1UL << index) & *n);
	return (1);
}

