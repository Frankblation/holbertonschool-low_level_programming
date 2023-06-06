#include "main.h"
#include <stdio.h>
/**
 * print_line - write a function that draws a straight line to the function
 * @n :The number of lines to draw
 * Return: nothing
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		putchar ('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			putchar ('_');
		}
			putchar ('\n');
	}
}
