#include "variadic_functions.h"

int	sum_them_all(const unsigned int n, ...)
{
	va_list				args;
	unsigned int		i;
	unsigned int		args_count;

	va_start(args, n);
	i = 0;
	args_count = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		args_count += va_arg(args, const unsigned int);
		i++;
	}
	va_end(args);
	return (args_count);
}
