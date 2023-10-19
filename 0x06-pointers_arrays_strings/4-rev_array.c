#include <stdio.h>
#include "main.h"

/**
  * reverse_array - reverses the content of an array of integers
  * @a: an int type parameter
  * @n: an int type parameter
  *
  * Return: Nothing
  */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		printf("%d", a[i]);

		if (i != 0)
			printf(", ");
	}
	printf("\n");
}
