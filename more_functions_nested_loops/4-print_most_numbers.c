#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - Print the numbers since 0 up to 9
 * Return: The numbers since 0 up to 9 using the _putchar function
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)

		if (x != 2 && x != 4)

			putchar(x + '0');
	putchar('\n');
}
