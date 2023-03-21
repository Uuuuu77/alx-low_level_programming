#include "main.h"

/**
 * times_table - prints the 9 time table, starting with 0
*/
void times_table(void)
{
	int i, h, t;

	for (i = 0; i < 10; i++)
	{
		for (h = 0; h < 10; h++)
		{
		t = h * i;
		if (h == 0)
		{
			_putchar(t + '0');
		}
		if (t < 10 && h != 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(t + '0');
		}
		else if (t >= 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar((t / 10) + '0');
			_putchar((t % 10) + '0');
		}
	}
	_putchar('\n');
}
}

