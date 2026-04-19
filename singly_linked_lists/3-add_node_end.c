#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: pointer to pointer to the head of the list
 * @str: string to add to the new node
 *
 * Return: address of the new node, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p;
	list_t *tmp;
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
	p->next = NULL;
	tmp = head[0];
	while (tmp && tmp->next)
	{
		tmp = tmp->next;
	}
	if (!tmp)
	{
		head[0] = p;
		return (p);
	}
	tmp->next = p;
	return (p);
}
