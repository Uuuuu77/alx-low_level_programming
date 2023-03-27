#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: sring is printed
*/
void print_rev(char *s)
{
	int longp = 0;
	int a;

	while (*s != '\0')
	{
		longp++;
		s++;
	}
	s--;
	for (a = longp; a > 0; a--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
