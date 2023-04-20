#include "function_pointers.h"

/**
  * array_iterator - A function that executes a function
  *		given as a parameter on each element of an array.
  *
  * @array: array of integers
  * @size: size of the array
  * @action: pointer to function needed
 */

void	array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t	i;

	i = 0;
	if (array && size && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
