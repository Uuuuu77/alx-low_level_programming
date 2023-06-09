#include "main.h"

/**
 * set_bit - Entry point-> Sets the bit to 1 at a given index.
 * @n: input pointer to the number to be set
 * @index: input index of the bit to be set
 * Return: 1 (success), -1 (Error)
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
