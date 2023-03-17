#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a number
 * Return: 0 (success)
*/
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	printf("last digit of %d is %d , n, a);
	if (x > 5)
	{
		printf("and is greater than 5");
	}
	if (x==0)
	{
		print("and is 0");
	}
	if (x < 6 && a !=0)
	{
		printf("and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
