#include "main.h"

/**
 * *_strncat - also concatenates two strings.
 * @dest: first parameter
 * @src: second parameter
 * @n: integer
 * Return: dest (success)
*/
char *_strncat(char *dest, char *src, int n)
{
	int h = 0;
	int k;

	while (dest[h] != '\0')
		h++;
	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[h] = src[k];
		h++;
		k++;
	}
	dest[h] = '\0';
	return (dest);
}
