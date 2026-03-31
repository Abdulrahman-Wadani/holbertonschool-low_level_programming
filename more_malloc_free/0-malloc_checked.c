#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - description
 * @b: description
 *
 * Return: description
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	if (b == 0)
		exit(98);
	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);

}
