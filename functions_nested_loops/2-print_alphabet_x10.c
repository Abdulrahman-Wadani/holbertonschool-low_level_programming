#include <stdio.h>

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: none
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;
		for (j = 97; j <123; j++)
			_putchar(i);
		_putchar('\n');
	}
	return (0);
}
