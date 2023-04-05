#include "main.h"

int actual_sqrt_recursion(int n, int t);

/**
 * _sqrt_recursion - Returns natural square root of a number.
 * @n: input number
 * Return: the square root (success)
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recursion to find actual square root number.
 * @n: calculated square number
 * @t: iterator
 * Return: actual square root
*/
int actual_sqrt_recursion(int n, int t)
{
	if (t * t > n)
	{
		return (-1);
	}
	if (t * t == n)
	{
		return (t);
	}
	return (actual_sqrt_recursion(n, t + 1));
}
