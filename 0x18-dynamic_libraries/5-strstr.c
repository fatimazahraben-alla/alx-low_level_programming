#include <stddef.h>

/**
 * _strstr - Locates the first occurrence of a substring in a string
 * @haystack: The string to search within
 * @needle: The substring to locate
 *
 * Return: Pointer to the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*haystack)
	{
		while (*haystack && *n && (*haystack == *n))
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack = h + 1;
	}
	return (NULL);
}
