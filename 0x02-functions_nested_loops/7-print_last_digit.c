#include "main.h"
#include <limits.h>

/**
 * print_last_digit - A function that prints the last digit of a number
 * @x: argument of print_last_digit
 *
 * Return: returns the last digit of a number
 */
int print_last_digit(int x)
{
	x %= 10;
	if (x < 0 || x == INT_MIN)
		x *= -1;
	_putchar('0' + x);
	return (x);
}
