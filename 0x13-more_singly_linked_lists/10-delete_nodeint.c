#include "lists.h"
/**
 *delete_nodeint_at_index - deletes the node at index
 *@head:pointer
 *@index: index
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prenode, *popnode = *head;

	if (*head == NULL)
		return (-1);
	while (*head != NULL && index)
	{
		popnode = popnode->next;
		index--;
	}
	if (popnode == NULL)
		return (-1);
	if (popnode == *head)
	{
		*head = popnode->next;
	}
	else
	{
		prenode = *head;
		while (prenode->next != popnode)
		{
			prenode = prenode->next;
		}
		prenode->next = popnode->next;
	}
	free(popnode);
	return (1);
}
