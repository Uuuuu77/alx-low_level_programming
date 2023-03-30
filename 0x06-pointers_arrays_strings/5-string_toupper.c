#include "main.h"

/**
 * *string_toupper - changes lowercase to uppercase
 * @m: input pointer
 * Return: m (success)
*/
char *string_toupper(char *m)
{
	int b = 0;

	while (m[b] != '\0')
	{
		if (m[b] >= 'a' && m[b] <= 'z')
		{
			m[b] = m[b] - 32;
		}
		m++;
	}
	return (m);
}
