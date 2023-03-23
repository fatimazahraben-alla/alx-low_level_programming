#include "main.h"
/**
 *print_numbers - prints the numbers, from 0 to 9
 *
 *Return: void (Success)
 */
void print_numbers(void)
{
	int c = 48;

	while (c <= 57)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
