#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert to binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;
	int i, bin = 0;

	for (i = 63; i >= 0; i--)
	{
		num  = n >> i;

		if (num & 1)
		{
			_putchar('1');
			bin++;
		}
		else if (bin)
		{
			_putchar('0');
		}
	}
	if (!bin)
	{
		_putchar('0');

	}

