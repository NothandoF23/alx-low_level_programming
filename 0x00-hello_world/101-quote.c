#include <stdio.h>
#include <unistd.h>

/**
 * main - prints text using the write function
 * Return: 1 (on success)
 */

int main(void)
	{
	char qt[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, qt, 59);

	return (1);

}
