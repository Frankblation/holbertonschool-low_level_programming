#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - Prints a list of arguments based on a given format
 * @format: A list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead)
 * Any other char should be ignored
 */
void print_all(const char * const format, ...)
{
	
	va_list args;
	int i = 0;
	char *str;
	char format_char;

	va_start(args, format);

	while (format && format[i])
	{
		format_char = format[i];
		switch (format_char)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
		}
		i++;
		if (format[i])
		{
			if (format[i] == 'c' || format[i] == 'i' ||
			    format[i] == 'f' || format[i] == 's')
				printf(", ");
		}
	}

	va_end(args);
	printf("\n");
}
