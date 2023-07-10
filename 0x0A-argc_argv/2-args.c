#include <stdio.h>
#include "main.h"

/**
 * main - function prints all arguments entered in the program
 * @argc: argument count
 * @argv: argument vector / array
 * Return: 0 (on success)
 */


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	printf("\n");
	return (0);
}

