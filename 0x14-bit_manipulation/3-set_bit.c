#include "main.h"

/**
  * set_bit - function sets a value of a bit to 1 at a given index
  * @n: pointer to the value
  * @index: the index
  *
  * Return: 1 if succeeded, -1 otherwise
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
