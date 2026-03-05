#include "main.h"

/**
 * _strcpy - Entry point
 * @dest: dest
 * @src: src
 *
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	char *p;
	int c = 0;
	int c2 = 0;

	while (src[c] != '\0')
		c++;

	while (c2 <= c)
		dest[c2++] = src[c];

	p = &dest;

	return(p);
}
