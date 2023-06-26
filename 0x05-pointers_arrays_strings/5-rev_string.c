#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string parameter
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char end = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		end = s[i];
		s[i] = s[counter];
		s[counter] = end;
	}
}

