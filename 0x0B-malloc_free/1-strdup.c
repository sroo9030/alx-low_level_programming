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
	int i, n;

	if (str == NULL)
		return (NULL);

	n = strlen(str);
	s = (char *)malloc((n + 1) * sizeof(str));

	if (s == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
	{
		s[i] = str[i];
	}

	return (s);
}
