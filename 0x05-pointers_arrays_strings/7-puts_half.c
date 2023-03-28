#include "main.h"
/**
 *puts_half - prints half of a string
 *
 *@str: arg
 *
 *Return: void
 */
void puts_half(char *str)
{
	int i, j;

	i = j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	for (j = i / 2; j <= i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
