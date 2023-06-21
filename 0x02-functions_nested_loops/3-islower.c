#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: takes interger as an argument / parameter
 * Return: 0 or 1 if c islower
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

