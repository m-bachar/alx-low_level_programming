#include <stdio.h>

/**
 * main - a program that prints it's name
 * @argc: number of arguments
 * @argv: arguments in a double array
 * Return: returns 1 uppon success
 */

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (1);
}
