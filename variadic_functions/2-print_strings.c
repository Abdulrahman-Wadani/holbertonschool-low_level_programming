#include "variadic_functions.h"

/**
 * print_strings - description
 * @separator: description
 * @n: description
 *
 * Return: description
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	s = va_arg(args, char *);
	for (i = 0; i < n; i++)
	{
		if (s == NULL && separator != NULL && i != n - 1)
			printf("nill%s", separator);
		else if (s == NULL)
			printf("nill");
		else if (i != n - 1 && separator != NULL)
			printf("%s%s", s, separator);
		else
			printf("%s", s);
		s = va_arg(args, char *);
	}
	printf("\n");

}
