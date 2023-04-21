#include "variadic_functions.h"

/**
  * sum_them_all - Function that returns the sum of all its parameters.
  * 
  * @n: Number of args.
  * @...: Ellipsis.
  * Return: Returns 0 if n == 0, else args sum.
  */

int	sum_them_all(const unsigned int n, ...)
{
	unsigned int		i;
	unsigned int		sum;
	va_list				args;

	va_start(args, n);
	sum = 0;
	i = 0;
	if (n == 0)
		return (0);
	while (i++ < n)
		sum += va_arg(args, const unsigned int);
	return (sum);
}
