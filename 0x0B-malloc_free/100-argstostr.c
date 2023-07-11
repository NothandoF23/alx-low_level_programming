#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: int input
 * @av: double pointer array
 * Return: pointer to string , otherwise NULL
 */

char *argstostr(int ac, char **av)
{
	int i, n, j = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}
	len += ac;
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[j] = av[i][n];
			j++;
		}

	if (str[j] == '\0')
	{
		str[j++] = '\n';
	}

	}

	return (str);
}

