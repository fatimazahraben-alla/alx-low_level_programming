#include "lists.h"
/**
 *add_nodeint_end - adds a new node at the end of a listint_t list
 *@head: node
 *@n: integer
 *Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = *head;
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (node->next)
	{
		node = node->next;
	}
	node->next = newnode;

	return (newnode);
}
