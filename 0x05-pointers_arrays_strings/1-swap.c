#include "main.h"

/**
 * swap_int - a function that swaps the value of 2 int
 * @a: first int
 * @b: second int
 */

void swap_int(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
