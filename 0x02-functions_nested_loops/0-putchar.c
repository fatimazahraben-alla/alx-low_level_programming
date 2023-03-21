#include "main.h"
/**
 *main - print _putchar
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char string[8] = "_putchar";

	for (i = 0; i < 9; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
	return (0);
}
