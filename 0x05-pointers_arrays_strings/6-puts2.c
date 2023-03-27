#include "main.h"

/**
 * puts2 - prints every other character of string.
 * @str: string is printed
*/
void puts2(char *str)
{
	int longr = 0;
	int t = 0;
	char *y = str;
	int p;

	while  (*y != '\0')
	{
		longr++;
		y++;
	}
	t = longr - 1;
	for (p = 0; p <= t; p++)
	{
		if (p % 2 == 0)
		{
			putchar(str[p]);
		}
	}
	putchar('\n');
}
