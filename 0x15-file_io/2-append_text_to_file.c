#include "main.h"

/**
 * append_text_to_file - Entry point-> It append text at the end of a file.
 * @filename: input pointer to the name of a file
 * @text_content: input string to add at the end of a file
 * Return: 1 (Success), Otherwise -1 (Error)
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int jj, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	jj = open(filename, O_WRONLY | O_APPEND);
	w = write(jj, text_content, len);

	if (jj == -1 || w == -1)
		return (-1);
	close(jj);

	return (1);
}
