#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

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
	new->name = name;
	new->age = age;
	new->owner = owner;
	if (!new)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
