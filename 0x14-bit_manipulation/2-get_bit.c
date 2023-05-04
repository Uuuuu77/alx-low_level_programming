#include "main.h"

/**
 * get_bit - Entry point. Returns the value of bit at a given index.
 * @n: input number to be searched
 * @index: input index of the bit which start from 0
 * Return: value of a bit or -1 if not (success)
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
