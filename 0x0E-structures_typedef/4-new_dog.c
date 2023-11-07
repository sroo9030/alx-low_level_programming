#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
  * new_dog - function that creates a new dog
  * @name: a char type pointer
  * @age: age of the dog
  * @owner: a char type pointer
  *
  * Return: a pointer to the new dog data
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = malloc(strlen(name) + 1);
	new->owner = malloc(strlen(owner) + 1);

	if (new->name == NULL || new->owner == NULL)
	{
		free(new->name);
		free(new->owner);
		free(new);
		return (NULL);
	}

	strcpy(new->name, name);
	strcpy(new->owner, owner);
	new->age = age;

	return (new);
}
