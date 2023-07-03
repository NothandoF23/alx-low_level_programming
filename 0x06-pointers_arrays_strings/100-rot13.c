#include "main.h"
#include <stdio.h>

/**
 * rot13 - encode a string using rot13
 * @s: input string argument
 * Return: s
 */

char *rot13(char *s)
{
	int x;
	int y;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == s1[y])
			{
				s[x] = s2[y];
				break;
			}
		}
	}
	return (s);
}


