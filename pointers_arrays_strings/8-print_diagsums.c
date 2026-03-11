#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: arr
 * @size: num
 *
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, j = 0, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(i * size) + j];
		j++;
	}

	j = size - 1;

	for (i = 0; i < size; i++)
	{
		sum2 += a[(i * size) + j];
		j--;
	}

	printf("%d, %d\n", sum1, sum2);
}
