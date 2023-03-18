#include <stdio.h>
/**
 *main - print all possible different combinations of three digits
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int c, h, s;

	for (c = 48; c <= 55; c++)
	{
		for (h = c + 1; h <= 56 ; h++)
		{
			for (s = h + 1; s <= 57; s++)
			{
				putchar(c);
				putchar(h);
				putchar(s);
				if (c != 55 || h != 56 || s != 57)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
