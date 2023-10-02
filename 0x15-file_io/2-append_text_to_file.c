#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Pointer to a string containing a file name and its path
 * @text_content: Pointer to the string that is to be appended to the file
 *
 * Return: 1 on success, otherwise 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	size_t text_length = 0;
	int f_descriptor;
	ssize_t bytes_written = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (*(text_content + text_length) != '\0')
			text_length++;
	}
	f_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (f_descriptor == -1)
		return (-1);
	bytes_written = write(f_descriptor, text_content, text_length);
	if (bytes_written == -1)
		return (-1);
	close(f_descriptor);
	return (1);
}
