#include <stdlib.h>
char *argstostr(int ac, char **av)
{
	int i, j, l;
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
			j++;
		}
		j++;
	}
	s = malloc(sizeof(char) * j);
	j = 0;
	for (i = 0; i < ac; i++)
	{
		while (av[i][j])
		{
			s[l] = av[i][j];
			l++;
		}
		s[l] = '\n';
		l++;
	}
	s[l] = '\0';
	return (s);
}
