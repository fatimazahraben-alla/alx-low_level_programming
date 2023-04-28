#include "lists.h"
/**
 *free_list - function that frees a list_t list
 *@head: node
 *Return: void
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
