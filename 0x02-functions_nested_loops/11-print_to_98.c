#include <stdio.h>
#include "main.h"

/**
  * print_to_98 - Prints all natural numbers from n to 98
  * @n: The number to start print from
  *
  * Return: Always 0
  */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
				printf("%d", i);
			else
				printf("%d, ", i);
		}
	} else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
				printf("%d", i);
			else
				printf("%d, ", i);
		}
	} else
	{
		printf("%d", n);
	}

	printf("\n");
}
