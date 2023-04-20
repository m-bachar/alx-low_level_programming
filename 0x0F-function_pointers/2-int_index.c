#include "function_pointers.h"

/**
  * int_index - function that searches for an integer.
  *
  * @array: array of integers
  * @size: number of elements in the array array.
  * @cmp: pointer to the function to be used to compare values.
  * Return: if no elements matches, returns -1
  *		if size <= 0; returns -1, else returns the interger itself.
  */

int	int_index(int *array, int size, int (*cmp)(int))
{
	int	i;
	int	status;

	i = 0;
	status = 0;
	if (array && size && cmp)
	{
		if (size <= 0)
			return (-1);
		while (i < size)
		{
			status = cmp(array[i]);
			if (status != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
