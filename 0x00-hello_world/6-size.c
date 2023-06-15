#include <stdio.h>

/**
 * main - prints the size of different data types using the printf
 * Return: 0 (on success)
 */

int main(void)
	{
	printf("Size of a char: %1u byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %1u byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %1u byte(s)\n", (unsigned long) sizeof(long int));
	printf("Size of a long long int: %1u byte(s)\n", (unsigned long) sizeof(long long int));
	printf("Size of a float: %1u byte(s)\n", (unsigned long)sizeof(float));

	return (0);
}


