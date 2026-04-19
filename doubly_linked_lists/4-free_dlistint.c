#include "lists.h"

/**
 * name - description
 * @arg: description
 *
 * Return: description
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
