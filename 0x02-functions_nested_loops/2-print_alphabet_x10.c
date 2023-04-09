#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times in lowercase.
*/
void print_alphabet_x10(void)
{
	char b;
	int i;

	i = 0;

	while (i < 10)
	{
		b = 'a';
		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		i++;
	}
}
