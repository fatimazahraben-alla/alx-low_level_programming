#include "lists.h"
/**
 *listint_len - returns the number of elements in a linked listint_t list
 *@h: node
 *Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num_elemts = 0;

	while (h != NULL)
	{
		h = h->next;
		num_elemts++;
	}
	return (num_elemts);
}
