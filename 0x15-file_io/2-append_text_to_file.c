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
    int file_descriptor;
    int num_letters;
    int write_result;

    if (!filename)
        return (-1);

    file_descriptor = open(filename, O_WRONLY | O_APPEND);

    if (file_descriptor == -1)
        return (-1);

    if (text_content)
    {
        for (num_letters = 0; text_content[num_letters]; num_letters++)
            ;

        write_result = write(file_descriptor, text_content, num_letters);

        if (write_result == -1)
            return (-1);
    }

    close(file_descriptor);

    return (1);
}
