#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * *_calloc - a function that allocates memory for an array
  * @nmemb: an int type array
  * @size: sive of the array
  * Return: Nothing
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(unsigned int *));
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
