#include <stdio.h>
#include "main.h"

/**
  * print_square -  prints a square
  * @size: int type number
  *
  * Return: Always 0
  */
void print_square(int size)
{
	int i, j, s = size;

	if (s <= 0)
		_putchar('\n');

	for (i = 0; i < s; i++)
	{
		for (j = 0; j < s; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
