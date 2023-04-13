#include <stdlib.h>
char *argstostr(int ac, char **av)
{
	int i, j, l, len;
	char *s;

	l = j = i = 0;
	if (!av || ac == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		while (av[i][j])
		{
			len++;
			j++;
		}
	}
	s = malloc(sizeof(char) * (len + 1));
	j = 0;
	for (i = 0; i < ac; i++)
	{
		while (av[i][j])
		{
			s[l] = av[i][j];
			l++;
		}
	}
	if (s[l] == '\0')
	{
		s[l + 1] = '\n';
	}
	return (s);
}
