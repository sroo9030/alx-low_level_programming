#include "search_algos.h"

/**
  * print_array - a function print array elements
  * @arr: the array
  * @l: the starting index of the subarray
  * @h: the endting index of the subarray
  */
void print_array(int *arr, size_t l, size_t h)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i <= h; i++)
	{
		printf("%d", arr[i]);
		if (i < h)
			printf(", ");
	}
	printf("\n");
}

/**
  * binary_search - a function that perform a binary search
  * @array: an int type pointer to the first element of the array
  * @size: the number of elements in array
  * @value: the value to search for
  * Return: the first index where value is located, otherwise -1
  */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, h = size - 1, m;

	if (array == NULL || size == 0)
		return (-1);

	while (l <= h)
	{
		print_array(array, l, h);
		m = (l + h) / 2;

		if (value == array[m])
			return (m);
		else if (array[m] < value)
			l = m + 1;
		else
			h = m - 1;
	}
	return (-1);
}
