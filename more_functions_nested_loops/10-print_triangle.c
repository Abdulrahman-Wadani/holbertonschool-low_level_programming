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
	int c = size - 1;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (; c > 0; --c)
				_putchar(' ');
			for (j = 0; j < i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
