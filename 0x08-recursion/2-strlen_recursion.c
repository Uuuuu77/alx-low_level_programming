#include "main.h"

/**
 * _strlen_recursion - lets check out the length of a string.
 * @s: - input string
 * Return: length (success)
*/
int _strlen_recursion(char *s)
{
	int len;

	len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
