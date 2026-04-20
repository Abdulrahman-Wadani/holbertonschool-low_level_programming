#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node
 * at a given index in a doubly linked list
 * @head: Pointer to the head of the doubly linked list
 * @index: Index of the node to retrieve
 *
 * Return: Pointer to the node at the given index, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
