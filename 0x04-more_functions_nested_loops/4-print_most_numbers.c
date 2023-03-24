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
        if (i == 50 || i == 52)
            i++;
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
