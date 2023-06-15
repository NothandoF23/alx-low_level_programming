#include <stdio.h>
#include <unistd.h>

/**
 * main - prints text to stderr using the fput function
 * Return: 1 (on success)
 */

int main(void)
	{
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stderr);
	return (1);
	
}

