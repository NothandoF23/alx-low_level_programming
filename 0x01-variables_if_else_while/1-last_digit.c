#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - contains a program that generates random numbers and
 * prints the last digit of n & whether n is greater than 5, 0 ,< 6
 * Return: 0 (after execution)
 */

int main(void)
{
	int n;
	int lastdgt;
	char *lastS;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastdgt = n % 10;
	lastS = "and is less than 6 and not 0";

	if (lastdgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdgt);
	}
	else if (lastdgt == 0)
		{
		printf("Last digit of %d is %d and is 0\n", n, lastdgt);
		}
	else if ((lastdgt < 6) && (lastdgt != 0))
			{
		printf("Last digit of %d is %d %s\n", n, lastdgt, lastS);
			}

	return (0);
}
