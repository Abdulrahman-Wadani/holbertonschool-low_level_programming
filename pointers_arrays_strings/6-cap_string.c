#include "main.h"

/**
 * cap_string - Entry point
 * @s: str
 *
 * Return: Always 0 (Success)
 */
char *cap_string(char *s)
{
	char c[] = " {}\t\n,;.!?\"()";
	int i = 0;
	int j = 0;

	while (s[i])
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
		else if (s[i] >= 'a' && s[i] <= 'z')
			while (j < 13)
			{
				if (s[i - 1] == c[j])
					s[i] = s[i] - 32;
				j++;
			}
		i++;
		j = 0;
	}

	return (s);
}
