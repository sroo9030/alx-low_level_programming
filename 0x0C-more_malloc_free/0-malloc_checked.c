#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * *malloc_checked - a function that allocates memory using malloc
  * @b: an int type parameter
  */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		return("98");

	return (p);
}
