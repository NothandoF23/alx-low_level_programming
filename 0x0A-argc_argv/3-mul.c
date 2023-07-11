#include <stdio.h>
#include "main.h"

/**
 * convertChartoI - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */

int convertChartoI(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);

	return (n);

}


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

	num1 = convertChartoI(rgv[1]);
	num2 = convertChartoI(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);
}

