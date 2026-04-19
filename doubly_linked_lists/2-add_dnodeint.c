#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Double pointer to the head of the list.
 * @n: Integer to store in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ls;

	if (!head)
		return (NULL);
	ls = malloc(sizeof(dlistint_t));
	if (!ls)
		return (NULL);
	ls->n = n;
	ls->prev = NULL;
	if (head[0])
	{
		ls->next = head[0];
		head[0]->prev = ls;
	}
	else
		ls->next = NULL;
	head[0] = ls;
	return (ls);
}
