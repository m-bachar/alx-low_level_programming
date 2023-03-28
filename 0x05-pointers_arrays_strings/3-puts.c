#include "main.h"

/**
 * _puts - a function that prints a string to stdout
 * @str: the string to be printed
 */

void _puts(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
