#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer input to convert
 * @index: index of bit to return 
 * Return: bit at given index, else -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}

