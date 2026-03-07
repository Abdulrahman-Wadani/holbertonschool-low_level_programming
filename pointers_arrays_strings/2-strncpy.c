/**
 * _strncpy - Entry point
 * @dest: str
 * @src: str
 * @n: n
 *
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;
	int cond = 1;

	while (c < n)
	{
		if (src[c] && cond)
			dest[c] = src[c];
		else
		{
			dest[c] = '\0';
			cond = 0;
		}
		c++;
	}

	return (dest);
}
