#include "main.h"

/**
 * reverse_array - Entry point
 * @a: arr
 * @n: size
 *
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int max = n - 1, min = 0;
	int tmp1, tmp2;

	while (min < max)
	{
		tmp1 = a[min];
		tmp2 = a[max];
		a[min++] = tmp2;
		a[max--] = tmp1;
	}

}
