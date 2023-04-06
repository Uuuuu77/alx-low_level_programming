#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: first char
 * @src: second char
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int m = 0, k;

	while (dest[m])
		m++;
	for (k = 0; src[k] != '\0'; k++)
	{
		dest[m] = src[k];
		m += 1;
	}
	dest[m] = '\0';
	return (dest);
}
