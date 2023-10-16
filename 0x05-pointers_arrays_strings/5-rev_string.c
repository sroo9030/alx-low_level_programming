#include <stdio.h>
#include "main.h"

/**
  * rev_string - reverses a string
  * @s: a char type parameter
  *
  * Return: Always 0
  */
void rev_string(char *s)
{
	int len = 0, i = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	while (len - 1 >= 0)
	{
		putchar(s[len - 1]);
		len--;
	}
	putchar('\n');
}
