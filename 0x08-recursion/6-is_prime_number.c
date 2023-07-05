#include "main.h"
/**
 * isPrime - check if n is prime
 * @n: number to check if prime
 * @i: base input
 * Return: 0 if n is not prime , 1 otherwise
 */

int isPrime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % i == 0 && i > 1)
	{
		return (0);
	}
	else if ((n / i) < i)
	{
		return (1);
	}
	return (isPrime(n, i + 1));
}

/**
 * is_prime_number - Check if number is prime
 * @n: integer argument
 * Return: 0 if n is not prime, 1 otherwise
 */

int is_prime_number(int n)
{
	return (isPrime(n, 1));
}

