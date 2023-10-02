#include "main.h"
#define BYTE_SIZE 1024

char *create_buffer(char *file);
void error_100(int fd);
void error_99(int w, int to, char *buffer, char **argv);

/**
 * create_buffer -  Creates a buffer and
 * Allocates 1024 bytes for the buffer
 * @file: file name
 * Return: A newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * BYTE_SIZE);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * error_100 - Closes file descriptors
 * throws an error if closing failed
 * @fd: The file descriptor
 */
void error_100(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * error_99 - checks if write was a success
 * throws an error if write failed
 * @w: write status
 * @to: where we are writting to
 * @buffer: buffer
 * @argv: argument vector
 */
void error_99(int w, int to, char *buffer, char **argv)
{

	if (to == -1 || w == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
		free(buffer);
		exit(99);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, throws errors otherwise
 */
int main(int argc, char *argv[])
{
	int from, to, _read, _write;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	_read = read(from, buffer, BYTE_SIZE);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || _read == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		_write = write(to, buffer, _read);
		error_99(_write, to, buffer, argv);

		_read = read(from, buffer, BYTE_SIZE);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (_read > 0);

	free(buffer);
	error_100(from);
	error_100(to);

	return (0);
}

