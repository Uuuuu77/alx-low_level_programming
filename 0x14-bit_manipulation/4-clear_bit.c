#include "main.h"

/**
 * clear_bit - Entry point. Sets value of bit to 0 at a given index.
 * @n: input pointer to number to set
 * @index: input index of bit starting from 0
 * Return: 1 (success) or -1 (fails)
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
