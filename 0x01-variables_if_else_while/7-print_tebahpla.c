#include <stdio.h>

/**
 * main - contains a program that prints the alphabet letters
 * in reverse order
 * Return: 0 (after execution)
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar (letter);
	}
	putchar ('\n');
	return (0);
}
