#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: string to printed
*/
void puts_half(char *str)
{
	int j, n, longy;

	longy = 0;

	for (j = 0; str[j] != '\0'; j++)
	{
		longy++;
	}
	n = (longy / 2);
	if ((longy % 2) == 1)
	{
		n = ((longy + 1) / 2);
	}
	for (j = n; str[j] != '\0'; j++)
	{
		putchar(str[j]);
	}
	putchar('\n');
}
