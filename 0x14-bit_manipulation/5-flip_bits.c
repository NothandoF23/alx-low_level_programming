#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number to flip
 * @m: number we want to flip to
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	int i, bit_num = 0;
	unsigned long int bit;
	unsigned long int num = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		bit = num >> i;
		if (bit & 1)
			bit_num++;
	}

	return (bit_num);

}
