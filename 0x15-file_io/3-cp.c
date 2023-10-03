#include <stdio.h>
#include "main.h"

/**
 * main - Copies content from one file to another
 * @argc: Number of arguments passed to the program in the terminal
 * @argv: Pointer to an array of strings containing the actual
 * arguments passed to the program
 *
 * Return: Always 0 (Successful exit)
 */
int main(int argc, char **argv)
{
	int fd_to;
	int fd_from;
	char *buffer;
	ssize_t bytes_read = 0;
	ssize_t bytes_written = 0;
	int flag = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * 1024);
	/* Handling the file_from token */
	fd_from = open(argv[1], O_RDONLY);

	/* Handling the file_to token */
	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		if (flag > 0)
			fd_to = open(argv[2], O_WRONLY | O_APPEND);
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || fd_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		flag++;
	}
	if (fd_from == -1 || bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_close(fd_from);
	fd_close(fd_to);
	free(buffer);
	return (0);
}

/**
 * fd_close - Closes any open file descriptor
 * @f_descriptor: The file descriptor that is open
 *
 * Return: Nothing
 */
void fd_close(int f_descriptor)
{
	int ret_close; /* Value returned form the close syscall */

	ret_close = close(f_descriptor);
	if (ret_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_descriptor);
		exit(100);
	}
	else
	{
		return;
	}
}
