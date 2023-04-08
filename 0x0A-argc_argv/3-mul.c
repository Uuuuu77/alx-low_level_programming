#include <stdio.h>
#include "main.h"

/**
 * _atoi - Changes string to an integer.
 * @s: input string
 * Return: the changed results (success)
*/
int _atoi(char *s)
{
	int a, b, c, d, len, digit;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	len = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (a < len && d == 0)
	{
		if (s[a] == '-')
			b++;
		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (c);
}

/**
 * main - multiply 2 numbers.
 * @argc: input number of arguments
 * @argv: input array of arguments
 * Return: 1 (error), 0 (success)
*/
int main(int argc, char *argv[])
{
	int result, x, y;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	result = x * y;

	printf("%d\n", result);
	return (0);
}
