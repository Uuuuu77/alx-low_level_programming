#include "variadic_functions.h"

/**
 * sum_them_all - Entry point. Returns sum of all parameters.
 * @n: input number of parameters
 * @...: input parameters to be calculated
 * Return: sum of all parameter OR 0 if n == 0 (success)
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int y, sum = 0;

	va_start(ap, n);
	for (y = 0; y < n; y++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
