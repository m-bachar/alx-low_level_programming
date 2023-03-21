#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number
 * @x: argument of print_last_digit
 *
 * Return: returns the last digit of a number
 */
int print_last_digit(int x)
{
	if (x < 0)
		x *= -1;
	x %= 10;
	_putchar('0' + x);
	return (x);
}
