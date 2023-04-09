#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * check_num - check the digit of a string.
 * @str: input array string
 * Return: 0 (success)
*/
int check_num(char *str)
{
	unsigned int number;

	number = 0;

	while (number < strlen(str))
	{
		if (!isdigit(str[number]))
		{
			return (0);
		}
		number++;
	}
	return (1);
}

/**
 * main - Prints its name.
 * @argc: input number arguments
 * @argv: input array of arguments
 * Return: 0 (success)
*/
int main(int argc, char *argv[])
{
	int x = 1, y;
	int sum = 0;

	while (x < argc)
	{
		if (check_num(argv[x]))
		{
			y = atoi(argv[x]);
			sum += y;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		x++;
	}
	printf("%d\n", sum);
	return (0);
}
