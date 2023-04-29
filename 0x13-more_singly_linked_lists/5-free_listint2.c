#include "lists.h"
/**
 *free_listint2 - function that frees a listint_t list
 *@head: pointer
 *Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node = *head;

	if (!head)
		return;
	while (node)
	{
		free(node);
		node = node->head;
	}
}
