#include "main.h"

/**
 * _memcpy - replace src to dest with an n limiter of bytes
 * @dest: the address of memory to print
 * @src: the byte to write
 * @n: the number of spaces to write
 * Return: Returns value in dest
 */

char	*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
