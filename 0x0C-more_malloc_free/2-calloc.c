#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory using malloc.
 * @size: size of bytes
 * @nmemb: number of elements
 * Return: pointer, otherwise NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (int)nmemb; i++)
	{
		p[i] = 0;
	}
	return (p);
}
