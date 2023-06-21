#include "main.h"

/**
 * _isalpha - program that checks if is alpha character
 * @c: takes an int argument/ parameter
 * Return: 1 if is alpha , 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
