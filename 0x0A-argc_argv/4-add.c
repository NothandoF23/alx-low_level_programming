#include <stdio.h>
#include "main.h"

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
		if ((argv[i] >= "0" && argc[i] <= "9"))
	{
		i += argv[i];
	}
		printf("Error\n");
		return (1);
	}
	return (i);
}

