#include <stdlib.h>
/**
 *str_concat - concatenates two strings
 *@s1: str1
 *@s2: str2
 *Return: str
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, j2;

	i = j = j2 = 0;
	while (s1[j])
	{
		j++;
	}
	while (s2[j2])
	{
		s1[j] = s2[j2];
		j++;
		j2++;
	}
	if (!s1)
	{
		j = j2;
	}
	if (!s2)
	{
		j = j - j2;
	}
	str = malloc(sizeof(char) * j + 1);
	if (!str)
	{
		return (NULL);
	}
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
