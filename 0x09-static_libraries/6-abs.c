#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _abs - Computes the absolute value of an integer.
  * @n: The intger to be compute
  *
  * Return: Absolute value
  */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	return (n);
}
