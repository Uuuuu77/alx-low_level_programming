#include "main.h"

/**
 * set_bit - Entry point. Sets value of bit to 1 at a given index.
 * @n: input pointer to the number to set
 * @index: input index of bit starting from 0
 * Return: 1 (success) or -1 (fails)
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
