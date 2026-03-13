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
	int cv[] = {25, 10, 5, 2, 1};
	int index = 0;
	int num = 0;
	int i = 0;
	int cen;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cen = atoi(argv[argc - 1]);
	if (cen < 0)
	{
		printf("0\n");
		return (0);
	}
	while (1)
	{
		if (i == cen)
			break;
		if (num + cv[index] > cen)
			index++;
		i += cv[index];
		num += 1;
	}

	return (num);
}
