#include "main.h"

/**
 * *_strstr - locates a substring.
 * @haystack: input pointer to be printed
 * @needle: input pointer to be printed
 * Return: 0 (success)
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *hsk = haystack;
		char *n = needle;

		while (*hsk == *n && *n != '\0')
		{
			hsk++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
