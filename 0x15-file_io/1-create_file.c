#include "main.h"

/**
 * create_file - Creates a file
 * @filename: String containing the file name as well as the directory path
 * @text_content: Pointer to a string containing the content to
 * write to the file
 *
 * Return: 1 on success, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int f_descriptor;
	size_t text_length = 0;
	ssize_t bytes_written = 0;

	if (filename == NULL)
		return (-1);
	/* Evaluate the number of bytes that will be written in */
	if (text_content != NULL)
	{
		while (*(text_content + text_length) != '\0')
			text_length++;
	}
	f_descriptor =
		open(filename, O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR);
	if (f_descriptor == -1)
		return (-1);
	bytes_written = write(f_descriptor, text_content, text_length);
	if (bytes_written == -1)
		return (-1);
	close(f_descriptor);
	return (1);
}
