/**
 *string_toupper - converts lowercase characters to uppercase
 *@s: str
 *Return: s
 **/
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] += 'A' - 'a';
		}
		i++;
	}
	return (s);
}
