#include <stdio.h>
#include "main.h"
/**
 *main - finds and prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 2; i <= 99; i++)
	{
		if (i != 99)
		{
		printf("%lu, ", fibonacci(i));
		}
		else
		{
		printf("%lu", fibonacci(i));
		}
	}
	printf("\n");
	return (0);
}
