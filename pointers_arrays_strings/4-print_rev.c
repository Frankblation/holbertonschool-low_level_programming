#include "main.h"
/**
 * print_rev - prints a string, followed by a new line.
 * @s: input string to print.
 */
void print_rev(char *s)
{
	int s, len, temp;

	len = strlen(str1);

	for (s = 0; s < len / 2; i++)
	temp = str1[s];
	[str1[s] = str1[len - s - 1];
	str1[len - s - 1] = temp;
}
