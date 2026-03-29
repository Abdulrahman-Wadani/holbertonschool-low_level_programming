#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int count_len(char *str);

/**
 * _strdup - description
 * @str: description
 *
 * Return: description
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0;

	if (str == NULL)
		return (NULL);
	p = (char *) malloc(count_len(str));
	if (p == NULL)
		return (NULL);
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}

/**
 * count_len - description
 * @str: description
 *
 * Return: description
 */
int count_len(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return (++i);
}
