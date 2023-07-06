#include "main.h"

/**
 * binary_to_uint - Entry point -> Simply it converts binary to unsigned int.
 * @b: input string containing the binary
 * Return: Converted number OR if not 0 (Success)
*/
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int decimal = 0;

	if (!b)
		return (0);
	for (x = 0; x[b]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		decimal = 2 * decimal + (b[x] - '0');
	}
	return (decimal);
}
