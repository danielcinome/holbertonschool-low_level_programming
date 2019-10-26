#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_all - function that prints anything.
* @format :  list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	va_list p;
	int i = 0, a = 0;
	char *str;

	va_start(p, format);
	while (format[i] != '\0')
	{
		a = 0;
		switch (format[i])
	{

		case 'c':
			printf("%c", va_arg(p, int));
			break;
		case 'i':
			printf("%d", va_arg(p, int));
			break;
		case 'f':
			printf("%f", va_arg(p, double));
			break;
		case 's':
			str = va_arg(p, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		default:
			va_arg(p, int);
			a = 1;
			break;
	}
		if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i' ||
		format[i] == 'f' || format[i] == 's') && a != 0)
		printf(", ");
		i++;
	}
	printf("\n");
	va_end(p);
}