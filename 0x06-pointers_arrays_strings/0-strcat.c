#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 * Return: an appended string
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	for (x = 0; dest[x] != '\0'; ++x)
	{
	}
	for (y = 0; src[y] != '\0'; ++y)
	{
		dest[x] = src[y];
	}

	dest[x] = '\0';

	return (*dest);

}
