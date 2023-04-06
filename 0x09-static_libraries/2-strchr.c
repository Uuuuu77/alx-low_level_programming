#include "main.h"

/**
 * *_strchr - locates a character in a string.
 * @s: input pointer
 * @c: input character
 * Return: 0 (success)
*/
char *_strchr(char *s, char c)
{
	int p;

	p = 0;

	for (; s[p] >= '\0'; p++)
	{
		if (s[p] == c)
		{
			return (&s[p]);
		}
	}
	return (0);
}
