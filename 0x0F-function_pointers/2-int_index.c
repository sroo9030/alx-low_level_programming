#include "function_pointers.h"

/**
  * int_index - searches for an integer
  * @array: the arrary to search it
  * @size: the size of the array
  * @cmp: function to pointer to search
  * Return: an index of the first element where
  * cmp function does not return 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
