#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * parameter: c
 * Return: 0 or 1 if c islower
 */

int _islower(int c)
{
	char ltr;

	if (ltr >= 'a' && ltr <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

