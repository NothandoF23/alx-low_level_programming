#include <stdio.h>

/**
 * main - contains a program that prints the alphabet letters
 * in lowercases except for e and q
 * Return: 0 (after execution)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e' || letter == 'q')
		{
		}
		else
		{
			putchar (letter);
		}
	}
	putchar ('\n');
	return (0);
}
