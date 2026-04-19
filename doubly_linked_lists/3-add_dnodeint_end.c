#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: integer to add to the new node
 *
 * Return: address of the new element, or NULL if it failed
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
