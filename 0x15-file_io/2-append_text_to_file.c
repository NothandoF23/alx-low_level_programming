#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fl, printed;
	size_t count;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	fl = open(filename, O_WRONLY | O_APPEND);
	printed = write(fl, text_content, count);

	if (printed == -1 || fl == -1)
	{
		return (-1);
	}

	close(fl);

	return (1);
}


