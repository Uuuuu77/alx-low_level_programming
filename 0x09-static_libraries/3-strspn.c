#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: input pointer
 * @accept: input character bytes
 * Return: 0 (success)
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k;
	int f;

	k = 0;

	while (*s)
	{
		for (f = 0; accept[f]; f++)
		{
			if (*s == accept[f])
			{
				k++;
				break;
			}
			else if (accept[f + 1] == '\0')
			{
				return (k);
			}
		}
		s++;
	}
	return (k);
}
