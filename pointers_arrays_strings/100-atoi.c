#include "main.h"

/**
 * _atoi - Entry point
 * @s: string
 *
 * Return: Always 0 (Success)
 */
int _atoi(char *s)
{
	int i = 0;
	int number_Sign = 1;
	int my_bool = 0;
	int bool_startOfNumber = 0;
	unsigned int my_return;

	while (s[i] != '\0')
		if (s[i] >= '0' && s[i] <= '9')
		{
			my_bool = 1;
			break;
		}
		else
			i++;
	i = 0;
	if (my_bool == 1)
	{
		while (s[i] != '\0')
		{
			if (bool_startOfNumber == 1 && !(s[i] >= '0' && s[i] <= '9'))
				break;
			if (s[i] == '-')
				number_Sign *= -1;
			if (s[i] >= '0' && s[i] <= '9' && !bool_startOfNumber)
			{
				bool_startOfNumber = 1;
				my_return = s[i] - '0';
			}
			else if (bool_startOfNumber)
				my_return = my_return * 10 + (s[i] - '0');
			i++;
		}
	}
	if (number_Sign == -1)
		return (-my_return);
	return (my_return);
}
