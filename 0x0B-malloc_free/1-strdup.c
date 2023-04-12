#include <stdlib.h>
/**
 *strlength - len of string
 *@s: string
 *Return: len
 */
int strlength(char *s)
{
	int i = 1;

	while (s)
	{
		s++;
		i++;
	}
	return (i);
}
/**
 *_strdup - returns a pointer which contains a copy of the str
 *@str: string
 *Return: strdup
 */
char *_strdup(char *str)
{
	char *strdup = malloc(strlenght(str) * sizeof(char));
	int i;

	if (!str)
	{
		return (NULL);
	}
	for (i = 0; i < strlength(str); i++)
	{
		strdup[i] = str[i];
	}
	return (strdup);
}
