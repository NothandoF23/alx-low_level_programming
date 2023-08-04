#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint -  function that converts a binary number to an unsigned int
 * @b: binary string
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		num = (b[i] - '0') + (2 * num);
	}
	return (num);
}
