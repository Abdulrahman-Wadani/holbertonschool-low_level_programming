#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

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
	int i;

	if (name == NULL || owner == NULL)
		return (NULL);
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = malloc(count_len(name));
	if (d->name == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i < count_len(name); i++)
		d->name[i] = name[i];
	d->owner = malloc(count_len(owner));
	if (d->owner == NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i < count_len(owner); i++)
		d->owner[i] = owner[i];
	(*d).age = age;
	return (d);
}
