#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * *create_array - creates an array of chars
  * @size: an int type parameter
  * @c: a char typr parameter
  * Return: A pointer to the array, NULL otherwise
  */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size  == 0)
		return (NULL);

	str = malloc(size * sizeof(*str));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
