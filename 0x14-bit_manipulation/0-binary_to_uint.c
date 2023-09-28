#include "main.h"

/**
 * binary_to_uint - Function converts a binary number to unsigned int
 * @b: string made up of 0s & 1s
 * Return: the converted number, else 0
 * if b is NULL or has any none binary characters
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int converted_num = 0, base = 2;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		converted_num = base * converted_num + (b[i] - '0');
	}

	return (converted_num);
}

