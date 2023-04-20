#include "variadic_functions.h"

/**
 * print_all - Entry point. Prints anything.
 * @format: input list of type of arguments to be passed
*/
void print_all(const char * const format, ...)
{
	int w = 0;
	char *str, *p = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[w])
		{
			switch (format[w])
			{
				case 'c':
					printf("%s%c", p, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", p, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", p, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", p, str);
					break;
				default:
					w++;
					continue;
			}
			p = ", ";
			w++;
		}
	}
	printf("\n");

	va_end(list);
}
