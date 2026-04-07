#include "variadic_functions.h"

/**
 * sum_them_all - description
 * @n: description
 *
 * Return: description
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start(args, n);
	sum = va_arg(args, int);

	for (i = 1; i < n; i++)
		sum += va_arg(args, int);

	return (sum);
}
