#include <fcntl.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints
 * @filename: pointer to the list structure
 * @letters: number of letters it should read and print
 *
 * Return: the number of letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fl;
	ssize_t i, j, len;

	fl = (*char) calloc(letters, sizeof(char));
	if (fl == NULL)
	{
		return (0);
	}

	i = open(filename, O_RDONLY);
	if (i == -1)
	{
		return (0);
	}
	j = read(i, fl, letters);
	len = write(STDOUT_FILENO, fl, j);
	free(fl);
	close(i);
	return (len);
}
