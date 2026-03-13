#include <stddef.h>
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
	(void) argc;

	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
