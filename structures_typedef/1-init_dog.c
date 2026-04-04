#include <stdio.h>
#include "dog.h"

/**
 * init_dog - description
 * @d: description
 * @name: description
 * @age: description
 * @owner: description
 *
 * Return: function that initialize a variable of type struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		printf("OK\n");
		exit();
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
