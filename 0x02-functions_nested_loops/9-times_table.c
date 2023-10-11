#include <stdio.h>
#include "main.h"

/**
  * times_table - prints the 9 times table
  *
  * Return: Always 0
  */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = x * y;

			if (z <= 9)
			{
				_putchar(' ');
				_putchar(' ');
			} else
				_putchar((z / 10) + '0');

			_putchar((z % 10) + '0');
			_putchar(' ');

			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
