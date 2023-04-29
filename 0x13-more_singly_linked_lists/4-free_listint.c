#include "lists.h"
/**
 *free_listint - function that frees a listint_t list
 *@head: node
 *Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
