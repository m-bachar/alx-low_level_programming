#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @size: is the size of the square
 */

void print_square(int size)
{
	int size_bk;

	size_bk = size;
	while (size)
	{
		while (size_bk--)
			_putchar('#');
		_putchar('\n');
		size_bk = size;
		size--;
	}
}
