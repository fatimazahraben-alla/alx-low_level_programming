#include "main.h"
/**
 *times_table - prints the 9 times table, starting with 0
 *
 *Return: void (Success)
 */
void times_table(void)
{
	int c, i;

	for (c = 0; c < 10; c++)
	{
		for (i = 0; i < 10; i++)
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
				_putchar(c * i + '0');
			}
			else if (c * i >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c * i / 10) + '0');
				_putchar((c * i % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
