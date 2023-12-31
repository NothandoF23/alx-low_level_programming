#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: input string argument
 * @s2: input string argument
 *
 * Return: s1 - s2, otherwise 0
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}
	return (0);
}

