#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - short description
 * @s: description
 *
 * Return: Nothing
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
