#include <stdio.h>
#include "main.h"
/**
 *main - finds and prints the sum of the even-valued terms
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i = 2;
	long s = 0;

	while (fibonacci(i) <= 4000000)
	{
		if (fibonacci(i) % 2 == 0)
		{
			s += fibonacci(i);
		}
		i++;
	}
	printf("%lu\n", s);
	return (0);
}
