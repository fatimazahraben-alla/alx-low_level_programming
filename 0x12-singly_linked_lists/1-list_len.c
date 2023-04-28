#include "lists.h"
/**
 *list_len - returns the number of elements in a linked list
 *@h: node
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t num_elemts = 0;

	while (h != NULL)
	{
		num_elemts++;
		h = h->next;
	}
	return (num_elemts);
}
