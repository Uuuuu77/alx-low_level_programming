#include <stdio.h>

/**
 * main - Prints the alphabet
 * Return: 0 (success)
*/
int main(void)
{
char a;

for (a = 'a'; a <= 'z'; a++)
{
	putchar(a);
}
for (a = 'A'; a <= 'Z'; a++)
{
	putchar(a);
}
putchar('\n');
return (0);
}
