#include "lists.h"
/**
 *_strlen - returns the length of a string
 *@s: arg
 *Return: len
 */
unsigned int _strlen(const char *s)
{
	unsigned int len, i;

	len = i = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
/**
 *add_node_end - adds a new node at the end of a list_t list
 *@head: head
 *@str: data
 *Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newhead, *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = NULL;
	newhead = *head;
	while (newhead->next != NULL)
	{
		newhead = newhead->next;
	}
	newhead->next = newnode;
	return (newnode);
}
