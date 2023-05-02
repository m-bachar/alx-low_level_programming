#include "lists.h"

/**
 * list_len - A function that returns the length of a list.
 *
 * @h: list_t.
 * Return: Returns the length of a list.
 */

size_t	list_len(const list_t *h)
{
	size_t	i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
