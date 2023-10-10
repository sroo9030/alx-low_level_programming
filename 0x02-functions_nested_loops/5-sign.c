#include <stdio.h>
#include "main.h"

/**
  * print_sign - prints the sign of a number.
  * @n: The number to print it sign
  *
  * Return: 1 and sing + if it's greater than zero
  * -1 and sing - if it's less than zero
  * otherwise return 0
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
		_putchar('\n');
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
		_putchar('\n');
	} else
	{
		_putchar('0');
		return (0);
		_putchar('\n');
	}
}
