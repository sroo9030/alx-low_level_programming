#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _realloc - a function that reallocates a memory block
  * @ptr: a void type pointer
  * @old_size: an int type parameter
  * @new_size: an int type parameter
  *
  * Return: Nothing
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		p[i] = ((char *)ptr)[i];

	free(ptr);
	return (p);
}
