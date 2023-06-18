#include <stdio.h>

/**
 * main - contains a program that prints all single digit numbers
 * followed by , and space
 * Return: 0 (after execution)
 */


int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
