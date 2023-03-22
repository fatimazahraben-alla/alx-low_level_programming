#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - prints all natural numbers from n to 98
 *
 *@n: The value
 *
 *Return: void (Success)
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d ", i);
		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d ", i);
		}
		_putchar('\n');
	}
	else if (n == 98)
	{
		printf("%d ", n);
		_putchar('\n');
	}
}
