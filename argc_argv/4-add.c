#include <stdlib.h>
#include <stdio.h>
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
		if (atoi(argv[i]) && atoi(argv[i]) > 0)
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
