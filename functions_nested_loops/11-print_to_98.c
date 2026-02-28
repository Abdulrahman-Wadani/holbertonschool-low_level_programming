#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 * @n: number
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	for(n; n < 99, n++)
	{
		if (n != 98)
			printf("%d, ", n);
		else
			printf("%d", n);
	}
}
