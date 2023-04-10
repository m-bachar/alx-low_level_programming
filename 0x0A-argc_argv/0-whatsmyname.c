#include "main.h"

/**
 * main - a program that prints it's name
 * @argc: number of arguments
 * @argv: arguments in a double array
 * Return: returns 1 uppon success
 */

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	(void)argc;
	while (argv[0][i])
	{
		_putchar(argv[0][i]);
		i++;
	}
	_putchar('\n');
	return (1);
}
