#include "main.h"

/**
 * _islower - Entry point
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c > 122 && c < 97)
		return (0);
	else
		return (1);
}
