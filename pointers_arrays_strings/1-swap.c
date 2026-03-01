#include "main.h"

/**
 * swap_int - Entry point
 * @a:
 * @b:
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int *c = &b;

	*a = &b;
	*b = &c;

}
