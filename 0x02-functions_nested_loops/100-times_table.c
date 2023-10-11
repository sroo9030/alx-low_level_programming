#include <stdio.h>
#include "main.h"

/**
  * print_times_table - Prints the n times table
  * @n: The number of table
  *
  * Return: Print table if n between 0 and 15
  */
void print_times_table(int n)
{
	int x, y, z;

	if (n <= 15 && n >= 0)
	{
		for (x = 0; x <= n ; x++)
	{
		for (y = 0; y <= n; y++)
		{
			z = x * y;
			if (z > 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			} else
			{
				if (y != 0)
				{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				}
				_putchar((z % 10) + '0');
			}
		}
		_putchar('\n');
	}
	}
}
