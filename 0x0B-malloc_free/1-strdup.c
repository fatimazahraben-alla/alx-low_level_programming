#include <stdlib.h>
/**
 *_strdup - returns a pointer which contains a copy of the str
 *@str: string
 *Return: strdup
 */
char *_strdup(char *str)
{
	char *strdup;
	int i, j;

	i = j = 0;
	while (str)
	{
		j++;
	}
	strdup = (char *)malloc((j + 1) * sizeof(char));
	if (!strdup || !str)
	{
		return (NULL);
	}
	while (str)
	{
		strdup[i] = str[i];
		i++;
	}
	return (strdup);
}
