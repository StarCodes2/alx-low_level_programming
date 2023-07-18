#include "main.h"

/**
 * _abs - Computes the absolute value of any integer
 * @a: value to compute
 *
 * Return: returns the absolute value of a
 */

int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		return (a *= -1);
	}
}
