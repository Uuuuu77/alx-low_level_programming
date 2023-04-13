#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - Concatenates two string.
 * @s1: input string
 * @s2: input string
 * @n: input number of byte
 * Return: pointer to the concatenated string (success)
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int x = 0, y = 0, ss = 0, sn = 0;

	while (s1 && s1[ss])
		ss++;
	while (s2 && s2[sn])
		sn++;

	if (n < sn)
		conc = malloc(sizeof(char) * (ss + n + 1));
	else
		conc = malloc(sizeof(char) * (ss + sn + 1));

	if (!conc)
		return (NULL);
	while (x < ss)
	{
		conc[x] = s1[x];
		x++;
	}
	while (n < sn && x < (ss + n))
		conc[x++] = s2[y++];
	while (n >= sn && x < (ss + sn))
		conc[x++] = s2[y++];

	conc[x] = '\0';
	return (conc);
}
