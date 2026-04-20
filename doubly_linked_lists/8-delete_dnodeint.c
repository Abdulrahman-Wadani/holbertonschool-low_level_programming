#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at
 * a given index in a doubly linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to delete
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (!head)
		return (-1);
	tmp = head[0];
	while (tmp)
	{
		if (i == index)
		{
			if (tmp->next && tmp->prev)
			{
				tmp->prev->next = tmp->next;
				tmp->next->prev = tmp->prev;
				tmp->next = NULL;
				tmp->prev = NULL;
			}
			else if (tmp->next && !tmp->prev)
			{
				tmp->next->prev = NULL;
				head[0] = tmp->next;
				tmp->next = NULL;
			}
			else if (!tmp->next && tmp->prev)
			{
				tmp->prev->next = NULL;
				tmp->prev = NULL;
			}
			return (1);
		}
		tmp = tmp->next;
		i++;

	}
	return (-1);
}
