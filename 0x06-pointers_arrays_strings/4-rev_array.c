#include <stdio.h>
#include "main.h"

/**
  * reverse_array - reverses the content of an array of integers
  * @a: An int type array
  * @n: The number of elements
  *
  * Return: Nothing
  */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
