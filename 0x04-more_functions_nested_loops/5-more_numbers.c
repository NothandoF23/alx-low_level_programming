#include "main.h"

/**
 * more_numbers - runs loops to print numbers 1-14 10 times
 * Return: nothing
 */

void more_numbers(void)
{
	int i;
	int num;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_puchar('1');
			}
			_putchar(num % 10 + '0');
		}
	}
	_putchar('\n');
}
