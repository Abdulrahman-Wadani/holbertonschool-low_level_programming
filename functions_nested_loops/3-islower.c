#include "main.h"

/**
 * _islower - Entry point
 * @c: The character to check
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c < 123 && c > 96)
		return (1);
	else
		return (0);
}
