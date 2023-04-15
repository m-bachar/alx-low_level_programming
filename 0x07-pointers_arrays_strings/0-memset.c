#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the address of memory to print
 * @b: the byte to write
 * @n: the number of spaces to write
 * Return: Returns value to memory area S
 */

char	*_memset(char *s, char b, unsigned int n)
{
	int	i;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
