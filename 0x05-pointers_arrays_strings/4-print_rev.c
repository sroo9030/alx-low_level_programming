#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * print_rev -  prints a string  in reverse
  * @s: a char type parameter
  *
  * Return: Always 0
  */
void print_rev(char *s)
{
	int len = 0, i = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	while (len - 1 >= 0)
	{
		putchar(s[len]);
		len--;
	}
	putchar('\n');
}
