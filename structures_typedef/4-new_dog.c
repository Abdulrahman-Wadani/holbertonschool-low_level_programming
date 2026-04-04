#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - description
 * @name: description
 * @age: description
 * @owner: description
 *
 * Return: description
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));
	int i = 0, nlen = 1, olen = 1;

	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	if (name != NULL)
	{
		while (name[i])
		{
			nlen += 1;
			i++;
		}
		d->name = malloc(nlen);
		if (d->name == NULL)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
		for (i = 0; i < nlen; i++)
			d->name[i] = name[i];
	}
	else
		return (NULL);
	i = 0;
	if (owner != NULL)
	{
		while (owner[i])
		{
			olen += 1;
			i++;
		}
		d->owner = malloc(olen);
		if (d->owner == NULL)
		{
			free(d->owner);
			free(d);
			return (NULL);
		}
		for (i = 0; i < olen; i++)
			d->owner[i] = owner[i];
	}
	else
		return (NULL);
	(*d).age = age;
	return (d);

}
