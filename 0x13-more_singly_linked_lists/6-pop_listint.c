#include "lists.h"
/**
 *pop_listint - deletes the head node of a listint_t linked list
 *@head: pointer
 *Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *popnode = *head;

	n = popnode->n;
	*head = popnode->next;
	free(popnode);
	return (n);
}
