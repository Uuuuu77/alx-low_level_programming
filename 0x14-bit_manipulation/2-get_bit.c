#include "main.h"

/**
 * get_bit - Entry point-> It returns the value of bit at an index given.
 * @n: input number to search the value
 * @index: input index of the bit
 * Return: Value of the bit (Success)
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;
	return (bit);
}
