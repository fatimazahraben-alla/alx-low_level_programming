#include "lists.h"
/**
 *print_before - print before the main funct is executed
 *Return: void
 */
void __attribute__((constructor)) print_before(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
