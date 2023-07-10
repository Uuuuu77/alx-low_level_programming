#include "main.h"

/**
 * read_textfile - Entry point->Reads the text file and print to STDOUT.
 * @filename: input text file read
 * @letters: input number of letters to be read
 * Return: numbers of letters read and printed (Success) or if not 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t x;
	ssize_t y;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	y = read(fd, buff, letters);
	x = write(STDOUT_FILENO, buff, y);

	free(buff);
	close(fd);
	return (x);
}
