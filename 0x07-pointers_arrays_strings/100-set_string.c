#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: input pointer to a pointer
 * @to: input pointer
*/
void set_string(char **s, char *to)
{
	*s = to;
}
