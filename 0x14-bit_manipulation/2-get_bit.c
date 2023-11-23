#include "main.h"

/**
  * get_bit - a function returns a value of a bit at a given index
  * @n: the number
  * @index: the index
  *
  * Return: value of the bit at index, -1 otherwise
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if (n > 0 && index > 0)
		return (get_bit((n >> 1), (index - 1)));

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
