#include "main.h"
/**
 *print_times_table - prints the n times table, starting with 0
 *
 *@n: The value
 *
 *Return: void (Success)
 */
void print_times_table(int n)
{
	int c, i;

	if (n < 15 || n > 0)
	{
		for (c = 0; c <= n; c++)
		{
			for (i = 0; i <= n; i++)
			{
				if (i == 0)
				{
					_putchar(c * i + '0');
				}
				if (c * i < 10 && i != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(c * i + '0');
				}
				else if (c * i >= 10 && c * i <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((c * i / 10) + '0');
					_putchar((c * i % 10) + '0');
				}
				else if (c * i >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((c * i / 100) + '0');
					_putchar(((c * i / 10) % 10) + '0');
					_putchar((c * i % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
