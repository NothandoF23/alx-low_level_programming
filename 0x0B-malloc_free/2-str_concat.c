#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: string input
 * @s2: string input
 * Return: string pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j, count;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = (int)strlen(s1);
	len2 = (int)strlen(s2);
	s = malloc(((len1 + len2) + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	count = 0;
	for (i = 0; i < len1; i++)
	{
		s[count] = s1[i];
		count++;
	}
	for (j = 0; j < len2; j++)
	{
		s[count] = s2[j];
		count++;
	}

	s[count] = '\0';
	return (s);
}


