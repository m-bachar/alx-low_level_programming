#include "lists.h"

/**
 * free_list - A function that free a list_t.
 *
 * @head: Head of the list.
 */

void	free_list(list_t *head)
{
	list_t	*temp;

	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
