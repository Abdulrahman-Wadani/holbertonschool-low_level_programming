#include "main.h"
#include <stddef.h>

/**
 * _strstr - Entry point
 * @haystack: str
 * @needle: str
 *
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, c = 0, d = 1;

	while (needle[c])
		c++;

	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			while (d < c)
				if (needle[d] == haystack[i + d])
					d++;
				else
				{
					d = 1;
					break;
				}
			if (d == c)
				return (&haystack[i]);

		}
		i++;
	}

	if (needle[0] == '\0')
		return (haystack);

	return (NULL);

}
