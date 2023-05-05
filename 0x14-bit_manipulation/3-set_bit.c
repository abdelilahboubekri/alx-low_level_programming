#include "main.h"

/**
 * get_bit - function that sets the value of a bit to 1 at a given index.
 * @n: the number to index
 * @index: bit to set.
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
        if (index >= sizeof(n) * 8)
                return (-1);

        return (!!(*n |= 1L << index));
}
