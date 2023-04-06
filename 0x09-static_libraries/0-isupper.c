#include "main.h"

/**
 * _isupper - prints uppercase letters.
 * @c: input value to be checked
 * Return: 0 or 1 (success)
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
