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
	int sum;

	if (n == 0)
		return (0);
	va_start(args, n);
	sum = va_arg(args, int);

	sum += va_arg(args, int);

	return (sum);
}
int main(void)
{
	/* code */
	sum_them_all(3, 7, 8, 9);
	printf("%d\n", sum_them_all(3, 7, 7, 7));
	return 0;
}

