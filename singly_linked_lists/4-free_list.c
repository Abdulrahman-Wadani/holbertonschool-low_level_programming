#include "lists.h"

/**
 * free_list - frees a singly linked list
 * @head: pointer to the list_t list to be freed
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (!head)
		return;
	tmp = head;
	while (tmp)
	{
		if (head->str)
			free(head->str);
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
