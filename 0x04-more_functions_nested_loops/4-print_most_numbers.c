#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 - 9
 * except for 2 & 4
 * Return: nothing
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
