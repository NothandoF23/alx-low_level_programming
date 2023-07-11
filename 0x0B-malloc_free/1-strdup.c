#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 * Return: string pointer or NULL
 */

char *_strdup(char *str)
{
	char *s;

	if (str != NULL)
	{
		s = malloc(strlen(str) * sizeof(char));
		if (s == NULL)
		{
			return (NULL);
		}
		s = str;
		return (s);
	}

	return (NULL);
}
