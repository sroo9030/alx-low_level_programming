#include <stdio.h>
#include "main.h"

/**
  * print_diagonal - draws a diagonal line on the terminal
  * @n: int type number
  *
  * Return: Always 0
  */
void print_diagonal(int n)
{
	int i, j = 0;

	while (n > 0)
	{
		for (i = j; i > 0; i--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		j++;
		n--;
	}
	_putchar('\n');
}
