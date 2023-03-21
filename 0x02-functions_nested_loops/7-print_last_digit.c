#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
*/
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
{
	_putchar(-r + 48);
	return (-r);
}
else
{
	_putchar(r + 48);
	return (r);
}
}
