#include <stdio.h>
/**
 *main - print all possible different combinations of two digits
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int c, h;

	for (c = 48; c <= 56; c++)
	{
		for (h = c + 1; h <= 57 ; h++)
		{
			putchar(c);
			putchar(h);
			if (c != 56 || h != 57)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
