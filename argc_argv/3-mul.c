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
	int i = 0, j = 0, c = 0;
	int ch1 = 1, ch2 = 1;

	if (argv[argc - 1][1] >= '0' && argv[argc - 1][1] <= '9' &&
		 argv[argc - 2][1] >= '0' && argv[argc - 2][1] <= '9')
	{
		while (argv[argc - 2][c])
		{
			if (argv[argc - 2][c] == '-')
				ch1 *= -1;
			i *= 10;
			i +=  argv[argc - 2][c] - '0';
			i *= ch1;
			c++;
		}
		c = 0;
		while (argv[argc - 1][c])
		{
			if (argv[argc - 1][c] == '-')
				ch2 *= -1;
			j *= 10;
			j +=  argv[argc - 1][c] - '0';
			j *= ch2;
			c++;
		}
		printf("%d\n", (i * j));
		return (0);
	}
	printf("Error\n");
	return (1);
}
