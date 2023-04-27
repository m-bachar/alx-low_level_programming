#include "lists.h"

/**
 * add_node - A function that adds a new node at the begining of a list.
 *
 * @head: Head of the list.
 * @str: String of the new node.
 * Return: Returns the adress of the new element, or NULL if it fails.
 */

list_t	*add_node(list_t **head, const char *str)
{
	list_t	*new_node;
	char	*dup;

	dup = strdup(str);
	if (!(*head))
		return (NULL);
	new_node = *head;
	new_node->len = strlen(dup);
	new_node->str = dup;
	new_node->next = *head;
	return (&new_node);
}
