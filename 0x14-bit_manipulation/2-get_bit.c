#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: input number/ value
 * @index: index of bit to return
 * Return: value of the bit at given index, otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
	{
		return (-1);
	}

	value = (n >> index) & 1;

	return (value);
}

