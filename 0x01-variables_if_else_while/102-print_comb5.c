#include <stdio.h>

/**
 * main - Prints all possible combination 2
 * Return: 0 (success)
*/
int main(void)
{
	int i, p;

	for (i = 0; i < 100; i++)
	{
		for (p = 0; p < 100; p++)
		{
			if (i < p)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((p / 10) + 48);
				putchar((p % 10) + 48);
				if (i != 98 || p != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
