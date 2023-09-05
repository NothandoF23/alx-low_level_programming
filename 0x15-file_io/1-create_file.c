#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: name of the file to create.
 * @text_content: string to write to the file.
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fl, printed;
	size_t count;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	fl = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	printed = write(fl, text_content, count);

	if (fl == -1 || printed == -1)
	{
		return (-1);
	}

	close(fl);

	return (1);
}

