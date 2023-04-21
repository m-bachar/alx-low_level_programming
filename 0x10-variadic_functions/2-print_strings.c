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

	i = 0;
	va_start(args, n);
	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%s", va_arg(args, char *));
			break;
		}
		if (va_arg(args, char *) == NULL)
			printf("(nil)%s", separator);
		else if (separator == NULL)
			printf("%s", va_arg(args, char *));
		else
			printf("%s%s", va_arg(args, char *), separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
