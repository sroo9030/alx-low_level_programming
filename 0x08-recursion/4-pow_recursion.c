#include <stdio.h>
#include "main.h"

/**
  * _pow_recursion - the value of x raised to the power of y
  * @x: an int parameter
  * @y: an int parameter
  *
  * Return: The value of x to power of y
  * if y lower than 0 return -1
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
