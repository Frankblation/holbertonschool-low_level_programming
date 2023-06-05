#include <stdio.h>
#include "main.h"
/**
* print_numbers - Print the numbers since 0 up to 9
* Return: The numbers since 0 up to 9 using the _putchar function
*/
void print_numbers(void)
{

	int x;

	for (x = 0; x < 10; x++)
	{
	putchar(x + '0');
	}
	putchar('\n');
}
