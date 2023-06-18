#include <stdio.h>

/**
 * main - contains a program that prints all the numbers of base 16
 * in lowercase - it contains numbers and letters
 * Return: 0 (after execution)
 */


int main(void)
{

	int num;
	char letter;

	for (num = 0; num <= 9; num++)
	{
		putchar (num + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar (letter);
	}
	putchar ('\n');
	return (0);
}
