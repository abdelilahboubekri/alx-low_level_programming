#include "main.h"
/**
 * -puts_recursion- function puts
 *  *s/ inputs
 *  
 *  Returne : Alwayw 0
 */

void _puts_recursion(char *s);
{
	if(*s)
	{
		_putschar(*s);
		_put_recursion(s+1);
	}
	else
		_putchar('n\');
}
