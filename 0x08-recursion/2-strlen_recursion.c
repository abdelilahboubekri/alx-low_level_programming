#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int lengthstring = 0;

	if (*s)
	{
		lengthstring++;
		lengthstring += _strlen_recursion(s + 1);
	}

	return (lengthstring);
}

