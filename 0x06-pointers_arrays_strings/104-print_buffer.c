#include "main.h"

/**
 * print_buffer - prints buffer.
 * @b: buffer
 * @size: the size to be printed
*/
void print_buffer(char *b, int size)
{
	int o, g, p;

	o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		g = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		for (p = 0; p < 10; p++)
		{
			if (p < g)
				printf("%02x", *(b + o + p));
			else
				printf(" ");
			if (p % 2)
			{
				printf(" ");
			}
		}
		for (p = 0; p < g; p++)
		{
			int c = *(b + o + p);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		o += 10;
	}
}
