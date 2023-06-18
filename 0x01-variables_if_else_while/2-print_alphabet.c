#include <stdio.h>

/**
 * main - contains a program that prints the alphabet letters
 * in lowercases
 * Return: 0 (after execution)
 */

int main(void)
{
	char letter;

	for (letter = 'a', letter <= 'z', letter++)
	{
		putchar (letter);
	}
	putchar ("\n");
	return (0);
}
