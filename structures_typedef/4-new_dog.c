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
	dog_t *d = malloc(sizeof(*name) + sizeof(age) + sizeof(*owner));
	char *n, *o;
	unsigned long int i;

	if (name != NULL)
	{
		n = malloc(sizeof(*name));
		for (i = 0; i < sizeof(name); i++)
			n[i] = name[i];
		d->name = n;
	}
	else
		return (NULL);
	if (owner != NULL)
	{
		o = malloc(sizeof(*owner));
		for (i = 0; i < sizeof(owner); i++)
			o[i] = owner[i];
		d->owner = o;
	}
	else
		return (NULL);
	(*d).age = age;
	return (d);

}
