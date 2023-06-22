#include "main.h"


/**
 * _isupper - checks if c is an upper case character or not
 * @c: is the parameter passed into the function
 * Return: 1 if c is uppercase , 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
