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

	if (name != NULL)
		(*d).name = name;
	else
		return (NULL);
	if (owner != NULL)
		(*d).owner = name;
	else
		return (NULL);
	(*d).age = age;
	return (d);

}
