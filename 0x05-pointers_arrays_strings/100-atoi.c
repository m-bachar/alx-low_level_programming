#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: string to be converted to int
 * Return: string converted to int
 */

int _atoi(char *s)
{
	int	i;
	int	sign;
	int	output;

	i = 0;
	sign = 1;
	output = 0;
	while ((s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r')))
		i++;
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		output = output * 10 + (s[i] - 48);
		i++;
	}
	return (output * sign);
}
