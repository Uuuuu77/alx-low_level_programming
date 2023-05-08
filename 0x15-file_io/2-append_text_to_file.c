#include "main.h"

/**
 * append_text_to_file - Entry point. It appends text at end of a file.
 * @filename: input pointer to the name of the file
 * @text_content: input string to add at the end of line
 * Return: filename & text_content is NULL or function fails -1,
 * otherwise 1 (success)
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, file = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (file = 0; text_content[file];)
			file++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, file);

	if (a == -1 || b == -1)
		return (-1);

	return (1);
}
