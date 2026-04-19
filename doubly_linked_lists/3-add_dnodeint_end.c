#include "lists.h"

/**
 * name - description
 * @arg: description
 *
 * Return: description
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ls;
	dlistint_t *tmp;

	if (!head)
		return (NULL);
	tmp = head[0];
	while (tmp && tmp->next)
	{
		tmp = tmp->next;
	}
	ls = malloc(sizeof(dlistint_t));
	if (!ls)
		return (NULL);
	ls->n = n;
	ls->next = NULL;
	if (!tmp)
	{
		ls->prev = NULL;
		head[0] = ls;
		return (ls);
	}
	tmp->next = ls;
	ls->prev = tmp;
	return (ls);
}
