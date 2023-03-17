#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e
 * Return: 0 (success)
*/
int main(void)
{
	int h;

	for (h = 97; h < 123; h++)
	{
		if (h != 101 && h != 113)
		{
			putchar(h);
		}
	}
	putchar('\n');
	return (0);
}
