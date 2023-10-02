#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Pointer to the string containing the file path and name
 * @letters: The number of letter to be read and printed
 *
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read = 0;
	ssize_t bytes_written = 0;
	int f_descriptor;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	f_descriptor = open(filename, O_RDONLY);
	if (f_descriptor == -1)
		return (0);
	bytes_read = read(f_descriptor, buffer, letters);
	if (bytes_read == -1)
		return (-1);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0);
	free(buffer);
	close(f_descriptor);
	return (bytes_written);
}
