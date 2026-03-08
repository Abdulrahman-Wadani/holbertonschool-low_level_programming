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

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}

	if (s[i] == '\0')
		return (&s[i]);
	return (NULL);

}
