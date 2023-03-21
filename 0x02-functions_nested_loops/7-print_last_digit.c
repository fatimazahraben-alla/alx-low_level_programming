#include "main.h"
/**
 *print_last_digit - print the last digit of a number
 *
 *@n: The value
 *
 *Return: last digit value (Success)
 */
int print_last_digit(int n)
{
	int d;

	d = n % 10;
	if (d < 0)
	{
	d = -d
	}
	_putchar('0' + d);
	return (d);
}
