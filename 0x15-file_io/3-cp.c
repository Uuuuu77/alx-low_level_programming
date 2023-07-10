#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Entry point-> It allocates 1024 bytes for a buffer.
 * @file: input name of the file buffer that is storing character for
 * Return: input pointer to newly-allocated buffer (Success)
*/
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}


/**
 * close_file - Entry point-> It closes the file descriptors.
 * @fd: input file descriptors to be closed
*/
void close_file(int fd)
{
	int b;

	b = close(fd);
	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point-> It copies the content of a file to another.
 * @argc: input number of arguments supplied in a program
 * @argv: input array of pointers to the arguments
 * Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
	int from, to, a, z;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	a = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || a == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from this file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		z = write(to, buffer, a);
		if (to == -1 || z == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to this file %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		a = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (a > 0);
	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
