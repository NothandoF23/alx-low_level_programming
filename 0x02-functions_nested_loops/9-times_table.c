#include "main.h"

/**
 *times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int num1, num2, ans;

	for (num1 = 0; num1 <= 9; num1++)
	{
		_putchar('0');

		for (num2 = 1; num2 <= 9; num2++)
		{
			_putchar(',');
			_putchar(' ');

			ans = num1 * num2;

			if (ans <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((ans / 10) + '0');
			}

			_putchar((ans % 10) + '0');
		}
		_putchar('\n');
	}
}

