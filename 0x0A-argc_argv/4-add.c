#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - function prints the sum of 2 numbers
 * @argc: argument count
 * @argv: argument vector / array
 * Return: 0 (on success)
 */


int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}

	for (i = 0; i < argc; i++)
	{
		if (isdigit(argv[i]))
	{
		i += atoi(argv[i]);
	}
		printf("Error\n");
		return (1);
	}
	return (i);
}

