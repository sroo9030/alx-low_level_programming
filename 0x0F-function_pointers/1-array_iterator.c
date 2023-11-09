#include "function_pointers.h"

/**
  * array_iterator - a function that executes a function given
  * as a parameter on each element of an array
  * @array: the array
  * @size: tha size if the array
  * @action: a pointer to function to print an array element
  *
  * Return: Nothing
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action && size != 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
