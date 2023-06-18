#include "main.h"
/**
 * factorial - The product of an integer and all the integers below it
 * @n: integer
 *
 * Return: on success  1
 * On error, -1 is returned
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
