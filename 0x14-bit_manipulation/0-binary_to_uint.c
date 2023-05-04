#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: string containing the binary number
 *
 * Return: the converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	i = 0;
	
	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		i = i * 2 + (*b++ - '0');
	}
	return (i);
}
