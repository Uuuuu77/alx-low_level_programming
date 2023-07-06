#include "main.h"

/**
 * get_endianness - Entry point- Checks for little or big endianness in machine
 * Return: 0 (big), 1 (little)
*/
int get_endianness(void)
{
	unsigned int b = 1;
	char *en = (char *) &b;

	return (*en);
}
