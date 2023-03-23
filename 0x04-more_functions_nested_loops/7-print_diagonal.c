#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed
*/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int o, j;

		for (o = 0; o < n; o++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == o)
				{
					_putchar('\\');
				}
				else if (j < o)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
