#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 * @n: number
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	for(; n != 98; n++)
	{
		if (n != 98)
			printf("%d, ", n);
		else if (n == 99 || n == 97)
			printf("%d\n", n);
		if (n > 98)
			n--;
		else if (n < 98)
			n++;
	}
}
