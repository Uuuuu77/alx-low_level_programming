#include "variadic_functions.h"

/**
 * print_numbers - Entry point. Prints numbers.
 * @separator: input string to be printed between numbers
 * @n: input number of integers to be passed
 * @...: input variable numberof numbers to be printed
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int h;

	va_start(num, n);

	for (h = 0; h < n; h++)
	{
		printf("%d", va_arg(num, int));
		if (h != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(num);
}
