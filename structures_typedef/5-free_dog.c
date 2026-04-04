#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - description
 * @d: description
 *
 * Return: description
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
