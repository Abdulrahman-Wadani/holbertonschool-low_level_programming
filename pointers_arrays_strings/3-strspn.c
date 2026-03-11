#include "main.h"

/**
 * _strspn - Entry point
 * @s: str
 * @accept: str
 *
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	unsigned int r = 0;

	while (s[j])
	{
		while (accept[i] && accept[i] != ' ')
		{
			if (s[j] == accept[i])
			{
				r++;
			}
			i++;
		}
		i = 0;
		j++;
	}

	return (r);
}
