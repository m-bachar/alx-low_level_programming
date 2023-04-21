#include "3-calc.h"

/**
  * main - Main function.
  *
  * @ac: Arguments count.
  * @av: Arguments entered.
  * Return: Returns 0 uppon success. 
  */

int	main(int ac, char *av[])
{
	char	*operator;
	int		first_number;
	int		second_number;

	if (ac == 4)
	{
		first_number = atoi(av[1]);
		second_number = atoi(av[3]);
		operator = av[2];
		if (!get_op_func(operator) || !operator[1])
		{
			printf("Error\n");
			exit(99);
		}
		if ((*operator == '/' || *operator == '%') && second_number == 0)
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", get_op_func(operator)(first_number, second_number));
	}
	else
	{
		printf("Error\n");
		exit (98);
	}
	return (0);
}
