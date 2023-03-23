#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 *positive_or_negative - the variable is positive or negative?
 *
 *Return: Always void (Success)
 */
void positive_or_negative(int i)
{
	int n;

	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
}
