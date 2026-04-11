#include "variadic_functions.h"

/**
 * print_all - description
 * @format: description
 *
 * Return: description
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *s = "";
	print p[4] = {{'c', print_c}, {'s', print_s}, {'i', print_i}, {'f', print_f}};
	int i = 0, j = 0;

	va_start(args, format);
	while (format[i])
	{
		while (j < 4)
		{
			if (p[j].c == format[i])
			{
				printf("%s", s);
				p[j].f(args);
				s = ", ";
				break;
			}
			j++;
		}
		i++;
		j = 0;

	}
	printf("\n");

}

/**
 * print_c - description
 * @args: description
 *
 * Return: description
 */
void print_c(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_s - description
 * @args: description
 *
 * Return: description
 */
void print_s(va_list args)
{
	char *s = va_arg(args, char *);

	if (s != NULL)
	{
		printf("%s", s);
		return;
	}
	printf("(nil)");
}

/**
 * print_i - description
 * @args: description
 *
 * Return: description
 */
void print_i(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_f - description
 * @args: description
 *
 * Return: description
 */
void print_f(va_list args)
{
	printf("%f", va_arg(args, double));
}

