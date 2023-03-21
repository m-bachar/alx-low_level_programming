#include "main.h"

/**
 * _abs - Function that computes the absolute value of an integer
 * @x: integer to compute it's absolute value
 *
 * Return: The absolute value of integer X
 */
int _abs(int x)
{
	if (x < 0)
	{
		x *= -1;
		return (x);
	}
	else
		return (x);
}
