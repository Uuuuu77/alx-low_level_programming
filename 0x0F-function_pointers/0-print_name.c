#include "function_pointers.h"

/**
 * print_name - Entry point. This function prints a name.
 * @name: input name to printed
 * @f: input pointer to function
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
