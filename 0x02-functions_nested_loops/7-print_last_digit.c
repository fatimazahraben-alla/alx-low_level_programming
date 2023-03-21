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
	if (n < 0)
	{
		_putchar((-n % 10) + '0');
		return (-n % 10);
	}
	else
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
}
