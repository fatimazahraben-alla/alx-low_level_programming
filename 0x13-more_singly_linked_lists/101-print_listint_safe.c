#include "lists.h"
/**
 *print_listint_safe - function that prints a listint_t linked list
 *@head: node
 *Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	listint_t *node;

	while (head != NULL)
	{
		if (head >= head->next)
		{
			node = head->next;
			while (node != head)
			{
				num_nodes++;
				printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
			}
			num_nodes++;
			printf("[%p] %d\n", (void *)head, head->n);
			printf("-> [%p] %d\n", (void *)node, node->n);
			return (num_nodes);
		}
		else
		{
			num_nodes++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	return (num_nodes);
}
