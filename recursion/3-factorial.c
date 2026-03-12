#include "main.h"
#include <stdio.h>

/**
 * factorial - short description
 * @n: description
 *
 * Return: Nothing
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
