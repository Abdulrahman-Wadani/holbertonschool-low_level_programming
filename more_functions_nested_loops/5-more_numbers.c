#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i;
	int j;
	int c;

	for (i = 0; i < 10; i++)
	{
		c = 0;
		for (j = 0; j < 15; j++)
		{
			_putchar(c + '0');
			if (j < 10)
				c++;
			if (j > 9)
			{
				c = 1;
				_putchar((j % 10) + '0');
			}
		}
		_putchar('\n');
	}
}	
