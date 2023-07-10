#include <stdio.h>
#include "main.h"

/**
 * main - function prints the product of 2 arguments
 * @argc: argument count
 * @argv: argument vector / array
 * Return: 0 (on success)
 */


int main(int argc, char *argv[])
{
	int i;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	i = argv[1] * argv[2];

	printf("%d\n", i);
	return (0);
}

