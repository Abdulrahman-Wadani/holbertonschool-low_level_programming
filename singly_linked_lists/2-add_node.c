#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p;
	char *st;
	int i = 0;

	if (!head || !str)
		return (NULL);
	st = strdup(str);
	if (!st)
		return (NULL);
	p = malloc(sizeof(list_t));
	if (!p)
	{
		free(st);
		return (NULL);
	}
	p->str = st;
	while (st[i])
	{
		i++;
	}
	p->len = i;
	p->next = head[0];
	head[0] = p;
	return (p);
}
