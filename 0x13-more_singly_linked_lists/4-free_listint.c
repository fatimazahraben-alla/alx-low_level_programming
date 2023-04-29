#include "lists.h"
/**
 *free_listint - function that frees a listint_t list
 *@head: node
 *Return: void
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
