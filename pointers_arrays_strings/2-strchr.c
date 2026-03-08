#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point
 * @s: str
 * @c: char
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *p = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
		i++;
	}

	if (p == 0)
		return (NULL);
	return (p);

}
