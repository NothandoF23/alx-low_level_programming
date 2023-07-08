#include "main.h"

/**
 * _isdigit - checks if c is a number between 0 - 9
 * @c: number passed into function
 * Return: 1 if c is a numbers , 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
