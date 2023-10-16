#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * rev_string - reverses a string
  * @s: a char type parameter
  *
  * Return: Always 0
  */
void rev_string(char *s)
{
	int i = 0;
	int j = strlen(s) - 1;
	char c;

	while (i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
}
