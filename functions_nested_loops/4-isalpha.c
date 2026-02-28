#include "main.h"

/**
 * _isalpha - Entry point
 * @c: The character to check
 *
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c < 123 && c > 96) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
