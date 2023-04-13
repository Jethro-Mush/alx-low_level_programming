#include "main.h"
/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The text content to append to the file.
 *
 * Return: 1 if the file exists, -1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int num_letters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;

		rwr = write(fd, text_content, num_letters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
