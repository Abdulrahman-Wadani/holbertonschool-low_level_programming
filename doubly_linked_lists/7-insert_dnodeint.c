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
	dlistint_t *ls = NULL;
	dlistint_t *tmp;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	tmp = h[0];
	while (tmp)
	{
		if (i > idx + 1)
			return (NULL);
		if (i == idx)
		{
			ls = malloc(sizeof(dlistint_t));
			if (!ls)
				return (NULL);
			ls->n = n;
			ls->next = tmp;
			ls->prev = tmp->prev;
			tmp->prev->next = ls;
			tmp->prev = ls;
			break;
		}
		i++;
		tmp = tmp->next;
	}
	if (i == idx)
		return (add_dnodeint_end(h, n));
	return (ls);
}
