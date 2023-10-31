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

	if (s1 == NULL)
		s1 = "";
	
	if (s2 == NULL)
		s2 = "";

	n1 = strlen(s1);
	n2 = strlen(s2);
	n = n1 + n2;
	s = malloc((n + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < n1; i++)
	{
		s[i] = s1[i];
	}

	for (j = 0; j < n2; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[n] = '\0';

	return (s);
}
