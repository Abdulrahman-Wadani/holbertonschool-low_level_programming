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
	(void) argv;

	if (argc < 2)
		printf("0\n");
	else
	printf("%d\n", argc - 1);
	return (0);
}
