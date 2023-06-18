#include <stdio.h>

/**
 * main - contains a program that prints all possible combinations
 * of two digit numbers using ascii , remove all repetitions
 * Return: 0 (after execution)
 */

int main(void)
{
	int num1;
	int num2;

	for (num1 = 48; num1 < 58; num1++)
	{
		for (num2 = 49; num2 <= 57; num2++)
		{
			if (num2 > num1)
			{
				putchar(num1);
				putchar(num2);

				if (num1 != 56 || num2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
