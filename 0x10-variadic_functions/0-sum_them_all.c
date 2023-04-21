#include "variadic_functions.h"

/**
 * sum_them_all - sums variable arguments
 * @n: it's the nulber of arguments
 * @...: they are intergers to sum
 *
 * Return: the integer sul
 */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	while (i--)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
