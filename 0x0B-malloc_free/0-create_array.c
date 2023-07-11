#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: char to initialize array with
 * Return: pointer of te array, otherwise NULL
 */

char *create_array(unsigned int size, char c)
{
	char *a;

	if (size == 0)
	{
		return (NULL);
	}

	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	a[0] = c;
	return (a);
}
