#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string input argument
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len += 1;
		s++;
		_strlen_recursion(s);
	}

	return (len);
}
