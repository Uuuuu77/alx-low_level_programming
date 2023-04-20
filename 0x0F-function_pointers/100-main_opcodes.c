#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point. Prints opcodes of its own main function.
 * @argc: input number of arguments
 * @argv: input array of arguments
 * Return: 0 (success)
*/
int main(int argc, char argv[])
{
	int byt, a;
	char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byt = atoi(argv[1]);

	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}
	p = (char *)main;

	for (a = 0; a < byt; a++)
	{
		if (a == byt - 1)
		{
			printf("%02hhx\n", p[a]);
			break;
		}
		printf("%02hhx ", p[a]);
	}
	return (0);
}
