#ifndef	VARIADIC_FUNCTIONS_H

#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct printF - description
 * @c: char
 * @f: fun
 *
 */
typedef struct printF
{
	char c;
	void (*f)(va_list args);
} print;
void print_c(va_list args);
void print_s(va_list args);
void print_f(va_list args);
void print_i(va_list args);

#endif /* VARIADIC_FUNCTIONS_H */
