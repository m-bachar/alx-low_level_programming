#include "stdio.h"

/**
  * main -  A program that prints the name of
  *     the file it was compiled from
  * Return: Returns 0 uppon Success
  */

int	main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
