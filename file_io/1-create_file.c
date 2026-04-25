#include "main.h"

/**
 * create_file - Creates a file and writes a string to it.
 * @filename: The name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, bytes_written = 0;

	/* 1. Validate filename pointer */
	if (filename == NULL)
		return (-1);

	/* 2. Open file with specific flags and permissions (0600 = rw-------) */
	/* O_CREAT creates the file, O_TRUNC clears it if it exists */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* 3. If text_content is not NULL, calculate length and write */
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		bytes_written = write(fd, text_content, len);
	}

	/* 4. Verify write completeness and catch write failures */
	if (bytes_written == -1 || bytes_written != len)
	{
		close(fd);
		return (-1);
	}

	/* 5. Clean up and return success */
	close(fd);
	return (1);
}
