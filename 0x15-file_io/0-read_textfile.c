#include "main.h"

/**
 * read_and_print_text_file - reads a text file and prints its contents
 * @file_path: the path to the file to read
 * @max_chars: the maximum number of characters to print
 *
 * Return: the number of characters printed. If it fails, returns 0.
 */
ssize_t read_and_print_text_file(const char *file_path, size_t max_chars)
{
    int file_descriptor;
    ssize_t chars_read, chars_written;
    char *buffer;

    if (!file_path)
        return (0);

    file_descriptor = open(file_path, O_RDONLY);

    if (file_descriptor == -1)
        return (0);

    buffer = malloc(sizeof(char) * max_chars);
    if (!buffer)
        return (0);

    chars_read = read(file_descriptor, buffer, max_chars);
    chars_written = write(STDOUT_FILENO, buffer, chars_read);

    close(file_descriptor);

    free(buffer);

    return (chars_written);
}

