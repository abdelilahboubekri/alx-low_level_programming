#include "variadic_functions.h"

/**
 * print_numbers - it prints numbers with separator
 * @separator: the string separator
 * @n: the number of arguments
 * @...: they are intergers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%d%s", va_arg(ap, int)
			i ? (separator ? separator : "") : "\n");
	va_end(ap)
}
