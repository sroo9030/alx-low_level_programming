#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _abs - Computes the absolute value of an integer.
  * @n: The intger to be compute 
  * @num: The absolute value of negative integer
  *
  * Return: Absolute value
  */
int _abs(int n)
{
	int num;

	if (n < 0)
	{
		num = n * -1;
		return (num);
	}
	return (n);
}
