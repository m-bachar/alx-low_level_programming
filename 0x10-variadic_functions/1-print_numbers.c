#include "variadic_functions.h"

void	print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list			args;
	unsigned int	i;

	i = 0;
	va_start(args, n);
	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d", va_arg(args, const unsigned int));
			break ;
		}
		if (separator == NULL)
			printf("%d", va_arg(args, const unsigned int));
		else
			printf("%d%s", va_arg(args, const unsigned int), separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
