#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: input pointer to be printed
 * @accept: input character to be printed
 * Return: 0 (success)
*/
char *_strpbrk(char *s, char *accept)
{
	int g;

	while (*s)
	{
		for (g = 0; accept[g]; g++)
		{
			if (*s == accept[g])
			{
				return (s);
			}
		}
	s++;
	}
	return ('\0');
}
