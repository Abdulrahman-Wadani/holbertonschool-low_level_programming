#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - a to z
 *
 * Return: 0
 */
int print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		_putchar(i);
	_putchar('\n');
	return(0);
}
