#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * @a: array
 * @n: size
 *
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n)
			printf("%d\n", a[i++]);
		else
			printf("%d, ", a[i++]);
	}
}
