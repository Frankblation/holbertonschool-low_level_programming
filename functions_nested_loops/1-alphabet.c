#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - ayyye
 */
void print_alphabet(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int x;

	for (x = 0; x < 26; x++)
	{
		_putchar(c[x]);
	}
		_putchar('\n');

}
