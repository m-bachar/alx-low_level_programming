#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9
 * followed by a newline
 */

void print_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
