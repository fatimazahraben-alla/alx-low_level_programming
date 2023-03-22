#include <stdio.h>
#include "main.h"
/**
 *main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 2; i <= 51; i++)
	{
		printf("%lu, ", fibonacci(i));
	}
	printf("\n");
	return (0);
}
