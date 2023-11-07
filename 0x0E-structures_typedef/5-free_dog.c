#include "dog.h"

/**
  * free_dog - a function that frees dogs
  * @d: a pointer to buffer that holds the dog data
  * Return: Nothing.
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
	}
}
