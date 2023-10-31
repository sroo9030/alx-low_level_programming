#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * *_strdup - a function copy a string to a newly allocated space.
  * @str: a char type pointer
  *
  * Return: A pointer to allocated space in memory
  */
char *_strdup(char *str)
{
	char *s;
	int n, *l;

	if (str == NULL)
		return (NULL);

	n = strlen(str);
	l = (int *)malloc(sizeof(char) * n);
	if (l == NULL)
		return (NULL);

	s = malloc(sizeof(char) * n);
	s = strdup(str);
	return (s);
}
