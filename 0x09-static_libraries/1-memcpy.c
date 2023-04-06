#include "main.h"

/**
 * *_memcpy - copies memory area.
 * @dest: input detination where is stored
 * @src: input string where is copied
 * @n: input number of byte
 * Return: dest (success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int t;
	int w;

	t = 0;
	w = n;

	for (; t < w; t++)
	{
		dest[t] = src[t];
		n--;
	}
	return (dest);
}
