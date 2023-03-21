#include "main"
/**
 *main - print _putchar 
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char string [8] = "_putchar";

	for (i = 0; i < 9; i++)
	{
		_putchar(string[i]);
	}
	putchar('\n');
	return (0);
}
