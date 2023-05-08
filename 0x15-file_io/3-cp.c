#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Entry point. 1024 bytes allocated in the buffer
 * @file: input name of file buffer storing character
 * Return: pointer to newly allocated buffer
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
 * close_file - Entry point. File descriptors are closed.
 * @fd: input file descriptor is closed
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
 * main - Entry point. Copies contents from one file to another.
 * @argc: input number of arguments supplied to the program
 * @argv: input array of pointer to arguments
 * Return: 0 (success)
 *
 * Description: if arguments count is incorrect exit code 97.
 * if file_from does not exit or can not be read exit code 98.
 * if file_to can not be created or written exit code 99.
 * if file_to || file_from can not be closed exit code 100.
*/
int main(int argc, char *argv[])
{
	int from, to, a, b;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	a = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || a == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		b = write(to, buff, a);
		if (to == -1 || b == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		a = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (a > 0);

	free(buff);
	close_file(from);
	close_file(to);

	return (0);
}
