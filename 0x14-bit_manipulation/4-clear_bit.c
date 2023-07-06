#include "main.h"

/**
 * clear_bit - Entry point-> Sets the value of bit to 0 at a given index.
 * @n: input pointer to number to be clear
 * @index: input index of bit to clear
 * Return: 1 (Success), -1 (Error)
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
