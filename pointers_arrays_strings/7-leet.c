#include "main.h"

/**
 * leet - Entry point
 * @s: str
 *
 * Return: Always 0 (Success)
 */
char *leet(char *s)
{
	char c[] = "aAeEoOtTlL";
	char n[] = "4433007711";
	int i = 0, j = 0;

	while (s[i])
	{
		while (j < 10)
		{
			if (s[i] == c[j])
				s[i] = n[j];
			j++;
		}
		i++;
		j = 0;
	}

	return (s);

}
