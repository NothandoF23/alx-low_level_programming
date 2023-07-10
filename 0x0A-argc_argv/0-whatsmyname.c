#include <stdio.h>
#include "main.h"

/**
 * main - function prints the name of the program
 * @argc: argument count
 * @argv: argument vector / array
 * Return: 0 (on success)
 */


int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
