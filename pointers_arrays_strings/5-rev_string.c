#include <stdio.h>
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
	int co2 = 0;
	int i;
	char c;

	while(s[co] != '\0')
	{
		co++;
	}

	while (co > 0)
	{
		c = s[co - 1];
		for (i = 0; i < co - 2; i++)
			s[co - (i + 1)] = s[co - (i + 2)];
		s[co2] = c;
		co2++;
		co--;
	}
}
int main(void)
{
	char c[] = "holberton!";
	rev_string(c);
	printf("%s", c);
	return(0);
}
