#include "main.h"

/**
 * get_endianness - Entry point. Checks for endianness.
 * Return: 0 (big), 1 (little)
*/
int get_endianness(void)
{
	unsigned int b = 1;
	char *bb = (char *) &b;

	return (*bb);
}
