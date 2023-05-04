#include "main.h"

/**
 * binary_to_uint - Entry point. Converts binary number to unsigned int.
 * @b: input pointer to a string which contain binary number
 * Return: converted unsigned integer (success)
*/
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int conv_num = 0;

	if (!b)
		return (0);
	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		conv_num = 2 * conv_num + (b[k] - '0');
	}

	return (conv_num);
}
