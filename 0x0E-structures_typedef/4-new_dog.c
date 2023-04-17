#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - function that creates a new dog
 *@name: name
 *@age: age
 *@owner: owner
 *Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *g = malloc(sizeof(dog_t));

	if (!g)
	{
		return (NULL);
	}
	g->name = name;
	g->age = age;
	g->owner = owner;
	if (!g->name || !g->owner)
	{
		free(g);
		return (NULL);
	}
	return (g);
}
