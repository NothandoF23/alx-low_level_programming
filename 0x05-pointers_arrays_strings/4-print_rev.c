#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: string parameter
 */

void print_rev(char *s)
{
	int end = 0;
	int temp;

	while (*s != '\0')
	{
		end++;
		s++;
	}
	s--;
	for (temp = end; temp > 0; temp--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');

}
