
#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: string parameter
 * Return: print
 */
void puts2(char *str)
{
	int len = 0;
	int temp = 0;
	char *s = str;
	int i;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	temp = len - 1;
	for (i = 0 ; i <= temp ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}


