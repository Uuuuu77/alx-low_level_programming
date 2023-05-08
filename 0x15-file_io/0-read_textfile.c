#include "main.h"

/**
 * read_textfile - Entry point. It reads a text file and prints it.
 * @filename: input text file to be read and printed
 * @letters: input number of letters to be read
 * Return: if not written,read and is null 0, the actual letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *txt;
	ssize_t fd;
	ssize_t a;
	ssize_t b;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	txt = malloc(sizeof(char) * letters);
	b = read(fd, txt, letters);
	a = write(STDOUT_FILENO, txt, b);

	free(txt);
	close(fd);
	return (a);
}
