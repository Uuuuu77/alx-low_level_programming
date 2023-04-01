#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (success)
*/
int main(void)
{
	int b;
	char g;
	long int u;
	long long int h;
	float t;
	printf("Size of a char: %ld byte(s)\n", sizeof(g));
	printf("Size of an int: %ld byte(s)\n", sizeof(b));
	printf("Size of a long int: %ld byte(s)\n", sizeof(u));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(h));
	printf("size of a float: %ld byte(s)\n", sizeof(t));
	return (0);
}
