#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: text file being read
 * @letters: number of letters to read
 * Return: actual number of letters it could read & print
 * 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, char_read, r;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	r = read(fd, buffer, letters);
	char_read = write(STDOUT_FILENO, buffer, r);
	if (char_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (char_read);
}

