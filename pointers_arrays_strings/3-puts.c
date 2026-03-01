#include "main.h"

/**
 * _puts - Entry point
 * @str: string
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	char c;
	int counter = 0;

	for (c = str[0]; c != '\0'; c = str[++counter])
		_putchar(c);
	_putchar('\n');

}
