#include <stdio.h>
#include "main.h"

/**
 * main - function prints the number of arguments
 * @argc: argument count
 * @argv: argument vector / array
 * Return: 0 (on success)
 */


int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

