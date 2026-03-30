#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int count_len(char *str);
/**
 * str_concat - description
 * @s1: description
 * @s2: str
 *
 * Return: description
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int s = count_len(s1);
	int j = count_len(s2);
	int c = 0;
	int i = 0;

	if (s1 == NULL && s2 == NULL)
		return ("");
	p = malloc((s + j + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	while (i != (s + j))
	{
		if (i < s)
		{
			p[i] = s1[i];
		}
		else
		{
			p[i] = s2[c];
			c++;
		}
		i++;
	}
	p[i] = '\0';
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

	if (str == NULL)
		return (0);
	while (str[i])
	{
		i++;
	}
	return (i);
}

