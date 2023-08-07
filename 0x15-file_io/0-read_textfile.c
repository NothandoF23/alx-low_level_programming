#include <fcntl.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * @filename: pointer to the list structure
 * @letters: number of letters it should read and print
 *
 * Return: the number of letters read
 */

size_t read_textfile(const char *filename, size_t letters)
{
	char *fl;
	size_t n, len;

	fl = (*char) calloc(letters, sizeof(char));
	if (fl == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	n = open(filename, O_RDWR);
	if (n == -1)
		return (0);

	n = read(filename, fl, letters);
	if (n == -1)
		return (0);


	len = write(n, filename, letters);
	if (len == -1)
		return (0);

	return (n);

	close(n);
}
