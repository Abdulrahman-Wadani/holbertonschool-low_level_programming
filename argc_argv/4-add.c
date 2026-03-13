#include <stdlib.h>
#include <stdio.h>

/**
 * check - short description
 * @s: description
 *
 * Return: Nothing
 */
int check(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] > '9' && s[i] < '0')
			return (0);
		i++;
	}

	return (1);
}
/**
 * main - short description
 * @argc: description
 * @argv: s
 *
 * Return: Nothing
 */
int main(int argc, char **argv)
{
	int i = 1;
	int total = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	while (argv[i])
	{
		if (check((argv[i])) && atoi(argv[i]) > 0)
			total += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", total);
	return (0);
}
