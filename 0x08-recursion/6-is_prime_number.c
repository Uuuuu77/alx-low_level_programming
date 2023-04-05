#include "main.h"

int actual_prime(int n, int h);

/**
 * is_prime_number - is it a prime number or not.
 * @n: number to evaluate
 * Return: 1 if its prime, 0 if its not
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Recursively calculates a number is prime or not.
 * @n: number to evaluate
 * @h: iterator
 * Return: is it prime or not
*/
int actual_prime(int n, int h)
{
	if (h == 1)
	{
		return (1);
	}
	if (n % h == 0 && h > 0)
	{
		return (0);
	}
	return (actual_prime(n, h - 1));
}
