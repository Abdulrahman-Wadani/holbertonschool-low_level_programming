#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, bytes_written = 0;

	/* 1. Null check for the filename pointer */
	if (filename == NULL)
		return (-1);

	/* 2. Open file for writing, appending to the end. Do NOT use O_CREAT */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* 3. If text_content is valid, compute length and write */
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		bytes_written = write(fd, text_content, len);
		/* 4. Verify successful write operation */
		if (bytes_written == -1 || bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}

	/* 5. Clean up and return success */
	close(fd);
	return (1);
}
