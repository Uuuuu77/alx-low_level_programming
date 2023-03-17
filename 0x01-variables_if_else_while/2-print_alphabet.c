#include <stdio.h>

/**
 * main - Prints the alphabet
 * Return: 0 (success)
*/
int main(void)
{
	char [26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar("alphabet %c\n", (i));
	}
	return (0);
}
