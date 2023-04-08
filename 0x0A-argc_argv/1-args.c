#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints number of arguments passed to it.
 * @argc: input number of arguments
 * @argv: input array of arguments
 * Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	(void)argv; /*just ignore argv*/

	printf("%d\n", argc - 1);
	return (0);
}
