#include "main.h"

/**
 * main - Prints the number of argumnets
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: return 0
 */

int	main(int argc, char *argv[])
{
	int	a;
	int	i;
	int	j;

	a = 0;
	i = 0;
	j = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		a += atoi(argv[i]);
	}
	printf("%d\n", a);
	return (0);
}
