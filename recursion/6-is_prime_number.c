#include "main.h"
#include <stdio.h>
int is_prime_number_sub(int n, int j);

/**
 * is_prime_number - short description
 * @n: description
 *
 * Return: Nothing
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime_number_sub(n, n - 1));
}

/**
 * is_prime_number_sub - short description
 * @n: description
 * @j: description
 *
 * Return: Nothing
 */
int is_prime_number_sub(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j != 0)
		return (is_prime_number_sub(n, j - 1));
	return (0);

}
