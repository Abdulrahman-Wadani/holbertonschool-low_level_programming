#include "variadic_functions.h"

/**
 * print_numbers - description
 * @separator: description
 * @n: description
 *
 * Return: description
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n == 0)
		return;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i != n - 1 && separator != NULL)
			printf("%d, ", va_arg(args, int));
		else
			printf("%d", va_arg(args, int));
	}
	printf("\n");
}
