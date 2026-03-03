#include "main.h"


/**
 * rev_string - Entry point
 * @s: string
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int co = 0;
	int i = 0;
	char c;
	char c2;

	while (s[co] != '\0')
	{
		co++;
	}

	co--;

	while (i < co)
	{
		c = s[co];
		c2 = s[i];
		s[i++] = c;
		s[co--] = c2;
	}

}
