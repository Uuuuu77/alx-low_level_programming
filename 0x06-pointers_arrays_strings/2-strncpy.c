#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: first parameter
 * @src: second parameter
 * @n: integer
 * Return: dest (success)
*/
char *_strncpy(char *dest, char *src, int n)
{
	int f;

	n = 0;
	while (f < n && src[f] != '\0')
	{
		dest[f] = src[f];
		f++;
	}
	while (f < n)
	{
		dest[f] = '\0';
		f++;
	}
	return (dest);
}
