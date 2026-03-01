#include "main.h"

/**
 * print_rev - Entry point
 * @s: char
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	char c;
	int counter = 0;

	for (c = s[0]; c != '\0'; c = s[counter])
		counter++;
	counter--;
	for (; counter > -1; counter--)
		_putchar(s[counter]);
	_putchar('\n');

}
