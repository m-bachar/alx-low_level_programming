#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char	tmp;
	int	i;
	int	len;
	int	len_var;

	i = 0;
	len = 0;
	while (s[len])
		len++;
	len_var = len - 1;
	while (i <= (len / 2))
	{
		tmp = s[i];
		s[i] = s[len_var];
		s[len_var--] = tmp;
		i++;
	}
}
