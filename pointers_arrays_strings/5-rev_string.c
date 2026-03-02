#include "main.h"

/**
 * rev_string - Entry point
 * @s: string
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	char c;
	char str[] = "";
	int counter = 0;

	for (c = s[0]; c != '\0'; c = s[counter])
		counter++;
	counter--;
	for (; counter > -1; counter--)
		str[counter] = s[counter];
	for (; str[counter] != '\0'; counter++)
		s[counter] = str[counter];

}
