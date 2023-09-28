#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number being fliped
 * @m: number to flip to
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num, diff = n ^ m;
	int i, bit_num = 0;

	for (i = 63; i >= 0; i--)
	{
		num = diff >> i;
		if (num & 1)
			bit_num++;
	}

	return (bit_num);
}

