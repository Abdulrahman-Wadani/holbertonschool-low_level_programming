#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 103; i++)
	{
		if (i == 58)
			i = 97;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
