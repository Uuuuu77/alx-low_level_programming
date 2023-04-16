#include "main.h"
#include <stdlib.h>

/**
 * *count_word - It counts the number of words in a string.
 * @s: input value counted
 * Return: words actual number (success)
*/
int count_word(char *s)
{
	int num, x, y;

	num = 0;
	y = 0;
	x = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			num = 0;
		else if (num == 0)
		{
			num = 1;
			y++;
		}
	}
	return (y);
}

/**
 * **strtow - It splits a string into words.
 * @str: input string to be splited
 * Return: pointer to an array of string (success)
*/
char **strtow(char *str)
{
	char **split, *p;
	int a, b = 0, c = 0, d, f, start, end;

	while (*(str + c))
		c++;
	d = count_word(str);
	if (d == 0)
		return (NULL);

	split = (char **) malloc(sizeof(char *) * (d + 1));

	if (split == NULL)
		return (NULL);
	for (a = 0; a <= c; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (f)
			{
				end = a;
				p = (char *) malloc(sizeof(char) * (f + 1));
				if (p == NULL)
					return (NULL);
				while (start < end)
					*p = str[start++];
				*p = '\0';
				split[b] = p - f;
				b++;
				f = 0;
			}
		}
		else if (f++ == 0)
			start = a;
	}
	split[b] = NULL;
	return (split);
}
