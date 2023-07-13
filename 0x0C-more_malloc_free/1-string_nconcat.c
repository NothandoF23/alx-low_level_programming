#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string argument
 * @s2: string argument
 * @n: integer argument
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1, len2;
	int i, j, count;

	count = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	str = malloc((len1 + n) + 1 * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < (int)len1; i++)
	{
		str[count] = s1[i];
		count++;
	}
	if (n >= len2)
	{
		for (j = 0; j < (int)len2; j++)
		{
			str[count] = s2[j];
			count++;
		}
	}
	else
	{
		for (j = 0; j < (int)n; j++)
		{
			str[count] = s2[j];
			count++;
		}
	}
	str[count] = '\0';
	return (str);
}

