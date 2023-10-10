#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _abs - computes the absolute value of an integer.
  *
  * Return: absolute value
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
