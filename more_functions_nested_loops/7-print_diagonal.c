#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: number
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(92);
			_putchar('\n');
			if (i != n - 1)
			{
				for (j = 0; j < i + 1; j++)
					_putchar(' ');
			}
		}
	}
}
