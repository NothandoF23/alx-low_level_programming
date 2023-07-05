#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: number / integer argument
 * Return: -1 if n is negative, 1 if n is 0 else factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
