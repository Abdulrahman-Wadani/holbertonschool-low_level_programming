#include "main.h"

/**
 * error_98 - Handles read errors
 * @filename: The name of the file that could not be read
 */
void error_98(const char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * error_99 - Handles write errors
 * @filename: The name of the file that could not be written to
 */
void error_99(const char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * error_100 - Handles file descriptor closure errors
 * @fd: The file descriptor that could not be closed
 */
void error_100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success. Exits with specific codes on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_98(argv[1]);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_99(argv[2]);
	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			error_99(argv[2]);
	}
	if (bytes_read == -1)
		error_98(argv[1]);
	if (close(fd_from) == -1)
		error_100(fd_from);

	if (close(fd_to) == -1)
		error_100(fd_to);
	return (0);
}
