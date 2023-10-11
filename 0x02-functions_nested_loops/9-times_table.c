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
		_putchar('0');
		for (y = 1; y < 10; y++)
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
