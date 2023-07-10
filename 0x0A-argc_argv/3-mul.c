#include <stdio.h>
#include <stdlib.h>

/**
 * main - function prints the product of 2 arguments
 * @argc: argument count
 * @argv: argument vector / array
 * Return: 0 (on success)
 */


int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(rgv[1]); 
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);
}

