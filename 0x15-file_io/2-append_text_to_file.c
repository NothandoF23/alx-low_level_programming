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
	int fl, printed, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fl = open(filename, O_WRONLY | O_APPEND);
	printed = write(o, text_content, len);

	if (printed == -1 || fl == -1)
	{
		return (-1);
	}

	close(fl);

	return (1);
}


