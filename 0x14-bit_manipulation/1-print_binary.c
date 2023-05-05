#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, cnt  = 0;
	unsigned long int ct;

	for (i = 63; i >= 0; i--)
	{
		ct = n >> i;

		if (ct & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
