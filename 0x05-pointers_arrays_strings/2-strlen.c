#include "main.h"

/**
 * _strlen - a function that returns the len of a string
 * @s: arg of strlen
 * Return: returns the len of a string
 *
 */

int _strlen(char *s)
{
	int	len;

	len = 0;
	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}
