#include "variadic_functions.h"

/**
  * print_strings - Function that prints strings, followed by a new line.
  *
  * @separator: String to be printed between the strings.
  * @n: Number of strings passed to the function.
  * @...: Variadic function's ellipsis.
 */

void	print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int	i;
	va_list			args;
	char			*arg;

	i = 0;
	va_start(args, n);
	while (i < n)
	{
		arg = va_arg(args, char *);
		if (i == n - 1)
		{
			printf("%s", arg);
			break;
		}
		if (!separator)
			printf("%s", arg);
		else
		{
			if (arg)
				printf("%s%s", arg, separator);
			else
				printf("%s%s", "(nil)", separator);
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
