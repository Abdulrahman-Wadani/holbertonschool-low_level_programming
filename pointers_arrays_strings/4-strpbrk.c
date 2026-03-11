#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Entry point
 * @s: str
 * @accept: str
 *
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i])
	{
		while (accept[j])
		{
			if (accept[j] == s[i])
				return (&s[i]);
			j++;
		}
		j = 0;
		i++;
	}

	return (NULL);

}
