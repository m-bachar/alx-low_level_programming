#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: arg of puts_half()
 */

void puts_half(char *str)
{
	int	i;
	int	len;

	len = 0;
	while (str[len])
		len++;
	if (len % 2 == 0)
	{
		i = len / 2;
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	else if (len % 2 == 1)
	{
		i = (len - 1) / 2;
		i++;
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
