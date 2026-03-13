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
	int i;

	if (atoi(argv[argc - 1]) && atoi(argv[argc - 2]))
	{
		i = atoi(argv[argc - 1]) * atoi(argv[argc - 2]);
		printf("%d\n", i);
	}

	printf("Error\n");
	return (1);
}
