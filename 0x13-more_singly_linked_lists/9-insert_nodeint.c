#include "lists.h"
/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: pointer
 *@idx: index
 *@n: data
 *Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *ptrnode = *head;

	if (!newnode || !head)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	while (idx != 1)
	{
		ptrnode = ptrnode->next;
		idx--;
	}
	newnode->next = ptrnode->next;
	ptrnode->next = newnode;

	return (newnode);
}
