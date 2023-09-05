#include "main.h"

/**
 * read_textfile- function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: file to read
 * @letters: number of letters to be read and printed
 * Return: actual number of letters it could read and print, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fl, input, printed;

	if (filename == NULL)
	{
		return (0);
	}
	fl = open(filename, O_RDONLY);
	if (fl == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	input = read(fl, buffer, letters);
	printed = write(STDOUT_FILENO, buffer, input);

	free(buffer);
	close(fl);
	return (printed);
}

