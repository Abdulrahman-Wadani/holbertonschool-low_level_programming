#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - description
 * @array: description
 * @size: description
 * @action: description
 *
 * Return: description
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
