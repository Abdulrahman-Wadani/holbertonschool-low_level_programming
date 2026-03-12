#include "main.h"

/**
 * _print_rev_recursion - short description
 * @s: description
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	_print_rev_recursion("\nColton Walker");
	return (0);
}
