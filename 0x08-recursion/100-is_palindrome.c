#include "main.h"

int check_pal(char *s, int b, int length);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Is it a palindrome or not, lets check it out.
 * @s: input value
 * Return: 1 or 0 (success)
*/
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - This return the length.
 * @s: calculated input value
 * Return: length (success)
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - Recursively checks if its palindrome.
 * @s: input value to check
 * @b: input iterator
 * @length: the length of a string
 * Return: 1 if its palindrome and 0 if not (success)
*/
int check_pal(char *s, int b, int length)
{
	if (*(s + b) != *(s + length - 1))
	{
		return (0);
	}
	if (b >= length)
	{
		return (1);
	}
	return (check_pal(s, b + 1, length - 1));
}
