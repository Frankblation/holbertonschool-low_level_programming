#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints arguments based on the format provided
 * @format: A format string containing types of arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	char *separator = "";

	/* Array of format characters */
	char formats[] = {'c', 'i', 'f', 's'};

	/* Array of format names */
	char *format_names[] = {"char", "int", "float", "char *"};

	/* Pointers to the argument types */
	void (*print_functions[])(va_list) = {print_char, print_int, print_float, print_string};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == formats[j])
			{
				printf("%s", separator);
				print_functions[j](args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}

/**
 * print_char - Prints a char argument
 * @args: A va_list containing the char argument
 */
void print_char(va_list args)
{
	char c = va_arg(args, int);
	printf("%c", c);
}

/**
 * print_int - Prints an int argument
 * @args: A va_list containing the int argument
 */
void print_int(va_list args)
{
	int num = va_arg(args, int);
	printf("%d", num);
}

/**
 * print_float - Prints a float argument
 * @args: A va_list containing the float argument
 */
void print_float(va_list args)
{
	float num = va_arg(args, double);
	printf("%f", num);
}

/**
 * print_string - Prints a string argument
 * @args: A va_list containing the string argument
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}