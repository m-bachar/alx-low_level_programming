#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: arg of print_rev
 */

void print_rev(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i-- > 0)
		write(1, &s[i], 1);
	write(1, "\n", 1);
}
