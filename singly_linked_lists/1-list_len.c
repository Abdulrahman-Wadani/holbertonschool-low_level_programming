#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the head of the linked list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
