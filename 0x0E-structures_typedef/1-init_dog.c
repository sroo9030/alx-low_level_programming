#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - function that initialize a variable of type struct dog
  * @d: a pointer to a new initialize variable of type struct dog
  * @name: a char typr pointer
  * @age: the age
  * @owner: a char type pointer
  *
  * Return: Nothing
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
