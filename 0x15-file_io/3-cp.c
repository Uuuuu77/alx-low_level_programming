#include "main.h"

void closing(int fd);

/**
 * closing - Entry point-> It closes the files.
 * @fd: input file descriptor to be closed
*/
void closing(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point-> copies content to another file.
 * @ac: input number of arguments
 * @av: input double pointer to array of arguments
 * Return: 0 (success)
*/
int main(int ac, char **av)
{
	char *buffer;
	int fd_from, fd_to, r, w;

	buffer = malloc(sizeof(char) * 1024);
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Cant't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 00664);
	while ((r = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w < 0 || fd_to < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	closing(fd_from);
	closing(fd_to);
	free(buffer);

	return (0);
}
