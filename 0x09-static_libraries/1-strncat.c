#include "main.h"

/**
 * *_strncat - function that concatenates two strings.
 * @dest: first string
 * @src: 2nd string
 * @n: number of bytes from string 2
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (y < n && src[y] != '\0')
	{
	dest[x] = src[y];
	x++;
	y++;
	}

	dest[x] = '\0';
	return (dest);

}
