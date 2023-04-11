#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Copies a string to a newly allocated space in memory.
 * @str: input pointer to a character
 * Return: duplicated pointer to a string (success)
*/
char *_strdup(char *str)
{
	char *dupl;
	int g, b = 0;

	if (str == NULL)
		return (NULL);
	g = 0;
	while (str[g] != '\0')
		g++;

	dupl = malloc(sizeof(char) * (g + 1));

	if (dupl == NULL)
		return (NULL);
	for (b = 0; str[b]; b++)
	{
		dupl[b] = str[b];
	}
	return (dupl);
}
