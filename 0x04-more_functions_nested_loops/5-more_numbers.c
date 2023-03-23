#include "main.h"

/**
 * more_numbers - prints more numbers.
*/
void more_numbers(void)
{
	int r, j;

	for (r = 1; r <= 10; r++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar('1');
				_putchar((j % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
