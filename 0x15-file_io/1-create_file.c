#include "main.h"

/**
 * create_file - Entry point. It creates a file.
 * @filename: input pointer to the name of the fil to create
 * @text_content: input pointer to a string to write to the file
 * Return: if it fails -1, and 1 (success)
*/
int create_file(const char *filename, char *text_content)
{
	int fd, b, file = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (file = 0; text_content[file];)
			file++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(fd, text_content, file);

	if (fd == -1 || b == -1)
		return (-1);

	return (1);
}
