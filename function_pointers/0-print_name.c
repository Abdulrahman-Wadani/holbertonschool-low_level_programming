#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - description
 * @name: description
 * @f: description
 *
 * Return: description
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || ((name[0] < 'A' && name[0] > 'Z') &&
	 (name[0] < 'a' && name[0] > 'z')))
		return;
	f(name);
}
