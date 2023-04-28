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

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->len = strlen(str);
	new_node->str = strdup(str);
	new_node->next = NULL;
	if (!(*head))
		*head = new_node;
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (*head);
}
