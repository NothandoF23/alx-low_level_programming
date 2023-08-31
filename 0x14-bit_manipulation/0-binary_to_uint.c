#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary input to be converted
 * Return: converted number, else 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, base = 2;
	int i;

	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i]; i++)
	{
		if ((b[i] > '1') || (b[i] < '0'))
		{
			return (0);
		}

		else
		{

			num = (b[i] - '0') + num * base;
		}
	
	}

	return (num);
}
