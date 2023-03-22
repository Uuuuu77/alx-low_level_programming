/*
 * File: 101-natural.c
 * Auth: john njuguna
*/

#include <stdio.h>

/**
 * main - list all natural numbers.
 * Return: 0 (success)
*/
int main(void)
{
	int u, sum = 0;

	for (u = 0; u < 1024; u++)
	{
		if ((u % 3) == 0 || (u % 5) == 0)
			sum += u;
	}
	printf("%d\n", sum);
	return (0);
}
