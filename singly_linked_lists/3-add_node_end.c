#include "lists.h"

/**
 * name - description
 * @arg: description
 *
 * Return: description
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
