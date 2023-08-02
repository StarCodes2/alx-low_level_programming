#include "main.h"

/**
 * _pow_recursion - Calculate value of an integer raised to a given power
 * @x: contains the integer
 * @y: contains the power
 *
 * Return: returns the result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
