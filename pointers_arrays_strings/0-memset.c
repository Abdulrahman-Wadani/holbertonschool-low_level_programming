#include "main.h"

/**
 * _memset - Entry point
 * @s: str
 * @b: char
 * @n: num
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		s[i++] = b;

	return (s);

}
