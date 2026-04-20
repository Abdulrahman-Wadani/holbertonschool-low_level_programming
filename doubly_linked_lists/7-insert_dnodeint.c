#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to the head of the doubly linked list
 * @idx: Index where the new node should be inserted
 * @n: Value to store in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ls = malloc(sizeof(dlistint_t));
	dlistint_t *tmp;
	unsigned int i = 0;

	if (!h || !ls)
		return (NULL);
	tmp = h[0];
	while (tmp)
	{
		if (i > idx)
			return (NULL);
		if (i == idx)
		{
			ls->n = n;
			ls->next = tmp;
			ls->prev = tmp->prev;
			if (tmp->prev)
				tmp->prev->next = ls;
			else
				h[0] = ls;
			tmp->prev = ls;
			break;
		}
		i++;
		tmp = tmp->next;
	}
	return (ls);
}
