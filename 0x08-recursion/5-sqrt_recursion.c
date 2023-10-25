#include <stdio.h>
#include "main.h"

/**
  * _natural_square - check the square of a given number
  * @sq: the square result
  * @n: the number to find it square
  *
  * Return: the natural square, -1 otherwise
  */
int _natural_square(int sq, int n)
{
	if (sq * sq == n)
		return (sq);

	if (sq > n)
		return (-1);

	return (_natural_square(sq + 1, n));
}

/**
  * _sqrt_recursion - the natural square root of a number
  * @n: an int type parameter
  *
  * Return: natural square root, or -1 if the number does not have it
  */
int _sqrt_recursion(int n)
{
	return (_natural_square(1, n));
}
