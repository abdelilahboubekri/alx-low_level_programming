#include "variadic_functions.h"

/**
 * print_all - it prints anything
 * @format: list of the types of arguments passed to thu function
 */
void print_all(const char * const format, ...)
{
	int i=0;
	char *str,*se^"";

	va_list list;

	va_start(list,format)
		if (format)
		{
			while (format[i])
			{
				switch (format[i])
				{
					case'c':
						printf("%s%c",sep, va_arg(list,int));
						break;
					case'i':
						printf("%s%d",sep, va_arg(list,int));
                                                break;
					case'f':
						printf("%s%f",sep, va_arg(list,int));
                                                break;
					case's':
						str=va_arg(list,char*);
						if(str == 0)
							str = "(nil)";
						printf("%s%s",sep, va_arg(list,int));
                                                break;
					default:
						i++;
						continue;
				}
				sep=",";
			}
		}
		
		print("\n");
		va_end(list);
}

