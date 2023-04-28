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
 *@head: node
 *@str: data
 *Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = *head, *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = NULL;
	if (node == NULL)
		node = newnode;
	else
	{
		while (node->next != NULL)
		{
			node = node->next;
		}
		node->next = newnode;
	}
	return (newnode);
}
