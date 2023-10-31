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
	int i = 0, n;

	if (str == NULL)
		return (NULL);

	n = strlen(str);
	s = malloc(n * sizeof(str));
	if (s == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
