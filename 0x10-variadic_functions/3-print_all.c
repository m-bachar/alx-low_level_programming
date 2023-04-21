#include <stdarg.h>
#include <stdio.h>

typedef struct
{
	char	*symbol;
	void	(*print_func)(va_list);
} func_printer;

void	print_char(va_list arg)
{
	char	c;

	c = va_arg(arg, int);
	printf("%c", c);
}

void	print_int(va_list arg)
{
	int	d;

	d = va_arg(arg, int);
	printf("%d", d);
}

void	print_float(va_list arg)
{
	float	f;

	f = (float)va_arg(arg, double);
	printf("%f", f);
}

void	print_string(va_list arg)
{
	char	*str;

	str = va_arg(arg, char *);
	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

void	print_all(const char *const format, ...)
{
	va_list	args;
	char	*separator;
	int		i;
	int		j;

	va_start(args, format);
	i = 0;
	separator = "";
	func_printer funcs[] =
	{
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && (format[i] != *(funcs[j].symbol)))
		{
			j++;
		}
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print_func(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}