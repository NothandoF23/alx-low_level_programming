#include <stdio.h>

/**
 * main - contains a program that prints all single digits
 * using a putchar function
 * Return: 0 (after execution)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar (num + '0');
	}
	putchar ('\n');
	return (0);
}
