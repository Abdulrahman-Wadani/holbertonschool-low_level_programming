#include "main.h"


/**
 * rev_string - Entry point
 * @s: string
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int counter = 0;
	int counter2 = 0;
	char c;
	char *str;

	for (c = s[counter]; c != '\0'; counter++)
		str[counter] = s[counter];

	for (; counter > -1; counter2++)
		s[counter2] = str[--counter];

	
}
