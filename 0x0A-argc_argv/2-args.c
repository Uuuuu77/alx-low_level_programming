#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints all arguments it receives.
 * @argc: input number of arguments
 * @argv: input array of srguments
 * Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	int all;

	for (all = 0; all < argc; all++)
	{
		printf("%s\n", argv[all]);
	}
	return (0);
}
