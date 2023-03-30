#include "main.h"

/**
 * *leet - encodes a string into 1337.
 * @n: input value
 * Return: n value (success)
*/
char *leet(char *n)
{
	int r, m;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (r = 0; n[r] != '\0'; r++)
	{
		for (m = 0; m < 10; m++)
		{
			if (n[r] == s1[m])
			{
				n[r] = s2[m];
			}
		}
	}
	return (n);
}
