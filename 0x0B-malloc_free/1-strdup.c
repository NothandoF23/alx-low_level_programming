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
	int i, len;

	if (str != NULL)
	{
		len = (int)strlen(str);
		s = malloc((len + 1) * sizeof(char));
		if (s == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < len; i++)
		{
			s[i] = str[i];
		}
		return (s);
	}

	return (NULL);
}
