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
	char *ptr;
	void *p;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	p = ptr;
	for (i = 0; i < (size * nmemb); i++)
		ptr[i] = 0;

	return (p);
}
