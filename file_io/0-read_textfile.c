#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX STDOUT.
 * @filename: The name of the file to read.
 * @letters: The exact number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print.
 * 0 if filename is NULL, file can't be opened/read,
 * or if write fails/writes fewer bytes than expected.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	/* 1. Null check for the filename parameter */
	if (filename == NULL)
		return (0);

	/* 2. Open the file in Read-Only mode */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* 3. Allocate memory for the buffer to hold 'letters' amount of bytes */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	/* 4. Read the contents into the buffer */
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* 5. Write the exact bytes read to POSIX standard output */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	
	/* 6. Verify write success and completeness */
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* 7. Clean up memory and close file descriptor */
	free(buffer);
	close(fd);

	return (bytes_written);
}
