#include "variadic_functions.h"

/**
 * print_strings - Entry point. Prints a string.
 * @separator: input string to be printed between numbers
 * @n: input number of string to be passed
 * @...: input variable number of string to be printed
 * Description: if separator is NULL, its not printed otherwise print
 * the string.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *str;
	unsigned int h;

	va_start(string, n);

	for (h = 0; h < n; h++)
	{
		str = va_arg(string, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (h != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(string);
}
