/**
 * _strcmp - Entry point
 * @s1: str
 * @s2: str
 *
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, c = 0, d = 0;

	while (s1[i])
		j = j + s1[i++];

	while (s2[c])
		d = d + s1[c++];

	if (j == d)
		return (0);
	if (j > d)
		return (15);
	return (-15);
}
