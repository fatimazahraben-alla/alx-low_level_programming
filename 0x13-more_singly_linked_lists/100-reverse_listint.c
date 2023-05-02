#include "lists.h"
/**
 *reverse_listint - function that reverses a listint_t linked list
 *@head: pointer
 *Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prenode = NULL, *nextnode;

	while (*head)
	{
		nextnode = (*head)->next;
		(*head)->next = prenode;
		prenode = *head;
		*head = nextnode;
	}
	*head = prenode;

	return (*head);
}
