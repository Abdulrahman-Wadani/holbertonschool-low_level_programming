#include "main.h"

/**
 * puts_half - Entry point
 * @str: string
 *
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int c = 0;
	int i;

	while (str[c] != '\0')
		c++;

	if (c % 2 != 0)
		i = c / 2;
	else
		i = (c + 1) / 2;

	while (i < c)
	{
		_putchar(str[i++]);
	}
	
}
