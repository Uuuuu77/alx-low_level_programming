#include <stdio.h>

/**
 * main - Prints the lowercase in reverse
 * Return: 0 (success)
*/
int main(void)
{
	char sh;

	for (sh = 'z'; sh >= 'a'; sh--)
	{
		putchar(sh);
	}
	putchar('\n');
	return (0);
}
