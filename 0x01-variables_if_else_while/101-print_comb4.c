#include <stdio.h>

/**
 * main - Prints all possible different combination of 3 digits
 * Return: 0 (success)
*/
int main(void)
{
	int n, m, k;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (k = 50; k < 58; k++)
			{
				if (k > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(k);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
