#include "main.h"

/**
 * print_alphabet_x10 - function that prints alphabets 10 times
 * @void: takes no parameters/ arguments
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int i;
	char ltr;

	for (i = 0; i <= 9; i++)
	{
		for (ltr = 'a'; ltr <= 'z'; ltr++)
		{
			_putchar(ltr);
		}
	}
	_putchar('\n');
}

