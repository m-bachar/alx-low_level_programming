#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed.
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			if (n == 1)
				_putchar('\\');
			else if (n > 1)
			{
				_putchar(' ');
				_putchar('\\');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
