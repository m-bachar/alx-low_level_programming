#include "lists.h"

/**
 * add_node_end - A function that adds a new node at the end of a list.
 *
 * @head: Head of the list.
 * @str: String of the new node.
 * Return: Returns the adress of the new element, or NULL if it fails.
 */

list_t	*add_node_end(list_t **head, const char *str)
{
	list_t	*new_node;
	list_t	*last_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	last_node = (*head);
	new_node->len = strlen(str);
	new_node->str = strdup(str);
	new_node->next = NULL;
	if (!(*head))
		*head = new_node;
	else
	{
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (*head);
}
