#include "main.h"

/**
 * print_sign - Entry point
 * @n: The number to be checked whether it's positive, negative or 0
 *
 * Return: 1 if number is positive, 0 if number is 0, -1 if number is negative
 */
int print_sign(int n)
{
	if (n == 0)
	{
		write(1, '0', 1);
		return (0);
	}
	else if (n < 0)
	{
		write(1, '-', 2);
		return (-1);
	}
	else
		write(1, '+', 1);
	return (1);
}
