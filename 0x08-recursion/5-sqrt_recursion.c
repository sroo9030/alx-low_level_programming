#include <stdio.h>
#include <math.h>
#include "main.h"

/**
  * _sqrt_recursion - the natural square root of a number
  * @n: an int type parameter
  *
  * Return: natural square root, or -1 if the number does not have it
  */
int _sqrt_recursion(int n)
{
	int sq;

	sq = sqrt(n);
	if (n % sq != 0)
		return (-1);

	return (sq);
}
