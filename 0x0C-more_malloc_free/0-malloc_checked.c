#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * *malloc_checked - a function that allocates memory using malloc
  * @b: an int type parameter
  * Return: Nothing
  */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == 0)
		exit(98);

	return (p);
}
