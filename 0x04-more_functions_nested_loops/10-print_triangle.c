#include <stdio.h>
#include "main.h"

/**
  * print_triangle -  prints a triangle
  * @size: int type number
  *
  * Return: Always 0
  */
void print_triangle(int size)
{
	int i, j, s = size;

	if (s <= 0)
		_putchar('\n');

	for (j = 1; j <= s; j++)
	{
		for (i = s - j; i > 0; i--)
			_putchar(' ');

		for (i = 0; i < j; i++)
			_putchar('#');

		if (j == s)
			continue;

		_putchar('\n');
	}
	_putchar('\n');
}
