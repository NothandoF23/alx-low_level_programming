#include "main.h"

/**
 * get_endianness -  checks the endianness.
 * Return: 0 if endian is big, 1 otherwise
 */
int get_endianness(void)
{
	char *n = (char *) &1;

	return (*n);
}

