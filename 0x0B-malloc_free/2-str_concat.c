#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
  * *str_concat - a function that concatenates two strings.
  * @s1: string 1
  * @s2: string 2
  *
  * Return: A pointer point to memory which contains the
  * contents of s1 & s2, return NULL if failure
  */
char *str_concat(char *s1, char *s2)
{
	int n, n1, n2, i, j;
	char *s;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	j = 0;
	n1 = strlen(s1);
	n2 = strlen(s2);
	n = n1 + n2 + 1;
	s = malloc(n * sizeof(char));
	for (i = 0; i <= n; i++)
	{
		if (i <= n1)
			s[i] = s1[i];

		s[i] = s2[j];
		j++;
	}
	return (s);
}
