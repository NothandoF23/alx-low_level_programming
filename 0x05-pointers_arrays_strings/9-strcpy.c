#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (*(src + len) != '\0')
	{
		len++;
	}
	for ( ; i < len ; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}

