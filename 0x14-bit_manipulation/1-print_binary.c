#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to convert to binary
 */
void print_binary(unsigned long int n)
{
	int i;
	int count;
	unsigned long int num;

	count = 0;
	for (i = 63; i >= 0; i--)
	{
		num = n >> i;

		if (num & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

