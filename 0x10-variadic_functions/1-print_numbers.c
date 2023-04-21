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
	va_list nums;
	unsigned int ap;


	va_start(nums, n);


	for (ap = 0; index < n; ap++)
	{
		printf("%d", va_arg(nums, int));


		if (ap != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
