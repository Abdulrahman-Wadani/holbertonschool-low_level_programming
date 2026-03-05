#include "main.h"

/**
 * _atoi - Entry point
 * @s: string
 *
 * Return: Always 0 (Success)
 */
int _atoi(char *s)
{
	int len_of_s = 0;
	int i = 0;
	int number_Sign = 1;
	int my_bool = 0;
	int bool_startOfNumber = 0;
	int returned;

	while (s[len_of_s] != '\0')
		len_of_s++;

	while (i <= len_of_s)
		if (s[i] >= '0' && s[i] <= '9')
		{
			my_bool = 1;
			break;
		}
		else
			i++;

	i = 0;

	if (my_bool == 0)
		return (0);
	else
	{
		while (i <= len_of_s)
		{
			if (bool_startOfNumber == 1 && !(s[i] >= '0' && s[i] <= '9'))
			{
				returned *= number_Sign;
				return (returned);
			}
			if (s[i] == '+')
				number_Sign *= 1
			else if (s[i] == '-')
				number_Sign *= -1
			if (s[i] >= '0' && s[i] <= '9' && !bool_startOfNumber)
			{
				bool_startOfNumber = 1;
				returned = s[i] - '0';
			}
			else if (bool_startOfNumber)
				returned = returned * 10 + s[i] - '0';
			i++;	
		}
	}
}
