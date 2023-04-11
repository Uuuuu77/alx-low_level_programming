#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - Concatenates two strings.
 * @s1: input one to concatenate
 * @s2: input second to concatenate
 * Return: concatenated results (success)
*/
char *str_concat(char *s1, char *s2)
{
	char *combo;
	int y, ss;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	y = 0;
	ss = 0;

	while (s1[y] != '\0')
		y++;
	while (s2[ss] != '\0')
		ss++;

	combo = malloc(sizeof(char) * (y + ss + 1));

	if (combo == NULL)
		return (NULL);
	y = 0;
	ss = 0;
	while (s1[y] != '\0')
	{
		combo[y] = s1[y];
		y++;
	}
	while (s2[ss] != '\0')
	{
		combo[y] = s2[ss];
		y++;
		ss++;
	}
	combo[y] = '\0';
	return (combo);
}
