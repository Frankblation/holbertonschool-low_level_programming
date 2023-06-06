#include "main.h"
/**
 * print_square - Write a function that prints a square
 * @size: is the size of the square
 * Return: empty
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
		for (x = 0; y < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				putchar(35);
			}
			putchar('\n');
		}
}
