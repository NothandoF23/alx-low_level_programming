#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string input argument
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
}
