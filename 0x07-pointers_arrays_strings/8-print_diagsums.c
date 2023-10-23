#include <stdio.h>
#include "main.h"

/**
  * print_diagsums - sum of the two diagonals of
  * a square matrix of integers
  * @a: an int type poniter point to a matrix
  * @size: an int type parameter, the size of a matirx
  *
  * Return: Nothing
  */
void print_diagsums(int *a, int size)
{
	int i, j, s = size;
	int dia1, dia2;

	for (i = 0; i < s; i++)
	{
		for (j = 0; j < s; j++)
		{
			if (i == j)
				dia1 += a[i * (s + 1)];

			if ((i + j) == (s - 1))
				dia2 += a[(i + 1) * (s - 1)];
		}
	}
	printf("%d, %d\n", dia1, dia2);
}
