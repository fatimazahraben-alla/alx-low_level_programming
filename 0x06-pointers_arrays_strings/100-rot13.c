/**
 *rot13 - encodes a string into rot13
 *@s: st
 *Return: s
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == s[i])
			{
				s[i] = b[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
