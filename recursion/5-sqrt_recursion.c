#include "main.h"
#include <stdio.h>
int find(int n, int j);

/**
 * _sqrt_recursion - short description
 * @n: description
 *
 * Return: Nothing
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (find(n, 1));
}

/**
 * find - short description
 * @n: description
 * @j: description
 *
 * Return: Nothing
 */
int find(int n, int j)
{
	if (n > j * j)
		return (find(n, j + 1));
	if (n == j * j)
		return (j);
	return (-1);
}
