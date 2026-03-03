#include "main.h"

/**
 * puts2 - Entry point
 * @str: string
 *
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int i = 0;
	int c = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	while (i < c)
	{
		_putchar(str[i]);
		i += 2;
	}

}
