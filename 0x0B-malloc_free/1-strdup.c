#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 * Return: string pointer or NULL
 */

char *_strdup(char *str)
{
	char *s;
	int i;

	if (str != NULL)
	{
		s = malloc((strlen(str)+ 1) * sizeof(char));
		if (s == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < strlen(str); i++)
		{
			s[i] = str[i];
		}
		return (s);
	}

	return (NULL);
}
