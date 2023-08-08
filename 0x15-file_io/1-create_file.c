#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: Name of the file to create.
 * @text_content: String to write to the file.
 *
 * Return: If the function fails -1, Otherwise 1.
 */
int create_file(const char *filename, char *text_content)
{
	int i, j, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	j = write(i, text_content, len);

	if (i == -1 || j == -1)
		return (-1);

	close(i);

	return (1);
}
