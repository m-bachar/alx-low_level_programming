#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: arg of puts()
 */

void puts2(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	while (i < len)
	{
		write(1, &str[i], 1);
		i += 2;
	}
	write(1, "\n", 1);
}
