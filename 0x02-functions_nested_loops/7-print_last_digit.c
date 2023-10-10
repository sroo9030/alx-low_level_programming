#include <stdio.h>
#include "main.h"
/**
  * print_last_digit - Prints the last digit of a number.
  * @n: The number
  * @d: Integer to print the last digit
  *
  * Return: The last digit
  */
int print_last_digit(int n)
{
	int d;

	if (n < 0)
	{
		n = n * -1;
	}

	d = n % 10;
	_putchar(d + '0');
	return (d);
}
