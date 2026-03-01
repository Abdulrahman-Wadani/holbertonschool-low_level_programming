#include "main.h"

/**
 * _strlen - Entry point
 * @s: char
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	char i;
	int counter = 0;

	for (i = s[0]; i != '\0';)
	{
		i = s[++counter];
	}
	return (counter);
}
