#include "lists.h"

/**
 * list_len - A function that returns the number of elements in a linked list.
 *
 * @h: list_t.
 * Return: Returns the number of elements in a linked list.
 */

size_t	list_len(const list_t *h)
{
	int	i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (h);
}
