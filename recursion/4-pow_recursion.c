#include "main.h"
/**
 * _pow_recursion - power to the
 * @x: int for x
 * @y: int for y raised to the power of
 * Return: Always 0
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (-1);

	if (y == 0)
		return (0);

	return (x * _pow_recursion(x, y - 1));
}
