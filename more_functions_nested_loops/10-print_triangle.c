#include "main.h"

/**
 * print_triangle - Entry point
 * @size: number
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for(j = 0; j < i; j++)
			_putchar('#');
		_putchar('\n');
	}
}
