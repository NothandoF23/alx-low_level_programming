#include <stdio.h>

/**
 * main - prints the size of different data types using the printf
 * Return: 0 (on success)
 */

int main(void)
	{
	char c;
	int num;
	long int lngint;
	long long int llngint;
	float flt;

	printf("Size of a char: %c byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(num));
	printf("Size of a long int: %ld byte(s)\n", sizeof(lngint));
	printf("Size of a long long int: %lld byte(s)\n", sizeof(llngint));
	printf("Size of a float: %f byte(s)\n", sizeof(flt));

	return (0);
}


