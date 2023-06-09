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
 *add_node - adds a new node at the beginning of a list_t list
 *@head: head
 *@str: data
 *Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = _strlen(str);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
