#include <stdio.h>
#include <stdlib.h>


/**
 * create_buf - creates and allocates 1024 bytes for a buffer.
 * @file: file to store in the buffer
 * Return: A pointer to the buffer
 */
char *create_buf(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_fd - Close file descriptors.
 * @fd: file descriptor
 */
void close_fd(int fd)
{
	int i;

	i = close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file
 * @argc: the number of input arguments
 * @argv: An array of the input arguments
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int from, to, read_input, write_output;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buf(argv[2]);
	from = open(argv[1], O_RDONLY);
	read_input = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || read_input == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		write_output = write(to, buffer, read_input);
		if (to == -1 || write_output == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		read_input = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_input > 0);

	free(buffer);
	close_fd(from);
	close_fd(to);

	return (0);
}

