#include "lists.h"

/**
 * free_list - A function that free a list_t.
 *
 * @head: Head of the list.
 */

void	free_list(list_t *head)
{
	list_t	*temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
