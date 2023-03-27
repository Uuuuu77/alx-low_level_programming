#include "main.h"

/**
 * char*_strcpy - copies the string pointed by src.
 * @dest: copy to
 * @src: copy from
 * Return: string
*/
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int a = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for (; a < x; a++)
	{
		dest[a] = src[a];
	}
	dest[x] = '\0';
	return (dest);
}
