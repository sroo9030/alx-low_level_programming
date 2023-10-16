#include <stdio.h>
#include "main.h"

/**
  * swap_int - swaps the values of two integers
  * @a: an int type parameter
  * @b: an int type parameter
  *
  * Return: Always 0
  */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
