#include "main.h"

/**
 * print_alphabet - function that prints alphabets in lowercase
 * Return: nothing
 *
 */

void print_alphabet(void)
{
	char Alphabet;

	for (Alphabet = 'a'; Alphabet <= 'z'; Alphabet++)
	{
		_putchar(Alphabet);
	}
	_putchar('\n');
}

