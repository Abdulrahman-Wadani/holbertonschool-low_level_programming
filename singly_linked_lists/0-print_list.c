#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *p;
	size_t counter = 0;

	if (!h)
		return (0);
	p = h;
	while (p)
	{
		if (p->str)
			printf("[%u] %s\n", p->len, p->str);
		else
			printf("[0] (nil)\n");
		p = p->next;
		counter++;
	}

	return (counter);
}
