#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a: int array
 * @n: number of elemets to be printed
 */

void print_array(int *a, int n)
{
	int	i;

	i = 0;
	while (a[i] && i < n)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
		i++;
	}
	printf("\n");
}
