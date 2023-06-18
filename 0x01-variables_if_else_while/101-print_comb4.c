#include <stdio.h>

/**
 * main - contains a program that prints all 3 digit combinations
 * prints the smallest combination of repetitions
 * Return: 0 (after execution)
 */

int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num1 = 48; num1 < 58; num1++)
	{
		for (num2 = 49; num2 <= 57; num2++)
		{
			for (num3 = 50; num3 <= 57; num3++)
			{
				if (num3 > num2 && num2 > num1)
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);

					if (num1 != 55 || num2 != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
