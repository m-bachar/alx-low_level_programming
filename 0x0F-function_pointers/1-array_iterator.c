#include "function_pointers.h"

/**
  * array_iterator - A function that executes a function
  * 	given as a parameter on each element of an array.
  * 
  * @array: array of integers
  * @size: size
  * @action: pointer to function
 */

void	array_iterator(int *array, size_t size, void (*action)(int))
{
	int	i;

	i = 0;
	if (array && size > 0 && action)
	{
		while (i <= size)
		{
			action(array[i]);
		}
	}
}
