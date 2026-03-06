#include "main.h"

/**
 * _strcat - Entry point
 * @dest: str
 * @src : src
 *
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int lenOfDest = 0;

	while (dest[lenOfDest] != '\0')
		lenOfDest++;

	while (src[i] != '\0')
		dest[lenOfDest++] = src[i++];
	dest[lenOfDest] = '\0';
	return (dest);
}
