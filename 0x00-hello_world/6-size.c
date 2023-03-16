#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (success)
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of a char: %lu 1 byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu 4 byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: 8 %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: 8 %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %lu 8 byte(s)\n", (unsigned long)sizeof(f));
return (0);
}