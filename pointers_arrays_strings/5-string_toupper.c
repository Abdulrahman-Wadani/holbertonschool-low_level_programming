#include "main.h"

/**
 * string_toupper - Entry point
 * @s: str
 *
 * Return: Always 0 (Success)
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
