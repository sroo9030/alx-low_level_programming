#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * *array_range - a function that creates an array of integers
  * @min: an int type parameter
  * @max: an int type parameter
  * Return: A pointer
  */
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}

	return (ptr);
}
