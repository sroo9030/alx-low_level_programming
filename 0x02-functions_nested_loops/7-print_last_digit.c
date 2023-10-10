#include <stdio.h>
#include <limits.h>
#include "main.h"
/**
  * print_last_digit - Prints the last digit of a number.
  * @n: The number
  *
  * Return: The last digit
  */
int print_last_digit(int n)
{
	if (n == INT_MIN)
	{
		n = -(n % 10);
		_putchar(n + '0');
		return (0);
	} else if (n < 0)
	{
		n = n * -1;
	}

	n = n % 10;
	_putchar(n + '0');
	return (n);
}
