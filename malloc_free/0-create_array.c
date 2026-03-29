#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - description
 * @size: description
 * @c: char
 *
 * Return: description
 */
char *create_array(unsigned int size, char c)
{
	char *p = (char *) malloc(size);
	unsigned int i;

	if (size == 0 || p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
