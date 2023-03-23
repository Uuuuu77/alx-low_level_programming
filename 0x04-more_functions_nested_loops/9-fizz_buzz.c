#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100 followed by new line
 * but for mutiples of 3 print Fizz 5 print Buzz
 * Return: 0 (success)
*/
int main(void)
{
	int w;

	for (w = 1; w <= 100; w++)
	{
		if (w % 3 == 0 && w % 5 != 0)
		{
			printf("Fizz");
		}
		else if (w % 5 == 0 && w % 3 != 0)
		{
			printf("Buzz");
		}
		else if (w % 3 == 0 && w % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (w == 1)
		{
			printf("%d", w);
		}
		else
		{
			printf(" %d", w);
		}
	}
	printf("\n");
	return (0);
}
